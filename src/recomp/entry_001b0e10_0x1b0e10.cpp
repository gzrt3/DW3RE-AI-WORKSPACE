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

// Function: entry_001b0e10
// Address: 0x1b0e10 - 0x1b0e38
void entry_001b0e10_0x1b0e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0e10_0x1b0e10");
#endif

    switch (ctx->pc) {
        case 0x1b0e2cu: goto label_1b0e2c;
        default: break;
    }

    ctx->pc = 0x1b0e10u;

    // 0x1b0e10: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b0e10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1b0e14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e18: 0x250861d8  addiu       $t0, $t0, 0x61D8
    ctx->pc = 0x1b0e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25048));
    // 0x1b0e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e24: 0xc06c38e  jal         func_1B0E38
    ctx->pc = 0x1B0E24u;
    SET_GPR_U32(ctx, 31, 0x1B0E2Cu);
    ctx->pc = 0x1B0E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E24u;
    // 0x1b0e28: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0E38u, 0x1B0E24u, 0x1B0E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E2Cu;
label_1b0e2c:
    // 0x1b0e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0e30: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E30u;
        // 0x1b0e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0E38u;
}
