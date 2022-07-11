#!/c/Users/APPO/AppData/Local/Programs/Python/Python38/python.exe
# -*- coding: utf-8 -*-
"""
Created on Mon Oct 26 09:49:49 2020

@author: GeDongrui
"""
print("AtCommand HashTable Generator")



atnum    = 0     #AT命令个数
fillrate = 0.4  #填充因子

import AtSupport as Ats
from math import sqrt
import numpy
import sys
import os
import io

keylist = []
cmdlist = []
script_path = os.path.dirname(os.path.abspath(__file__))
print(script_path)
cmdlist, keylist = Ats.IAtParamGet(script_path + "/at_cmd.csv")



###### Main Function #####
atnum = len(cmdlist) 
print(atnum)
atsize = int(Ats.MinPrime(atnum/fillrate))
index_bits = atsize.bit_length()
max_collide_num = 0
dirty_index = 0

#  Storage Hash Key & Value in "numpy struct"
HashType=numpy.dtype({
    'names':['name','index','value'],
    'formats':['S32','i','i']
})
hashtable=numpy.array([('AT', 0, 0)] * atsize, dtype=HashType)

for i, atstr in enumerate(cmdlist):
#   print(atstr)
    code = Ats.BkdrHash(atstr)
    key = (code ^ (code >> 16)) & 0xFFFF
    index = (key >> (16 - index_bits)) % atsize
    value = (key & 0xFF) % 256
    value = 1 if value == 0 else value
    print("No." + str(i) + " str = " + atstr + ", index = " + str(index) + ", val = " + str(value))
    while True:
        if(index < 0):
            print("Can not select a suitable index!")
            sys.exit(False)
        if(hashtable[index]['value'] == 0):
            hashtable[index]['value'] = value
            hashtable[index]['name'] = atstr
            break
        else:
            index, collide_num = Ats.ReHash(index, hashtable, atsize)
            [max_collide_num, dirty_index] = [collide_num, (key >> (16 - index_bits)) % atsize] if collide_num>max_collide_num else [max_collide_num, dirty_index]
  
for i in range(0, atsize):
    if hashtable[i]['value'] != 0:
        print(hex(i), hashtable[i]['name'].decode("utf-8"), hex(hashtable[i]['value']))
print("Max Collide Num = " + str(max_collide_num))
print("Dirty index = " + str(dirty_index))

#  Create 'C' Source & Header File
class ctemplate:
    __fileName = ' '
    __sourceName = ' '
    __headerName = ' '

    def __init__(self,s):
        self.__filePath = os.path.dirname(os.path.abspath(__file__))
        self.__fileDir = os.path.dirname(self.__filePath) + "/Src/At_HashTable/"
        self.__fileName = s
        self.__sourceName = self.__fileDir + s + ".c"
        self.__headerName = self.__fileDir + s + ".h"
        
    def createSource(self):
        fh = io.open(self.__sourceName,mode = 'w',encoding='utf-8')
        cm = "#include " + "\"" + self.__fileName + ".h\"" + "\n"*2
        cm += ("unsigned short g_atcmd_max_collide_num = %d;\t\t/* AtCmd MAX Collide Num */\n" %max_collide_num)
        cm += ("unsigned short g_atcmd_num = %d;\t\t/* AtCmd Num */\n" %atnum)
        cm += ("unsigned short g_atcmd_htsize = %d;\t/* AtCmd HashTable Size */\n\n" %atsize)
        cm += ("unsigned char g_atcmd_htsize_bits = %d;\t/* AtCmd HashTable Size's bits */\n\n" %atsize.bit_length())
        cm += ("asCmdListUnit gsCmdList[] = {\n")
        for i in range(0, atsize):
            atstr = "\t{ " + hex(hashtable[i]['value']) + ", NULL ,"
            cm += atstr
            if(hashtable[i]['value'] != 0):
                atstr = ("\"")+hashtable[i]['name'].decode("utf-8")+("\"")
                cm += atstr
            else:
                cm += ("NULL")
            atstr = "},"
            cm += atstr
            if(hashtable[i]['value'] != 0):
                atstr = " /* " + hashtable[i]['name'].decode("utf-8") + " */\n"            
                cm += atstr
            else:
                cm += ("\n")
        cm += ("};\n")
        cm += ("uint16_t gScmd_list_len = sizeof(gsCmdList) / sizeof(asCmdListUnit);\n")
        fh.write(cm)
        fh.close()

    def createHeader(self):
        fh = io.open(self.__headerName,mode = 'w',encoding='utf-8')
        cm = "#ifndef __%s_H__\n" %self.__fileName.upper()
        cm += "#define __%s_H__\n" %self.__fileName.upper()
        cm += ("\n")
        cm += ("#ifdef __cplusplus\nextern \"C\" {\n#endif\n\n")
        cm += ("#include \"Src/At_internal/AtInternalConfig.h\"\n")
        cm += ("typedef struct __asAtKvList asAtKvList;\n")
        cm += ("typedef enum __aeCmdName{\n")
        for i in range(0, atsize) :
            if(hashtable[i]['value'] != 0):
                cm += "\t"
                atstr = "kCmd" + hashtable[i]['name'].decode("utf-8") + " = " + hex(i)
                cm += atstr
                cm += (",\n")
        cm += ("} aeCmdName;\n\n")
        cm += ("typedef struct __asCmdListUnit {\n")
        cm += ("\tint var;\n\tvoid (*func)(asAtKvList*, asAtStr*);\n\tchar* str;\n} asCmdListUnit;\n\n")
        cm += ("extern unsigned short g_atcmd_max_collide_num;\n")
        cm += ("extern unsigned short g_atcmd_num;\n")
        cm += ("extern unsigned short g_atcmd_htsize;\n")
        cm += ("extern unsigned char g_atcmd_htsize_bits;\n")
        cm += ("extern asCmdListUnit gsCmdList[];\n")
        cm += ("extern uint16_t gScmd_list_len;\n")
        cm += ("\n"*2)
        cm += ("#ifdef __cplusplus\n}\n#endif\n\n")
        cm += ("#endif\n")
        fh.write(cm)
        fh.close()

    def createTemplatePairs(self):
        self.createSource()
        self.createHeader()

if __name__ == '__main__':
    ct = ctemplate("AtCmdHashTable")
    ct.createTemplatePairs()