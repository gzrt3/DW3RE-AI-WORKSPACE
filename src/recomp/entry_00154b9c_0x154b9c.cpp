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

// Function: entry_00154b9c
// Address: 0x154b9c - 0x154bb8
void entry_00154b9c_0x154b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154b9c_0x154b9c");
#endif

    switch (ctx->pc) {
        case 0x154bb0u: goto label_154bb0;
        default: break;
    }

    ctx->pc = 0x154b9cu;

    // 0x154b9c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154B9Cu;
    {
        const bool branch_taken_0x154b9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x154b9c) {
            ctx->pc = 0x154BB8u;
            return;
        }
    }
    ctx->pc = 0x154BA4u;
    // 0x154ba4: 0x8f828630  lw          $v0, -0x79D0($gp)
    ctx->pc = 0x154ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x154ba8: 0xc066e26  jal         func_19B898
    ctx->pc = 0x154BA8u;
    SET_GPR_U32(ctx, 31, 0x154BB0u);
    ctx->pc = 0x154BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BA8u;
    // 0x154bac: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x154BA8u, 0x154BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BB0u;
label_154bb0:
    // 0x154bb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x154BB0u;
    {
        const bool branch_taken_0x154bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154bb0) {
            ctx->pc = 0x154BC4u;
            return;
        }
    }
    ctx->pc = 0x154BB8u;
}
