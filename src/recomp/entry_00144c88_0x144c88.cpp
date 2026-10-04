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

// Function: entry_00144c88
// Address: 0x144c88 - 0x144cb4
void entry_00144c88_0x144c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144c88_0x144c88");
#endif

    switch (ctx->pc) {
        case 0x144c90u: goto label_144c90;
        case 0x144c98u: goto label_144c98;
        case 0x144ca0u: goto label_144ca0;
        default: break;
    }

    ctx->pc = 0x144c88u;

    // 0x144c88: 0xc070e60  jal         func_1C3980
    ctx->pc = 0x144C88u;
    SET_GPR_U32(ctx, 31, 0x144C90u);
    ctx->pc = 0x1C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3980u, 0x144C88u, 0x144C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C90u;
label_144c90:
    // 0x144c90: 0xc05cfd4  jal         func_173F50
    ctx->pc = 0x144C90u;
    SET_GPR_U32(ctx, 31, 0x144C98u);
    ctx->pc = 0x173F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F50u, 0x144C90u, 0x144C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C98u;
label_144c98:
    // 0x144c98: 0xc0436b4  jal         func_10DAD0
    ctx->pc = 0x144C98u;
    SET_GPR_U32(ctx, 31, 0x144CA0u);
    ctx->pc = 0x10DAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DAD0u, 0x144C98u, 0x144CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CA0u;
label_144ca0:
    // 0x144ca0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x144ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144ca4: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x144CA4u;
    {
        const bool branch_taken_0x144ca4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x144ca4) {
            ctx->pc = 0x144CB4u;
            return;
        }
    }
    ctx->pc = 0x144CACu;
    // 0x144cac: 0xc0839b0  jal         func_20E6C0
    ctx->pc = 0x144CACu;
    SET_GPR_U32(ctx, 31, 0x144CB4u);
    ctx->pc = 0x20E6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E6C0u, 0x144CACu, 0x144CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CB4u;
}
