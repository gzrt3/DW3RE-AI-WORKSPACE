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

// Function: entry_0023f6c0
// Address: 0x23f6c0 - 0x23f6f8
void entry_0023f6c0_0x23f6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f6c0_0x23f6c0");
#endif

    switch (ctx->pc) {
        case 0x23f6c8u: goto label_23f6c8;
        case 0x23f6dcu: goto label_23f6dc;
        default: break;
    }

    ctx->pc = 0x23f6c0u;

    // 0x23f6c0: 0xc07ab38  jal         func_1EACE0
    ctx->pc = 0x23F6C0u;
    SET_GPR_U32(ctx, 31, 0x23F6C8u);
    ctx->pc = 0x1EACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EACE0u, 0x23F6C0u, 0x23F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6C8u;
label_23f6c8:
    // 0x23f6c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f6cc: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x23F6CCu;
    {
        const bool branch_taken_0x23f6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f6cc) {
            ctx->pc = 0x23F708u;
            return;
        }
    }
    ctx->pc = 0x23F6D4u;
    // 0x23f6d4: 0xc07aaa4  jal         func_1EAA90
    ctx->pc = 0x23F6D4u;
    SET_GPR_U32(ctx, 31, 0x23F6DCu);
    ctx->pc = 0x1EAA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA90u, 0x23F6D4u, 0x23F6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6DCu;
label_23f6dc:
    // 0x23f6dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23f6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f6e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f6e4: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F6E4u;
    {
        const bool branch_taken_0x23f6e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23f6e4) {
            ctx->pc = 0x23F6F8u;
            return;
        }
    }
    ctx->pc = 0x23F6ECu;
    // 0x23f6ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23f6f0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F6F0u;
    {
        const bool branch_taken_0x23f6f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f6f0) {
            ctx->pc = 0x23F708u;
            return;
        }
    }
    ctx->pc = 0x23F6F8u;
}
