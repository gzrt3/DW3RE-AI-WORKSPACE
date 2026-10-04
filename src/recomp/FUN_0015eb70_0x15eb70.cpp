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

// Function: FUN_0015eb70
// Address: 0x15eb70 - 0x15ebc4
void FUN_0015eb70_0x15eb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015eb70_0x15eb70");
#endif

    switch (ctx->pc) {
        case 0x15eb88u: goto label_15eb88;
        case 0x15ebacu: goto label_15ebac;
        default: break;
    }

    ctx->pc = 0x15eb70u;

    // 0x15eb70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15eb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15eb74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15eb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15eb78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15eb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15eb7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15eb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15eb80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15eb80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15eb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15eb88:
    // 0x15eb88: 0x0  nop
    ctx->pc = 0x15eb88u;
    // NOP
    // 0x15eb8c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15eb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15eb90: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x15eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x15eb94: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x15eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x15eb98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15eb9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15EB9Cu;
    {
        const bool branch_taken_0x15eb9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eb9c) {
            ctx->pc = 0x15EBACu;
            goto label_15ebac;
        }
    }
    ctx->pc = 0x15EBA4u;
    // 0x15eba4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x15EBA4u;
    SET_GPR_U32(ctx, 31, 0x15EBACu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x15EBA4u, 0x15EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EBACu;
label_15ebac:
    // 0x15ebac: 0x0  nop
    ctx->pc = 0x15ebacu;
    // NOP
    // 0x15ebb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15ebb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15ebb4: 0x2a03000d  slti        $v1, $s0, 0xD
    ctx->pc = 0x15ebb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x15ebb8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x15EBB8u;
    {
        const bool branch_taken_0x15ebb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBB8u;
        // 0x15ebbc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ebb8) {
            ctx->pc = 0x15EB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15eb88;
        }
    }
    ctx->pc = 0x15EBC0u;
    // 0x15ebc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ebc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x15ebc4u;
}
