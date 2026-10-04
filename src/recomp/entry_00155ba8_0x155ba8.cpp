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

// Function: entry_00155ba8
// Address: 0x155ba8 - 0x155bc0
void entry_00155ba8_0x155ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155ba8_0x155ba8");
#endif

    switch (ctx->pc) {
        case 0x155bb0u: goto label_155bb0;
        default: break;
    }

    ctx->pc = 0x155ba8u;

    // 0x155ba8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x155BA8u;
    SET_GPR_U32(ctx, 31, 0x155BB0u);
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x155BA8u, 0x155BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BB0u;
label_155bb0:
    // 0x155bb0: 0xaf808638  sw          $zero, -0x79C8($gp)
    ctx->pc = 0x155bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936120), GPR_U32(ctx, 0));
    // 0x155bb4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x155bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bb8: 0xaf808634  sw          $zero, -0x79CC($gp)
    ctx->pc = 0x155bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936116), GPR_U32(ctx, 0));
    // 0x155bbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x155bbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x155bc0u;
}
