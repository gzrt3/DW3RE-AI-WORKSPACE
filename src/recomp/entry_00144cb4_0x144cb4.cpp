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

// Function: entry_00144cb4
// Address: 0x144cb4 - 0x144ce0
void entry_00144cb4_0x144cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144cb4_0x144cb4");
#endif

    switch (ctx->pc) {
        case 0x144cbcu: goto label_144cbc;
        case 0x144cc4u: goto label_144cc4;
        default: break;
    }

    ctx->pc = 0x144cb4u;

    // 0x144cb4: 0xc08ff18  jal         func_23FC60
    ctx->pc = 0x144CB4u;
    SET_GPR_U32(ctx, 31, 0x144CBCu);
    ctx->pc = 0x23FC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FC60u, 0x144CB4u, 0x144CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CBCu;
label_144cbc:
    // 0x144cbc: 0xc070120  jal         func_1C0480
    ctx->pc = 0x144CBCu;
    SET_GPR_U32(ctx, 31, 0x144CC4u);
    ctx->pc = 0x144CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144CBCu;
    // 0x144cc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0480u, 0x144CBCu, 0x144CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CC4u;
label_144cc4:
    // 0x144cc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x144cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144cc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x144cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144ccc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x144CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CD4u;
        // 0x144cd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144CDCu;
    // 0x144cdc: 0x0  nop
    ctx->pc = 0x144cdcu;
    // NOP
    ctx->pc = 0x144ce0u;
}
