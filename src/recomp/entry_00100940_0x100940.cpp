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

// Function: entry_00100940
// Address: 0x100940 - 0x100950
void entry_00100940_0x100940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100940_0x100940");
#endif

    switch (ctx->pc) {
        case 0x100948u: goto label_100948;
        default: break;
    }

    ctx->pc = 0x100940u;

    // 0x100940: 0xc0415a4  jal         func_105690
    ctx->pc = 0x100940u;
    SET_GPR_U32(ctx, 31, 0x100948u);
    ctx->pc = 0x100944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100940u;
    // 0x100944: 0x27858458  addiu       $a1, $gp, -0x7BA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x100940u, 0x100948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100948u;
label_100948:
    // 0x100948: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x100948u;
    {
        const bool branch_taken_0x100948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100948u;
        // 0x10094c: 0x8f82863c  lw          $v0, -0x79C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100948) {
            ctx->pc = 0x100994u;
            return;
        }
    }
    ctx->pc = 0x100950u;
}
