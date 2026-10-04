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

// Function: entry_0017b28c
// Address: 0x17b28c - 0x17b2f0
void entry_0017b28c_0x17b28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b28c_0x17b28c");
#endif

    ctx->pc = 0x17b28cu;

label_17b28c:
    // 0x17b28c: 0x0  nop
    ctx->pc = 0x17b28cu;
    // NOP
    // 0x17b290: 0x10d5021  addu        $t2, $t0, $t5
    ctx->pc = 0x17b290u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x17b294: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x17b294u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x17b298: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x17b298u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x17b29c: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x17b29cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x17b2a0: 0x29640002  slti        $a0, $t3, 0x2
    ctx->pc = 0x17b2a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17b2a4: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x17b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    // 0x17b2a8: 0x25ad0fd0  addiu       $t5, $t5, 0xFD0
    ctx->pc = 0x17b2a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4048));
    // 0x17b2ac: 0xad47000c  sw          $a3, 0xC($t2)
    ctx->pc = 0x17b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 7));
    // 0x17b2b0: 0xad460010  sw          $a2, 0x10($t2)
    ctx->pc = 0x17b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 6));
    // 0x17b2b4: 0xad400014  sw          $zero, 0x14($t2)
    ctx->pc = 0x17b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 0));
    // 0x17b2b8: 0xad400018  sw          $zero, 0x18($t2)
    ctx->pc = 0x17b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 0));
    // 0x17b2bc: 0xad40001c  sw          $zero, 0x1C($t2)
    ctx->pc = 0x17b2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 0));
    // 0x17b2c0: 0xad450fc0  sw          $a1, 0xFC0($t2)
    ctx->pc = 0x17b2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4032), GPR_U32(ctx, 5));
    // 0x17b2c4: 0xad400fc4  sw          $zero, 0xFC4($t2)
    ctx->pc = 0x17b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4036), GPR_U32(ctx, 0));
    // 0x17b2c8: 0xad400fc8  sw          $zero, 0xFC8($t2)
    ctx->pc = 0x17b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4040), GPR_U32(ctx, 0));
    // 0x17b2cc: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x17B2CCu;
    {
        const bool branch_taken_0x17b2cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2CCu;
        // 0x17b2d0: 0xad400fcc  sw          $zero, 0xFCC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4044), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2cc) {
            ctx->pc = 0x17B28Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b28c;
        }
    }
    ctx->pc = 0x17B2D4u;
    // 0x17b2d4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x17b2d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x17b2d8: 0x29840002  slti        $a0, $t4, 0x2
    ctx->pc = 0x17b2d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17b2dc: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x17B2DCu;
    {
        const bool branch_taken_0x17b2dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2DCu;
        // 0x17b2e0: 0x25ce1fa0  addiu       $t6, $t6, 0x1FA0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2dc) {
            ctx->pc = 0x17B27Cu;
            return;
        }
    }
    ctx->pc = 0x17B2E4u;
    // 0x17b2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2E4u;
        // 0x17b2e8: 0xaf808754  sw          $zero, -0x78AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B2ECu;
    // 0x17b2ec: 0x0  nop
    ctx->pc = 0x17b2ecu;
    // NOP
    ctx->pc = 0x17b2f0u;
}
