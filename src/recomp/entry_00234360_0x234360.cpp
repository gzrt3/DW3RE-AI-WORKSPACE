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

// Function: entry_00234360
// Address: 0x234360 - 0x2343a0
void entry_00234360_0x234360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00234360_0x234360");
#endif

    switch (ctx->pc) {
        case 0x234368u: goto label_234368;
        default: break;
    }

    ctx->pc = 0x234360u;

label_234360:
    // 0x234360: 0xc06641a  jal         func_199068
    ctx->pc = 0x234360u;
    SET_GPR_U32(ctx, 31, 0x234368u);
    ctx->pc = 0x234364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234360u;
    // 0x234364: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199068u, 0x234360u, 0x234368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234368u;
label_234368:
    // 0x234368: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x234368u;
    {
        const bool branch_taken_0x234368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x23436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234368u;
        // 0x23436c: 0x8f8282d0  lw          $v0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234368) {
            ctx->pc = 0x234360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234360;
        }
    }
    ctx->pc = 0x234370u;
    // 0x234370: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x234370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234378: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x234378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23437c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x23437cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x234380: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x234380u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x234384: 0xac20126c  sw          $zero, 0x126C($at)
    ctx->pc = 0x234384u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4716), GPR_U32(ctx, 0));
    // 0x234388: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x234388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x23438c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x23438cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x234390: 0xac231268  sw          $v1, 0x1268($at)
    ctx->pc = 0x234390u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4712), GPR_U32(ctx, 3));
    // 0x234394: 0x3e00008  jr          $ra
    ctx->pc = 0x234394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234394u;
        // 0x234398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23439Cu;
    // 0x23439c: 0x0  nop
    ctx->pc = 0x23439cu;
    // NOP
    ctx->pc = 0x2343a0u;
}
