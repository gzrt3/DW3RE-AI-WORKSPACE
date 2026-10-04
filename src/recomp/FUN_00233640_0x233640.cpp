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

// Function: FUN_00233640
// Address: 0x233640 - 0x233680
void FUN_00233640_0x233640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233640_0x233640");
#endif

    switch (ctx->pc) {
        case 0x23365cu: goto label_23365c;
        case 0x23366cu: goto label_23366c;
        default: break;
    }

    ctx->pc = 0x233640u;

    // 0x233640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x233640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x233644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23364c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23364cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x233650: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x233650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x233654: 0xc08cd48  jal         func_233520
    ctx->pc = 0x233654u;
    SET_GPR_U32(ctx, 31, 0x23365Cu);
    ctx->pc = 0x233658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233654u;
    // 0x233658: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233520u, 0x233654u, 0x23365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23365Cu;
label_23365c:
    // 0x23365c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23365Cu;
    {
        const bool branch_taken_0x23365c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23365Cu;
        // 0x233660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23365c) {
            ctx->pc = 0x233670u;
            goto label_233670;
        }
    }
    ctx->pc = 0x233664u;
    // 0x233664: 0xc068ada  jal         func_1A2B68
    ctx->pc = 0x233664u;
    SET_GPR_U32(ctx, 31, 0x23366Cu);
    ctx->pc = 0x1A2B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2B68u, 0x233664u, 0x23366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23366Cu;
label_23366c:
    // 0x23366c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x23366cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_233670:
    // 0x233670: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x233670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233678: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x233678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23367c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23367cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x233680u;
}
