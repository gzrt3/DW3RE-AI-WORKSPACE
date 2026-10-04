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

// Function: entry_00237038
// Address: 0x237038 - 0x237078
void entry_00237038_0x237038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00237038_0x237038");
#endif

    ctx->pc = 0x237038u;

label_237038:
    // 0x237038: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x237038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x23703c: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x23703cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x237040: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x237040u;
    {
        const bool branch_taken_0x237040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237040) {
            ctx->pc = 0x237070u;
            goto label_237070;
        }
    }
    ctx->pc = 0x237048u;
    // 0x237048: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x237048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23704c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x237050: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x237050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x237054: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x237054u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x237058: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x237058u;
    {
        const bool branch_taken_0x237058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237058u;
        // 0x23705c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237058) {
            ctx->pc = 0x237038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237038;
        }
    }
    ctx->pc = 0x237060u;
    // 0x237060: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x237060u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x237064: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x237064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237068: 0x3e00008  jr          $ra
    ctx->pc = 0x237068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237068u;
        // 0x23706c: 0xe3100a  movz        $v0, $a3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237070u;
label_237070:
    // 0x237070: 0x3e00008  jr          $ra
    ctx->pc = 0x237070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237070u;
        // 0x237074: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237078u;
}
