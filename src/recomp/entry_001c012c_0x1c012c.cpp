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

// Function: entry_001c012c
// Address: 0x1c012c - 0x1c0180
void entry_001c012c_0x1c012c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c012c_0x1c012c");
#endif

    ctx->pc = 0x1c012cu;

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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1C0180u;
}
