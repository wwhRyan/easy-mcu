#!/c/Users/APPO/AppData/Local/Programs/Python/Python38/python.exe
import time
import os
import sys


def make_C_files(path, sheet_name, start_row, end_row):
    # make C files
    print("*** Start to make C files ***")
    print("sheet_name: " + sheet_name)
    cmd = 'python cxd3554_header_file_create.py "' + path + '" ' + sheet_name + \
        ' ' + str(start_row) + ' ' + str(end_row) + \
        ' > ' + 'build/' + sheet_name.lower() + '.h'
    print(cmd)
    os.system(cmd)
    cmd = 'python cxd3554_source_file_create.py "' + path + '" ' + sheet_name + \
        ' ' + str(start_row) + ' ' + str(end_row) + \
        ' > ' + 'build/' + sheet_name.lower() + '.c'
    print(cmd)
    os.system(cmd)


if(len(sys.argv) == 1 + 1):
    sys.argv[1] = 'clean'
    print("*** Start to clean build files ***")
    cmd = 'rm -rf ./build/*'
    os.system(cmd)
    print("*** Clean build files done ***")
    exit(0)

path = '190604_CXD3554GG_register_setting_SXRD241_60Hz (E).xlsx'
sheet_name = 'MISC'
start_row = 5 - 1
end_row = 165
make_C_files(path, sheet_name, start_row, end_row)

sheet_name = 'I2CM'
start_row = 5 - 1
end_row = 84
make_C_files(path, sheet_name, start_row, end_row)

sheet_name = 'CKG'
start_row = 5 - 1
end_row = 75
make_C_files(path, sheet_name, start_row, end_row)

sheet_name = 'MIPI'
start_row = 5 - 1
end_row = 516
make_C_files(path, sheet_name, start_row, end_row)

sheet_name = 'INP'
start_row = 5 - 1
end_row = 74
make_C_files(path, sheet_name, start_row, end_row)

sheet_name = 'TPG'
start_row = 5 - 1
end_row = 15
make_C_files(path, sheet_name, start_row, end_row)

sheet_name = 'IPG'
start_row = 5 - 1
end_row = 41
make_C_files(path, sheet_name, start_row, end_row)

sheet_name = 'INP'
start_row = 5 - 1
end_row = 74
make_C_files(path, sheet_name, start_row, end_row)

sheet_name = 'FRC'
start_row = 5 - 1
end_row = 500
make_C_files(path, sheet_name, start_row, end_row)

sheet_name = 'PI'
start_row = 5 - 1
end_row = 40
make_C_files(path, sheet_name, start_row, end_row)

sheet_name = 'TX'
start_row = 5 - 1
end_row = 16
make_C_files(path, sheet_name, start_row, end_row)

sheet_name = 'LED'
start_row = 5 - 1
end_row = 432
make_C_files(path, sheet_name, start_row, end_row)

sheet_name = 'mini-DSI'
start_row = 5 - 1
end_row = 5
make_C_files(path, sheet_name, start_row, end_row)

sheet_name = 'LPDDR2'
start_row = 5 - 1
end_row = 101
make_C_files(path, sheet_name, start_row, end_row)

sheet_name = 'DDR2'
start_row = 5 - 1
end_row = 151
make_C_files(path, sheet_name, start_row, end_row)
