import struct

node_count = 64
sec_count = 1
sec1_off = 16 + ((4 + 44 * node_count + 15) & ~15)
s0 = sec1_off + 16

buf = bytearray(sec1_off + 32)
struct.pack_into("<I", buf, 0, 0x20325350)
struct.pack_into("<I", buf, 4, 16)
struct.pack_into("<I", buf, 8, sec1_off)
struct.pack_into("<I", buf, 12, 0)
struct.pack_into("<I", buf, 16, node_count | (sec_count << 16))
struct.pack_into("<I", buf, sec1_off, 1)

struct.pack_into("<I", buf, s0, 1)      # sub_count
struct.pack_into("<I", buf, s0 + 4, 0)  # payload_qwc
struct.pack_into("<I", buf, s0 + 8, 1)  # total_qwc
struct.pack_into("<I", buf, s0 + 12, 0) # reserved

with open(r"C:\Fate Soldiers 3\tests\assets\ARCHER1.PS2", "wb") as f:
    f.write(buf)
