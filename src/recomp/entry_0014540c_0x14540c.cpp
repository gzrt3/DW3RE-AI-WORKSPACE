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

// Function: entry_0014540c
// Address: 0x14540c - 0x145430
void entry_0014540c_0x14540c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014540c_0x14540c");
#endif

    switch (ctx->pc) {
        case 0x145428u: goto label_145428;
        default: break;
    }

    ctx->pc = 0x14540cu;

    // 0x14540c: 0x0  nop
    ctx->pc = 0x14540cu;
    // NOP
    // 0x145410: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x145410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x145414: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x145414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x145418: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x145418u;
    {
        const bool branch_taken_0x145418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145418u;
        // 0x14541c: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145418) {
            ctx->pc = 0x1453E8u;
            return;
        }
    }
    ctx->pc = 0x145420u;
    // 0x145420: 0xc05665c  jal         func_159970
    ctx->pc = 0x145420u;
    SET_GPR_U32(ctx, 31, 0x145428u);
    ctx->pc = 0x159970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159970u, 0x145420u, 0x145428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145428u;
label_145428:
    // 0x145428: 0xc0569a4  jal         func_15A690
    ctx->pc = 0x145428u;
    SET_GPR_U32(ctx, 31, 0x145430u);
    ctx->pc = 0x15A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A690u, 0x145428u, 0x145430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145430u;
}
