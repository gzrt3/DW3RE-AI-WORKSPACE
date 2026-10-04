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

// Function: entry_002027d8
// Address: 0x2027d8 - 0x202810
void entry_002027d8_0x2027d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002027d8_0x2027d8");
#endif

    switch (ctx->pc) {
        case 0x2027e0u: goto label_2027e0;
        case 0x2027f4u: goto label_2027f4;
        case 0x202808u: goto label_202808;
        default: break;
    }

    ctx->pc = 0x2027d8u;

    // 0x2027d8: 0xc07ab38  jal         func_1EACE0
    ctx->pc = 0x2027D8u;
    SET_GPR_U32(ctx, 31, 0x2027E0u);
    ctx->pc = 0x1EACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EACE0u, 0x2027D8u, 0x2027E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027E0u;
label_2027e0:
    // 0x2027e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2027e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2027e4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2027E4u;
    {
        const bool branch_taken_0x2027e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2027e4) {
            ctx->pc = 0x202810u;
            return;
        }
    }
    ctx->pc = 0x2027ECu;
    // 0x2027ec: 0xc07aa90  jal         func_1EAA40
    ctx->pc = 0x2027ECu;
    SET_GPR_U32(ctx, 31, 0x2027F4u);
    ctx->pc = 0x1EAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA40u, 0x2027ECu, 0x2027F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027F4u;
label_2027f4:
    // 0x2027f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2027f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2027f8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2027F8u;
    {
        const bool branch_taken_0x2027f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2027f8) {
            ctx->pc = 0x202810u;
            return;
        }
    }
    ctx->pc = 0x202800u;
    // 0x202800: 0xc07aa8c  jal         func_1EAA30
    ctx->pc = 0x202800u;
    SET_GPR_U32(ctx, 31, 0x202808u);
    ctx->pc = 0x1EAA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA30u, 0x202800u, 0x202808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202808u;
label_202808:
    // 0x202808: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x202808u;
    {
        const bool branch_taken_0x202808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202808) {
            ctx->pc = 0x202838u;
            return;
        }
    }
    ctx->pc = 0x202810u;
}
