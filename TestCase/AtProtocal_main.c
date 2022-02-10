#include <stdio.h>
#include "../AtProtocol/AtProtocol.h"

//testcase AT+Gamma=On
IAtOperationRegister(kCmdGamma, pAt_Kv_List, pAt_feedback_str)
{
    asAtKvUnit_Float my_kvs[5];
    ICastAtKvListTo(kAtValueFloat, pAt_Kv_List, my_kvs);
    printf("\n-----------------\nkvs num : %d\n", pAt_Kv_List->size);
    for(int i = 0; i < pAt_Kv_List->size; i++)
    {
        printf("at_str : key = %s, value = %s\n", pAt_Kv_List->pList[i].key.pData, pAt_Kv_List->pList[i].value.pData);
        printf("at_type : key_id = %d, value = %f\n", my_kvs[i].key, my_kvs[i].value);
    }
    IAddFeedbackStrTo(pAt_feedback_str, "OK\n");
}

void MyAtPrint(const char* str, ...)
{
    printf("%s", str);
}

int main(int argc, char **argv)
{
    asAtProtocol obj;
    char str[0xff] = {0};
    IInitAtLib(&obj, kAtNormalMode, NULL, MyAtPrint);

    printf("Start At Example!\n");
    while(1)
    {
        printf("\nPlease Input AT cmd:\n");
        scanf("%s", str);
        str[strlen(str)] = '\n';  //add '\n' to end of str
        IAtCmdDecodeAndRun(&obj, str);
        memset(str, 0 ,0xff);
    }
}
