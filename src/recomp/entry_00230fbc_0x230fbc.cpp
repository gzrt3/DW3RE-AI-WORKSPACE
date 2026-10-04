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

// Function: entry_00230fbc
// Address: 0x230fbc - 0x230fe0
void entry_00230fbc_0x230fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230fbc_0x230fbc");
#endif

    switch (ctx->pc) {
        case 0x230fccu: goto label_230fcc;
        default: break;
    }

    ctx->pc = 0x230fbcu;

    // 0x230fbc: 0x16c0000a  bnez        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x230FBCu;
    {
        const bool branch_taken_0x230fbc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x230fbc) {
            ctx->pc = 0x230FE8u;
            return;
        }
    }
    ctx->pc = 0x230FC4u;
    // 0x230fc4: 0xc08cd34  jal         func_2334D0
    ctx->pc = 0x230FC4u;
    SET_GPR_U32(ctx, 31, 0x230FCCu);
    ctx->pc = 0x230FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FC4u;
    // 0x230fc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334D0u, 0x230FC4u, 0x230FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FCCu;
label_230fcc:
    // 0x230fcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x230fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230fd0: 0x1443ff77  bne         $v0, $v1, . + 4 + (-0x89 << 2)
    ctx->pc = 0x230FD0u;
    {
        const bool branch_taken_0x230fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230fd0) {
            ctx->pc = 0x230DB0u;
            return;
        }
    }
    ctx->pc = 0x230FD8u;
    // 0x230fd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x230FD8u;
    {
        const bool branch_taken_0x230fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230fd8) {
            ctx->pc = 0x230FE8u;
            return;
        }
    }
    ctx->pc = 0x230FE0u;
}
