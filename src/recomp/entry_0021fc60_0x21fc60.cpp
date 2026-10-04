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

// Function: entry_0021fc60
// Address: 0x21fc60 - 0x21fc70
void entry_0021fc60_0x21fc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fc60_0x21fc60");
#endif

    switch (ctx->pc) {
        case 0x21fc68u: goto label_21fc68;
        default: break;
    }

    ctx->pc = 0x21fc60u;

    // 0x21fc60: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FC60u;
    SET_GPR_U32(ctx, 31, 0x21FC68u);
    ctx->pc = 0x21FC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC60u;
    // 0x21fc64: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FC60u, 0x21FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC68u;
label_21fc68:
    // 0x21fc68: 0x10000209  b           . + 4 + (0x209 << 2)
    ctx->pc = 0x21FC68u;
    {
        const bool branch_taken_0x21fc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fc68) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FC70u;
}
