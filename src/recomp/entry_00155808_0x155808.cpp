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

// Function: entry_00155808
// Address: 0x155808 - 0x155840
void entry_00155808_0x155808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155808_0x155808");
#endif

    switch (ctx->pc) {
        case 0x155810u: goto label_155810;
        case 0x15581cu: goto label_15581c;
        case 0x155828u: goto label_155828;
        default: break;
    }

    ctx->pc = 0x155808u;

    // 0x155808: 0xc041738  jal         func_105CE0
    ctx->pc = 0x155808u;
    SET_GPR_U32(ctx, 31, 0x155810u);
    ctx->pc = 0x15580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155808u;
    // 0x15580c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x155808u, 0x155810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155810u;
label_155810:
    // 0x155810: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x155810u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x155814: 0xc070080  jal         func_1C0200
    ctx->pc = 0x155814u;
    SET_GPR_U32(ctx, 31, 0x15581Cu);
    ctx->pc = 0x155818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155814u;
    // 0x155818: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x155814u, 0x15581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15581Cu;
label_15581c:
    // 0x15581c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15581cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155820: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x155820u;
    SET_GPR_U32(ctx, 31, 0x155828u);
    ctx->pc = 0x155824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155820u;
    // 0x155824: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x155820u, 0x155828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155828u;
label_155828:
    // 0x155828: 0xaf828630  sw          $v0, -0x79D0($gp)
    ctx->pc = 0x155828u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936112), GPR_U32(ctx, 2));
    // 0x15582c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15582cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155834: 0x3e00008  jr          $ra
    ctx->pc = 0x155834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155834u;
        // 0x155838: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15583Cu;
    // 0x15583c: 0x0  nop
    ctx->pc = 0x15583cu;
    // NOP
    ctx->pc = 0x155840u;
}
