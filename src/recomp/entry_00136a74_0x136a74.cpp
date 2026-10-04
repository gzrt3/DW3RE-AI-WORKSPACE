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

// Function: entry_00136a74
// Address: 0x136a74 - 0x136a90
void entry_00136a74_0x136a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136a74_0x136a74");
#endif

    switch (ctx->pc) {
        case 0x136a88u: goto label_136a88;
        default: break;
    }

    ctx->pc = 0x136a74u;

    // 0x136a74: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x136a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x136a78: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x136a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x136a7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x136a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x136a80: 0xc04d44c  jal         func_135130
    ctx->pc = 0x136A80u;
    SET_GPR_U32(ctx, 31, 0x136A88u);
    ctx->pc = 0x136A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A80u;
    // 0x136a84: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135130u, 0x136A80u, 0x136A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A88u;
label_136a88:
    // 0x136a88: 0xc04d8b8  jal         func_1362E0
    ctx->pc = 0x136A88u;
    SET_GPR_U32(ctx, 31, 0x136A90u);
    ctx->pc = 0x1362E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362E0u, 0x136A88u, 0x136A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A90u;
}
