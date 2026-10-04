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

// Function: entry_001959cc
// Address: 0x1959cc - 0x1959f0
void entry_001959cc_0x1959cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001959cc_0x1959cc");
#endif

    ctx->pc = 0x1959ccu;

    // 0x1959cc: 0x0  nop
    ctx->pc = 0x1959ccu;
    // NOP
    // 0x1959d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1959d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1959d4: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1959D4u;
    {
        const bool branch_taken_0x1959d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1959D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959D4u;
        // 0x1959d8: 0x2403002e  addiu       $v1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959d4) {
            ctx->pc = 0x195A90u;
            return;
        }
    }
    ctx->pc = 0x1959DCu;
    // 0x1959dc: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1959DCu;
    {
        const bool branch_taken_0x1959dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1959dc) {
            ctx->pc = 0x1959F0u;
            return;
        }
    }
    ctx->pc = 0x1959E4u;
    // 0x1959e4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1959e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1959e8: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1959E8u;
    {
        const bool branch_taken_0x1959e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1959e8) {
            ctx->pc = 0x1959F8u;
            return;
        }
    }
    ctx->pc = 0x1959F0u;
}
