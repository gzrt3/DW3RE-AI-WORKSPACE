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

// Function: entry_00152db8
// Address: 0x152db8 - 0x152e00
void entry_00152db8_0x152db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152db8_0x152db8");
#endif

    switch (ctx->pc) {
        case 0x152de8u: goto label_152de8;
        default: break;
    }

    ctx->pc = 0x152db8u;

    // 0x152db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x152DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152DC0u;
        // 0x152dc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152DC8u;
    // 0x152dc8: 0x0  nop
    ctx->pc = 0x152dc8u;
    // NOP
    // 0x152dcc: 0x0  nop
    ctx->pc = 0x152dccu;
    // NOP
    // 0x152dd0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x152dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152dd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152dd8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x152dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152de0: 0xc051018  jal         func_144060
    ctx->pc = 0x152DE0u;
    SET_GPR_U32(ctx, 31, 0x152DE8u);
    ctx->pc = 0x152DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152DE0u;
    // 0x152de4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144060u, 0x152DE0u, 0x152DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DE8u;
label_152de8:
    // 0x152de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152dec: 0x3e00008  jr          $ra
    ctx->pc = 0x152DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152DECu;
        // 0x152df0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152DF4u;
    // 0x152df4: 0x0  nop
    ctx->pc = 0x152df4u;
    // NOP
    // 0x152df8: 0x0  nop
    ctx->pc = 0x152df8u;
    // NOP
    // 0x152dfc: 0x0  nop
    ctx->pc = 0x152dfcu;
    // NOP
    ctx->pc = 0x152e00u;
}
