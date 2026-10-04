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

// Function: entry_00159394
// Address: 0x159394 - 0x1593f0
void entry_00159394_0x159394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159394_0x159394");
#endif

    switch (ctx->pc) {
        case 0x1593c4u: goto label_1593c4;
        default: break;
    }

    ctx->pc = 0x159394u;

    // 0x159394: 0x0  nop
    ctx->pc = 0x159394u;
    // NOP
    // 0x159398: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x159398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x15939c: 0x2903000c  slti        $v1, $t0, 0xC
    ctx->pc = 0x15939cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1593a0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1593A0u;
    {
        const bool branch_taken_0x1593a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1593A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593A0u;
        // 0x1593a4: 0x25290240  addiu       $t1, $t1, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593a0) {
            ctx->pc = 0x159374u;
            return;
        }
    }
    ctx->pc = 0x1593A8u;
    // 0x1593a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1593A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1593A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1593B0u;
    // 0x1593b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1593b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1593b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1593b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1593b8: 0x8c840238  lw          $a0, 0x238($a0)
    ctx->pc = 0x1593b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 568)));
    // 0x1593bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1593bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1593c0: 0xc51804  sllv        $v1, $a1, $a2
    ctx->pc = 0x1593c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_1593c4:
    // 0x1593c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1593c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1593c8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1593C8u;
    {
        const bool branch_taken_0x1593c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1593c8) {
            ctx->pc = 0x1593D4u;
            goto label_1593d4;
        }
    }
    ctx->pc = 0x1593D0u;
    // 0x1593d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1593d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1593d4:
    // 0x1593d4: 0x0  nop
    ctx->pc = 0x1593d4u;
    // NOP
    // 0x1593d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1593d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1593dc: 0x28c3000c  slti        $v1, $a2, 0xC
    ctx->pc = 0x1593dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1593e0: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1593E0u;
    {
        const bool branch_taken_0x1593e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1593E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593E0u;
        // 0x1593e4: 0xc51804  sllv        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593e0) {
            ctx->pc = 0x1593C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1593c4;
        }
    }
    ctx->pc = 0x1593E8u;
    // 0x1593e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1593E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1593E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1593F0u;
}
