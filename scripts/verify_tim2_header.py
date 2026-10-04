import os

def verify_tim2(file_path, offset):
    with open(file_path, 'rb') as f:
        f.seek(offset)
        header = f.read(4)
        if header == b'TIM2':
            print(f'Valid TIM2 header found at {hex(offset)}')
            return True
        else:
            print(f'Invalid header at {hex(offset)}: {header}')
            return False

# Placeholder offset based on RID4 findings
verify_tim2('C:\\DW3\\sources\\dumps\\dw3_ps2\\LINKDATA.BNS', 0x0)