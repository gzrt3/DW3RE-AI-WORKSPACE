"""Local ELF metadata inspection; never print instruction words."""
import struct

def elf_words(path):
    blob = path.read_bytes()
    if blob[:7] != b"\x7fELF\x01\x01\x01" or len(blob) < 52:
        raise ValueError("invalid_elf")
    if struct.unpack_from("<H", blob, 18)[0] != 8:
        raise ValueError("invalid_machine")
    offset = struct.unpack_from("<I", blob, 28)[0]
    size, count = struct.unpack_from("<HH", blob, 42)
    if size < 32 or offset + count * size > len(blob):
        raise ValueError("invalid_headers")
    words, executable = {}, {}
    for index in range(count):
        kind, off, va, _, length, _, flags, _ = struct.unpack_from("<8I", blob, offset + index * size)
        if kind != 1:
            continue
        if off + length > len(blob):
            raise ValueError("truncated_segment")
        for delta in range(0, length - 3, 4):
            word = struct.unpack_from("<I", blob, off + delta)[0]
            address = va + delta
            if address in words and words[address] != word:
                raise ValueError("conflicting_segments")
            words[address] = word
            if flags & 1:
                if address in executable:
                    raise ValueError("overlapping_executable_segments")
                executable[address] = word
    return words, executable
