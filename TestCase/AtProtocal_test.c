#include <stdio.h>
#include "../AtProtocol/AtProtocol.h"
#include "windows.h"
#include "Common.h"

asAtProtocol at_obj;

// testcase AT+Gamma=On
IAtOperationRegister(kCmdGamma, pAt_Kv_List, pAt_feedback_str)
{
    asAtKvUnit_Float my_kvs[5];
    ICastAtKvListTo(kAtValueFloat, pAt_Kv_List, my_kvs);
    printf("\n-----------------\nkvs num : %d\n", pAt_Kv_List->size);
    for (int i = 0; i < pAt_Kv_List->size; i++)
    {
        printf("at_str : key = %s, value = %s\n", pAt_Kv_List->pList[i].key.pData, pAt_Kv_List->pList[i].value.pData);
        printf("at_type : key_id = %d, value = %f\n", my_kvs[i].key, my_kvs[i].value);
    }
    IAddFeedbackStrTo(pAt_feedback_str, "OK\n");
}

// testcase AT+System=On
IAtOperationRegister(kCmdSystem, pAt_Kv_List, pAt_feedback_str)
{
    asAtKvUnit_Enum my_kvs[1];
    ICastAtKvListTo(kAtValueEnum, pAt_Kv_List, my_kvs);
    printf("\n-----------------\nkvs num : %d\n", pAt_Kv_List->size);
    for (int i = 0; i < pAt_Kv_List->size; i++)
    {
        printf("at_str : key = %s, value = %s\n", pAt_Kv_List->pList[i].key.pData, pAt_Kv_List->pList[i].value.pData);
        printf("at_type : key_id = %d, value = %d\n", my_kvs[i].key, my_kvs[i].value);
    }
    IAddFeedbackStrTo(pAt_feedback_str, "OK\n");

    if (kAtControlType == IGetAtCmdType(&at_obj))
    {
        if (kKeyOn == my_kvs[0].value)
        {
            printf("system on\n");
            IAddFeedbackStrTo(pAt_feedback_str, "OK\n");
        }
        else if (kKeyOff == my_kvs[0].value)
        {
            printf("system off\n");
            IAddFeedbackStrTo(pAt_feedback_str, "OK\n");
        }
        else
        {
            printf("system value error\n");
        }
    }
    else
    {
        if (kKeyStatus == my_kvs[0].key)
        {
            IAddFeedbackStrTo(pAt_feedback_str, "OK\n");
        }
    }
}

void MyAtPrint(const char *str, ...)
{
    printf("%s", str);
}

int main(int argc, char **argv)
{
    char str[0xff] = {0};
    IInitAtLib(&at_obj, kAtNormalMode, NULL, MyAtPrint);

    printf("Start At Example!\n");
    while (1)
    {
        printf("\nPlease Input AT cmd:\n");
        scanf("%s", str);
        str[strlen(str)] = '\n'; // add '\n' to end of str
        GET_TIME(IAtCmdDecodeAndRun, &at_obj, str);
        // IAtCmdDecodeAndRun(&at_obj, str);
        memset(str, 0, 0xff);
    }
}
