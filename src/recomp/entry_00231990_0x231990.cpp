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

// Function: entry_00231990
// Address: 0x231990 - 0x2319b0
void entry_00231990_0x231990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231990_0x231990");
#endif

    ctx->pc = 0x231990u;

    // 0x231990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231994: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x231994u;
    {
        const bool branch_taken_0x231994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x231998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231994u;
        // 0x231998: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231994) {
            ctx->pc = 0x2319B0u;
            return;
        }
    }
    ctx->pc = 0x23199Cu;
    // 0x23199c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23199Cu;
    {
        const bool branch_taken_0x23199c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2319A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23199Cu;
        // 0x2319a0: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23199c) {
            ctx->pc = 0x2319C0u;
            return;
        }
    }
    ctx->pc = 0x2319A4u;
    // 0x2319a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2319A4u;
    {
        const bool branch_taken_0x2319a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2319a4) {
            ctx->pc = 0x2319CCu;
            return;
        }
    }
    ctx->pc = 0x2319ACu;
    // 0x2319ac: 0x0  nop
    ctx->pc = 0x2319acu;
    // NOP
    ctx->pc = 0x2319b0u;
}
