#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001c00e0
// Address: 0x1c00e0 - 0x1c01f0
void FUN_001c00e0_0x1c00e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c00e0_0x1c00e0");
#endif

    switch (ctx->pc) {
        case 0x1c00f4u: goto label_1c00f4;
        default: break;
    }

    ctx->pc = 0x1c00e0u;

    // 0x1c00e0: 0x10800043  beqz        $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1C00E0u;
    {
        const bool branch_taken_0x1c00e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00E0u;
        // 0x1c00e4: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00e0) {
            ctx->pc = 0x1C01F0u;
            return;
        }
    }
    ctx->pc = 0x1C00E8u;
    // 0x1c00e8: 0x8c234a9c  lw          $v1, 0x4A9C($at)
    ctx->pc = 0x1c00e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19100)));
    // 0x1c00ec: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1c00ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c00f0: 0x0  nop
    ctx->pc = 0x1c00f0u;
    // NOP
label_1c00f4:
    // 0x1c00f4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1c00f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c00f8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C00F8u;
    {
        const bool branch_taken_0x1c00f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c00f8) {
            ctx->pc = 0x1C0108u;
            goto label_1c0108;
        }
    }
    ctx->pc = 0x1C0100u;
    // 0x1c0100: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0100u;
    {
        const bool branch_taken_0x1c0100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0100u;
        // 0x1c0104: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0100) {
            ctx->pc = 0x1C0110u;
            goto label_1c0110;
        }
    }
    ctx->pc = 0x1C0108u;
label_1c0108:
    // 0x1c0108: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C0108u;
    {
        const bool branch_taken_0x1c0108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0108u;
        // 0x1c010c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0108) {
            ctx->pc = 0x1C00F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c00f4;
        }
    }
    ctx->pc = 0x1C0110u;
label_1c0110:
    // 0x1c0110: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0114: 0x8c234a9c  lw          $v1, 0x4A9C($at)
    ctx->pc = 0x1c0114u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x464A9Cu));
    // 0x1c0118: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c0118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c011c: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C011Cu;
    {
        const bool branch_taken_0x1c011c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1c011c) {
            ctx->pc = 0x1C012Cu;
            goto label_1c012c;
        }
    }
    ctx->pc = 0x1C0124u;
    // 0x1c0124: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0128: 0xac254a9c  sw          $a1, 0x4A9C($at)
    ctx->pc = 0x1c0128u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x464A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x464A9Cu, _value); } while (0);
label_1c012c:
    // 0x1c012c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c012cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0130: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1c0130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1c0134: 0x8c244aac  lw          $a0, 0x4AAC($at)
    ctx->pc = 0x1c0134u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x464AACu));
    // 0x1c0138: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c0138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c013c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c013cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0140: 0xac234aac  sw          $v1, 0x4AAC($at)
    ctx->pc = 0x1c0140u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x464AACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x464AACu, _value); } while (0);
    // 0x1c0144: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1c0144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c0148: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C0148u;
    {
        const bool branch_taken_0x1c0148 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0148) {
            ctx->pc = 0x1C018Cu;
            goto label_1c018c;
        }
    }
    ctx->pc = 0x1C0150u;
    // 0x1c0150: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1c0150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c0154: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C0154u;
    {
        const bool branch_taken_0x1c0154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0154) {
            ctx->pc = 0x1C018Cu;
            goto label_1c018c;
        }
    }
    ctx->pc = 0x1C015Cu;
    // 0x1c015c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1c015cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1c0160: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1c0160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1c0164: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c0164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c0168: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1c0168u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1c016c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1c016cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c0170: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0170u;
    {
        const bool branch_taken_0x1c0170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0170u;
        // 0x1c0174: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0170) {
            ctx->pc = 0x1C0180u;
            goto label_1c0180;
        }
    }
    ctx->pc = 0x1C0178u;
    // 0x1c0178: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0178u;
    {
        const bool branch_taken_0x1c0178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0178u;
        // 0x1c017c: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0178) {
            ctx->pc = 0x1C0188u;
            goto label_1c0188;
        }
    }
    ctx->pc = 0x1C0180u;
label_1c0180:
    // 0x1c0180: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0184: 0xac264a9c  sw          $a2, 0x4A9C($at)
    ctx->pc = 0x1c0184u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x464A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x464A9Cu, _value); } while (0);
label_1c0188:
    // 0x1c0188: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c0188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c018c:
    // 0x1c018c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x1c018cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c0190: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C0190u;
    {
        const bool branch_taken_0x1c0190 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0190) {
            ctx->pc = 0x1C01D8u;
            goto label_1c01d8;
        }
    }
    ctx->pc = 0x1C0198u;
    // 0x1c0198: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1c0198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c019c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1C019Cu;
    {
        const bool branch_taken_0x1c019c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c019c) {
            ctx->pc = 0x1C01D8u;
            goto label_1c01d8;
        }
    }
    ctx->pc = 0x1C01A4u;
    // 0x1c01a4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1c01a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1c01a8: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1c01a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1c01ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c01acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c01b0: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1c01b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1c01b4: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1c01b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x1c01b8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1c01b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1c01bc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1c01bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1c01c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C01C0u;
    {
        const bool branch_taken_0x1c01c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01C0u;
        // 0x1c01c4: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01c0) {
            ctx->pc = 0x1C01D0u;
            goto label_1c01d0;
        }
    }
    ctx->pc = 0x1C01C8u;
    // 0x1c01c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C01C8u;
    {
        const bool branch_taken_0x1c01c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01C8u;
        // 0x1c01cc: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01c8) {
            ctx->pc = 0x1C01D8u;
            goto label_1c01d8;
        }
    }
    ctx->pc = 0x1C01D0u;
label_1c01d0:
    // 0x1c01d0: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c01d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c01d4: 0xac254a9c  sw          $a1, 0x4A9C($at)
    ctx->pc = 0x1c01d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x464A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x464A9Cu, _value); } while (0);
label_1c01d8:
    // 0x1c01d8: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c01d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c01dc: 0x8c234a98  lw          $v1, 0x4A98($at)
    ctx->pc = 0x1c01dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x464A98u));
    // 0x1c01e0: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x1c01e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c01e4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C01E4u;
    {
        const bool branch_taken_0x1c01e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01E4u;
        // 0x1c01e8: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01e4) {
            ctx->pc = 0x1C01F0u;
            return;
        }
    }
    ctx->pc = 0x1C01ECu;
    // 0x1c01ec: 0xac254a98  sw          $a1, 0x4A98($at)
    ctx->pc = 0x1c01ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19096), GPR_U32(ctx, 5));
    ctx->pc = 0x1c01f0u;
}
