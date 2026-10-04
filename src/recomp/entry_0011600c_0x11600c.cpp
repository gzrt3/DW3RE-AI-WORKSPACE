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

// Function: entry_0011600c
// Address: 0x11600c - 0x116034
void entry_0011600c_0x11600c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011600c_0x11600c");
#endif

    ctx->pc = 0x11600cu;

    // 0x11600c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x11600cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x116010: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x116010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x116014: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x116014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x116018: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x116018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x11601c: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x11601cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x116020: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x116020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x116024: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x116024u;
    {
        const bool branch_taken_0x116024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x116024) {
            ctx->pc = 0x116034u;
            return;
        }
    }
    ctx->pc = 0x11602Cu;
    // 0x11602c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11602Cu;
    {
        const bool branch_taken_0x11602c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11602Cu;
        // 0x116030: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11602c) {
            ctx->pc = 0x11607Cu;
            return;
        }
    }
    ctx->pc = 0x116034u;
}
