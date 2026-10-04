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

// Function: entry_00226614
// Address: 0x226614 - 0x226660
void entry_00226614_0x226614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226614_0x226614");
#endif

    ctx->pc = 0x226614u;

    // 0x226614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22661c: 0x3e00008  jr          $ra
    ctx->pc = 0x22661Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22661Cu;
        // 0x226620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22661Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226624u;
    // 0x226624: 0x0  nop
    ctx->pc = 0x226624u;
    // NOP
    // 0x226628: 0x0  nop
    ctx->pc = 0x226628u;
    // NOP
    // 0x22662c: 0x0  nop
    ctx->pc = 0x22662cu;
    // NOP
    // 0x226630: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x226630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x226634: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x226634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x226638: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x226638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x22663c: 0x8c254900  lw          $a1, 0x4900($at)
    ctx->pc = 0x22663cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x334900u));
    // 0x226640: 0x246350dc  addiu       $v1, $v1, 0x50DC
    ctx->pc = 0x226640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20700));
    // 0x226644: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226648: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x226648u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22664c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22664cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x226650: 0x3e00008  jr          $ra
    ctx->pc = 0x226650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226650u;
        // 0x226654: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226658u;
    // 0x226658: 0x0  nop
    ctx->pc = 0x226658u;
    // NOP
    // 0x22665c: 0x0  nop
    ctx->pc = 0x22665cu;
    // NOP
    ctx->pc = 0x226660u;
}
