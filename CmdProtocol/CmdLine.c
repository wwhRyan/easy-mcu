/**
 * @file CmdLine.c
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief 
 * @version 1.02
 * @date 2021-09-03
 * 
 * @copyright Copyright@appotronics 2021. All Rights Reserved
 * 
 */

#include "CmdLine.h"
#include "GlobalDrvHeader.h"
#include "GlobalSerHeader.h"
#include "MyDcMotorDriver.h"
#include "ErrorLog.h"
#include "APPMain.h"
#include "EepromService.h"
#include "MyStoreFlash.h"
#include "FlashManager.h"

#define WRONG_CMD (0xFF)
#define MAX_WRITE_LEN (0x7F)

static void m_hello(const char *cmd, ...);
static void m_flashwrite(const char *cmd, ...);
static void m_flasherase(const char *cmd, ...);
static void m_Readflash(const char *cmd, ...);
static void m_FourPoint(const char *cmd, ...);
static void m_CXD3555START(const char *cmd, ...);
static void m_CXD3555GET(const char *cmd, ...);
static void m_CXD3555SET(const char *cmd, ...);
static void m_CXD3555_DOUBLESET(const char *cmd, ...);
static void m_CXD3555_QUADRASET(const char *cmd, ...);
static void m_3555_SETCMD_Decode(const char *cmd, uint16_t *reg_addr, uint32_t *pData, uint8_t *len);
static void m_CWSpeedSet(const char *cmd, ...);
static void m_SPI2DAC_SET(const char *cmd, ...);

static int m_FindInputCmdId(const char *inputCmd, const CmdListUnit *cmdList);

#define CMDLIST_SIZE sizeof(g_CmdList) / sizeof(CmdListUnit)
CmdListUnit g_CmdList[] =
    {
        {"hello", m_hello},
        {"flashwrite", m_flashwrite},
        {"flasherase", m_flasherase},
        {"Readflash", m_Readflash},
        {"KST", m_FourPoint},
        {"CXD3555START", m_CXD3555START},
        {"CXD3555GET", m_CXD3555GET},
        {"CXD3555SET", m_CXD3555SET},
        {"CXD3555_DOUBLESET", m_CXD3555_DOUBLESET},
        {"CXD3555_QUADRASET", m_CXD3555_QUADRASET},
        {"CWSpeedSet", m_CWSpeedSet},
        {"SPI2DAC_SET", m_SPI2DAC_SET},
};

/**
 * Return cmdSize before flag like ":" or "=", cmdSize contains ":"
 * eg: CatchCmdSizeBeforeFlag("setPid=xxx", "=") = 7(not 6!)
 */
static size_t m_CatchCmdSizeBeforeFlag(const char *cmd, char *flag)
{
    size_t ret = 0;
    char *tmp = (char *)malloc(strlen(cmd));
    strcpy(tmp, cmd);
    char *token;
    token = strtok(tmp, flag);
    ret = strlen(token) + 1;
    free(tmp);
    return ret;
}

static uint32_t getIndexOfSigns(char ch)
{
    if (ch >= '0' && ch <= '9')
    {
        return ch - '0';
    }
    else if (ch >= 'A' && ch <= 'F')
    {
        return ch - 'A' + 10;
    }
    else if (ch >= 'a' && ch <= 'f')
    {
        return ch - 'a' + 10;
    }
    return 999;
}

static uint32_t hex2dec(unsigned char *source)
{
    uint32_t sum = 0;
    uint32_t t = 1;
    unsigned char i = 0;

    unsigned char len = strlen((char *)source);
    for (i = len; i >= 1; i--)
    {
        sum += t * getIndexOfSigns(*(source + i - 1));
        t *= 16;
    }
    return sum;
}

static uint32_t m_CatchCmdSizeAfterFlag(const char *cmd, char *flag)
{
    uint8_t i = 0;
    uint32_t data[2];

    char *tmp = (char *)malloc(strlen((char *)cmd));
    strcpy(tmp, cmd);
    char *token = NULL;

    token = strtok((char *)tmp, flag);
    while (token)
    {
        data[i++] = hex2dec((unsigned char *)token);
        token = strtok(NULL, flag);
    }

    free(tmp);
    return data[1];
}

static int m_FindInputCmdId(const char *inputCmd, const CmdListUnit *cmdList)
{
    for (int i = 0; i < CMDLIST_SIZE; i++)
    {
        if ((strstr(inputCmd, cmdList[i].CmdString)))
        {
            return i;
        }
    }
    return WRONG_CMD;
}

void ICmdLinesInput(char *cmd)
{
    uint8_t WRONG_asMsg[] = "\0";
    if (strcmp(cmd, (char *)WRONG_asMsg))
    {
        int cmdId = m_FindInputCmdId(cmd, g_CmdList);
        if (cmdId != WRONG_CMD)
        {
            g_CmdList[cmdId].CmdFuncPtr(cmd);
        }
        else
        {
            DebugPrintf("WRONG_CMD!\r\n");
        }
    }
}

static void m_hello(const char *cmd, ...)
{
    DebugPrintf("Motor Speed is : %d\r\n", app_get()->motor.speed);
}

static void m_flashwrite(const char *cmd, ...)
{
    int data = 0;
    int id = 0;
    printf("%s\n", __func__);
    int cmdsize = m_CatchCmdSizeBeforeFlag(cmd, "=");
    sscanf(cmd + cmdsize, "%d", &id);

    FlashFileInsertWrite(id, 0, &data, INT_LENGTH);
}

static void m_flasherase(const char *cmd, ...)
{
    int id;
    printf("%s\n", __func__);
    int cmdsize = m_CatchCmdSizeBeforeFlag(cmd, "=");
    sscanf(cmd + cmdsize, "%d", &id);

    FlashFileErase(id);
    printf("%s - %s\n", __func__, "OK");
}

static void m_Readflash(const char *cmd, ...)
{
    int id;
    printf("%s\n", __func__);
    int cmdsize = m_CatchCmdSizeBeforeFlag(cmd, "=");
    sscanf(cmd + cmdsize, "%d", &id);
    uint32_t *pmem = malloc(PAGE_SIZE);
    if (pmem == NULL)
    {
        printf("malloc error.\n");
        return;
    }

    for (size_t page_inx = 0; page_inx <= FlashFileGetSize(id) / PAGE_SIZE; page_inx++)
    {
        int read_byte_size;
        memset(pmem, 0, PAGE_SIZE);

        if (FlashFileGetSize(id) - page_inx * PAGE_SIZE >= PAGE_SIZE)
        {
            read_byte_size = PAGE_SIZE;
        }
        else
        {
            read_byte_size = FlashFileGetSize(id) - page_inx * PAGE_SIZE;
        }

        FlashFileInsertRead(id, page_inx * PAGE_SIZE, pmem, read_byte_size);
        for (size_t j = 0; j < read_byte_size / 4; j++)
        {
            // printf("mem[%.3d] %.8X ", j, pmem[j]);
            printf(" %.8X", pmem[j]);
        }
        printf("\n");
    }

    printf("id = %d\n", id);

    free(pmem);
}

static void m_FourPoint(const char *cmd, ...)
{
    int FourPoint[8] = {0};

    int cmdsize = m_CatchCmdSizeBeforeFlag(cmd, "=");
    char *tmp = (char *)malloc(strlen((char *)cmd) - cmdsize);

    strcpy(tmp, cmd + cmdsize);
    if (8 != sscanf(tmp, "%d,%d,%d,%d,%d,%d,%d,%d",
                    &FourPoint[0], &FourPoint[1], &FourPoint[2], &FourPoint[3],
                    &FourPoint[4], &FourPoint[5], &FourPoint[6], &FourPoint[7]))
    {
        DebugPrintf("KST cmd error!");
        return;
    }

    for (size_t i = 0; i < ARRAY_SIZE(FourPoint); i++)
    {
        DebugPrintf("%d \n", FourPoint[i]);
    }

    free(tmp);

    PanelCtrlFourPointSet(FourPoint);
}

static void m_CXD3555START(const char *cmd, ...)
{
    IMy3555RegisterInit();
}

static void m_CXD3555GET(const char *cmd, ...)
{
    uint16_t addr;
    uint8_t size;
    uint16_t in_data[2];
    uint8_t out_data[MAX_WRITE_LEN];
    uint8_t i = 0;

    memset(in_data, 0, 2 * sizeof(uint16_t));
    memset(out_data, 0, MAX_WRITE_LEN * sizeof(uint8_t));

    char *tmp = (char *)malloc(strlen(cmd));
    memset(tmp, 0, (size_t)sizeof(tmp));

    strcpy(tmp, cmd);
    char *token;
    token = strtok((char *)tmp, ",");

    while (token)
    {
        token = strtok(NULL, ",");
        in_data[i++] = hex2dec((unsigned char *)token);
    }

    addr = in_data[0] & 0xFFFF;
    size = in_data[1] & 0xFF;

    m_3555_Data_Read(addr, size);

    free(tmp);
}

static void m_3555_SETCMD_Decode(const char *cmd, uint16_t *reg_addr, uint32_t *pData, uint8_t *len)
{
    uint8_t i = 0;
    char *tmp = (char *)malloc(strlen((char *)cmd));

    memset(tmp, 0, strlen((char *)tmp));
    memset(pData, 0, MAX_WRITE_LEN * sizeof(uint32_t));

    strcpy(tmp, cmd);
    char *token = NULL;
    token = strtok((char *)tmp, ",");

    while (token)
    {
        pData[i++] = (hex2dec((unsigned char *)token)) & 0xFFFFFFFF;
        token = strtok(NULL, ",");
    }

    *len = i - 2;
    *reg_addr = pData[1];
    free(tmp);
}

static void m_CXD3555SET(const char *cmd, ...)
{
    uint16_t reg_addr;
    uint32_t in_data[MAX_WRITE_LEN];
    uint8_t out_data[MAX_WRITE_LEN];
    uint8_t in_size = 0;
    uint8_t out_size = 0;

    m_3555_SETCMD_Decode(cmd, &reg_addr, in_data, &in_size);

    for (uint8_t i = 2; i < in_size + 2; i++)
    {
        out_data[out_size++] = in_data[i] & 0xFF;
    }

    m_3555_RegInfoDump(reg_addr, out_data, out_size);

    ISoftwareI2CRegWrite(&g_3555_SoftwareI2C, CXD3555GG_ADDR, reg_addr & 0xFFFF, REG_ADDR_2BYTE, out_data, out_size, 0xFFFF);

#ifdef __DEBUG__
    DelayMs(20);
    m_3555_Data_Read(reg_addr, out_size);
#endif
}

static void m_CXD3555_DOUBLESET(const char *cmd, ...)
{
    uint16_t reg_addr;
    uint32_t in_data[MAX_WRITE_LEN];
    uint8_t out_data[MAX_WRITE_LEN];
    uint8_t in_size = 0;
    uint8_t out_size = 0;

    m_3555_SETCMD_Decode(cmd, &reg_addr, in_data, &in_size);

    for (uint8_t i = 2; i < in_size + 2; i++)
    {
        out_data[out_size++] = (in_data[i] >> 8) & 0xFF;
        out_data[out_size++] = in_data[i] & 0xFF;
    }

    m_3555_RegInfoDump(reg_addr, out_data, out_size);

    ISoftwareI2CRegWrite(&g_3555_SoftwareI2C, CXD3555GG_ADDR, reg_addr & 0xFFFF, REG_ADDR_2BYTE, out_data, out_size, 0xFFFF);

#ifdef __DEBUG__
    DelayMs(20);
    m_3555_Data_Read(reg_addr, out_size);
#endif
}

static void m_CXD3555_QUADRASET(const char *cmd, ...)
{
    uint16_t reg_addr;
    uint32_t in_data[MAX_WRITE_LEN];
    uint8_t out_data[MAX_WRITE_LEN];
    uint8_t in_size = 0;
    uint8_t out_size = 0;

    m_3555_SETCMD_Decode(cmd, &reg_addr, in_data, &in_size);

    for (uint8_t i = 2; i < in_size + 2; i++)
    {
        out_data[out_size++] = (in_data[i] >> 24) & 0xFF;
        out_data[out_size++] = (in_data[i] >> 16) & 0xFF;
        out_data[out_size++] = (in_data[i] >> 8) & 0xFF;
        out_data[out_size++] = in_data[i] & 0xFF;
    }

    m_3555_RegInfoDump(reg_addr, out_data, out_size);

    ISoftwareI2CRegWrite(&g_3555_SoftwareI2C, CXD3555GG_ADDR, reg_addr & 0xFFFF, REG_ADDR_2BYTE, out_data, out_size, 0xFFFF);

#ifdef __DEBUG__
    DelayMs(20);
    m_3555_Data_Read(reg_addr, out_size);
#endif
}

static void m_CWSpeedSet(const char *cmd, ...)
{
    uint8_t value = m_CatchCmdSizeAfterFlag(cmd, ",");

    float pwm = value * 1.0 / 100;

    DebugPrintf("value=%d(dec), value=%02x(hex), pwm = %.2f\r\n", value, value, pwm);
    ISetMyDcMotorPwm(pwm);
}

static void m_SPI2DAC_SET(const char *cmd, ...)
{
    uint32_t value = m_CatchCmdSizeAfterFlag(cmd, ",");

    DebugPrintf("value=%d(dec), value=%02x(hex)\r\n", value, value);
    ISetDacBySpi(OPERATION_MODE, value);
}

/*
D:\InstalledSoftware\IDE\Keil_v5\UV4\UV4.exe -b -j0 .\APP\GD32_PMU.uvprojx -o C:\Users\APPO\Desktop\log.md
tail -f ~/Desktop/log.md
*/
