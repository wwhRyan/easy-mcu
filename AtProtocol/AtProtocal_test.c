#include "AtProtocol.h"
#ifndef WIN32
#define WIN32
#endif
#include "Common.h"
#include "windows.h"
#include "AtKeyHashTable.h"
#include "AtCmdHashTable.h"
#include <stdio.h>
#include <string.h>

asAtProtocol at_obj;

#define debug_printf printf
char output_buff[1024] = { 0 };
struct test_case {
    char* input;
    char* output;
};

// testcase AT+System=On
IAtOperationRegister(kCmdSystem, pAt_Kv_List, pAt_feedback_str)
{
    asAtKvUnit_Enum my_kvs[1];
    ICastAtKvListTo(kAtValueEnum, pAt_Kv_List, my_kvs);
#if 0
    printf("\n-----------------\nkvs num : %d\n", pAt_Kv_List->size);
    for (int i = 0; i < pAt_Kv_List->size; i++) {
        printf("at_str : key = %s, value = %s\n", pAt_Kv_List->pList[i].key.pData, pAt_Kv_List->pList[i].value.pData);
        printf("at_type : key_id = %d, value = %d\n", my_kvs[i].key, my_kvs[i].value);
    }
    IAddFeedbackStrTo(pAt_feedback_str, "Ok\n");
#endif

    if (kAtControlType == IGetAtCmdType(&at_obj)) {
        if (kKeyOn == my_kvs[0].value) {
            printf("system on\n");
            IAddFeedbackStrTo(pAt_feedback_str, "Ok\n");
        } else if (kKeyOff == my_kvs[0].value) {
            printf("system off\n");
            IAddFeedbackStrTo(pAt_feedback_str, "Ok\n");
        } else {
            printf("system value error\n");
        }
    } else {
        if (kKeyStatus == my_kvs[0].key) {
            IAddFeedbackStrTo(pAt_feedback_str, "Ok\n");
        }
    }
}

IAtOperationRegister(kCmdLightSourceTime, pAt_Kv_List, pAt_feedback_str)
{
    asAtKvUnit_Enum my_kvs[1];
    ICastAtKvListTo(kAtValueEnum, pAt_Kv_List, my_kvs);

    IAddFeedbackStrTo(pAt_feedback_str, "Ok\n");

    if (kAtControlType == IGetAtCmdType(&at_obj)) {
        debug_printf("system value error\n");
    } else {
        if (kKeyMinute == my_kvs[0].key) {
            IAddFeedbackStrTo(pAt_feedback_str, "Minute:%d\n", 10);
        }
    }
}

// AT+Version?Mcu,LightEngineBoard,Anf1,Anf2,Ovp921
#define TEST_VERSION "TEST1.0"
IAtOperationRegister(kCmdVersion, pAt_Kv_List, pAt_feedback_str)
{
    asAtKvUnit_Enum my_kvs[10];
    ICastAtKvListTo(kAtValueEnum, pAt_Kv_List, my_kvs);
    if (kAtControlType == IGetAtCmdType(&at_obj)) {
        debug_printf("system value error\n");
    } else {
        for (size_t i = 0; i < pAt_Kv_List->size; i++) {
            if (kKeyMcu == my_kvs[i].key) {
                debug_printf("kKeyMcu\n");
                IAddKeyValueStrTo(pAt_feedback_str, "%s:%s\n", pAt_Kv_List->pList[i].key.pData, TEST_VERSION);
            } else if (kKeyLightEngineBoard == my_kvs[i].key) {
                debug_printf("kKeyLightEngineBoard\n");
                IAddKeyValueStrTo(pAt_feedback_str, "%s:VER1.%01X.VER0.%01X\n",
                    pAt_Kv_List->pList[i].key.pData, 1, 1);
            } else if (kKeyAnf1 == my_kvs[i].key) {
                debug_printf("kKeyAnf1\n");
                IAddKeyValueStrTo(pAt_feedback_str, "%s:%s\n", pAt_Kv_List->pList[i].key.pData, TEST_VERSION);
            } else if (kKeyAnf2 == my_kvs[i].key) {
                debug_printf("kKeyAnf2\n");
                IAddKeyValueStrTo(pAt_feedback_str, "%s:%s\n", pAt_Kv_List->pList[i].key.pData, TEST_VERSION);
            } else if (kKeyOvp921 == my_kvs[i].key) {
                debug_printf("kKeyOvp921\n");
                IAddKeyValueStrTo(pAt_feedback_str, "%s:%s\n", pAt_Kv_List->pList[i].key.pData, TEST_VERSION);
            }
        }
    }
}

void MyAtPrint(const char* str, ...)
{
    printf("%s", str);
    memset(output_buff, 0, sizeof(output_buff));
    snprintf(output_buff, sizeof(output_buff), str);
}

struct test_case at_test[] = {
    { .input = "AT+Version?Mcu,LightEngineBoard,Anf1,Anf2,Ovp921\n", .output = "AT+Version#Mcu:TEST1.0,LightEngineBoard:VER1.1.VER0.1,Anf1:TEST1.0,Anf2:TEST1.0,Ovp921:TEST1.0\n" },
    { .input = "AT+Versionwrong?Mcu\n", .output = "AT+NULL#InvalidCmd\n" },
    { .input = "AT+Versionwrong\n", .output = "AT+NULL#InvalidOperator\n" },
    { .input = "AT+LightSourceTime?Minute\n", .output = "AT+LightSourceTime#Minute:10\n" },
    { .input = "aaa\n", .output = "AT+NULL#Error\n" },
    { .input = "AT+System=On\n", .output = "AT+System#Ok\n" },
};

int main(int argc, char** argv)
{
    char str[0xff] = { 0 };
    IInitAtLib(&at_obj, kAtNormalMode, NULL, MyAtPrint);

    printf("Start At Example!\n");

    for (int i = 0; i < ARRAY_SIZE(at_test); i++) {
        printf("test %d :\ninput : %soutput : %s", i, at_test[i].input, at_test[i].output);

        memset(str, 0, sizeof(str));
        strcpy(str, at_test[i].input);
        IAtCmdDecodeAndRun(&at_obj, str);
        E_assert(strcmp(at_test[i].output, output_buff) == 0);
        printf("success!\n");
    }

    while (1) {
        printf("\nPlease Input AT cmd:\n");
        scanf("%s", str);
        str[strlen(str)] = '\n'; // add '\n' to end of str
        GET_TIME(IAtCmdDecodeAndRun, &at_obj, str);
        memset(str, 0, 0xff);
    }
}