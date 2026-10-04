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

// Function: entry_001c018c
// Address: 0x1c018c - 0x1c01d0
void entry_001c018c_0x1c018c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c018c_0x1c018c");
#endif

    ctx->pc = 0x1c018cu;

    // 0x1c018c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x1c018cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c0190: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C0190u;
    {
        const bool branch_taken_0x1c0190 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0190) {
            ctx->pc = 0x1C01D8u;
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1C01D0u;
}
