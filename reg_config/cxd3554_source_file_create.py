import sys
from openpyxl import load_workbook
path = '190604_CXD3554GG_register_setting_SXRD241_60Hz (E).xlsx'
sheet_name = 'MISC'
start_row = 5 - 1
end_row = 165

if(len(sys.argv) != 5):
    exit(1)
path = sys.argv[1]
sheet_name = sys.argv[2]
start_row = int(sys.argv[3])
end_row = int(sys.argv[4])

# data_only=True, read_only=True faster
wb = load_workbook(filename=path, data_only=True, read_only=True)

ws = wb[sheet_name]
data = tuple(ws)

# C macro no allow '-'
sheet_name_macro = sheet_name.replace('-', '_')

setting = {}
for idx in range(start_row, end_row):
    if data[idx][12].value != None:
        if data[idx][12].value == '-':
            # if dafault value is '-', then set to 0
            setting[idx - start_row] = '00'
        else:
            setting[idx - start_row] = data[idx][12].value
    elif data[idx][10].value == 'ReadOnly':
        # if dafault value is ReadOnly, then set to 0
        setting[idx - start_row] = '00'
    elif data[idx][10].value == 'WriteOnly':
        # if dafault value is WriteOnly, then set to 0
        setting[idx - start_row] = '00'
    elif data[idx][10].value == '-':
        # if dafault value is '-', then set to 0
        setting[idx - start_row] = '00'
    else:
        setting[idx - start_row] = data[idx][10].value

print("#include \"{}\"".format(sheet_name.lower() + ".h"))

print("")
print("{}_t {}".format(sheet_name_macro.lower(), sheet_name_macro.lower()) + " = {")
for idx in range(start_row, end_row):
    print("    .reg{:02X}.byte = 0x{},".format(
        idx - start_row, setting[idx - start_row]))
print("};")
