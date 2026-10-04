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

// Function: FUN_00236f70
// Address: 0x236f70 - 0x236fc4
void FUN_00236f70_0x236f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236f70_0x236f70");
#endif

    switch (ctx->pc) {
        case 0x236f90u: goto label_236f90;
        case 0x236f98u: goto label_236f98;
        case 0x236fb8u: goto label_236fb8;
        default: break;
    }

    ctx->pc = 0x236f70u;

    // 0x236f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236f74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236f78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236f78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f7c: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    // 0x236f80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x236f88: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236F88u;
    SET_GPR_U32(ctx, 31, 0x236F90u);
    ctx->pc = 0x236F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F88u;
    // 0x236f8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236F88u, 0x236F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F90u;
label_236f90:
    // 0x236f90: 0xc08db0c  jal         func_236C30
    ctx->pc = 0x236F90u;
    SET_GPR_U32(ctx, 31, 0x236F98u);
    ctx->pc = 0x236F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F90u;
    // 0x236f94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C30u, 0x236F90u, 0x236F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F98u;
label_236f98:
    // 0x236f98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x236f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x236f9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fa0: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x236fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x236fa4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236FA4u;
    {
        const bool branch_taken_0x236fa4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FA4u;
        // 0x236fa8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fa4) {
            ctx->pc = 0x236FBCu;
            goto label_236fbc;
        }
    }
    ctx->pc = 0x236FACu;
    // 0x236fac: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x236fb0: 0xc08db22  jal         func_236C88
    ctx->pc = 0x236FB0u;
    SET_GPR_U32(ctx, 31, 0x236FB8u);
    ctx->pc = 0x236FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236FB0u;
    // 0x236fb4: 0xac51b280  sw          $s1, -0x4D80($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947456), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C88u, 0x236FB0u, 0x236FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236FB8u;
label_236fb8:
    // 0x236fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236fbc:
    // 0x236fbc: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236FBCu;
    SET_GPR_U32(ctx, 31, 0x236FC4u);
    ctx->pc = 0x236FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236FBCu;
    // 0x236fc0: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236FBCu, 0x236FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236FC4u;
}
