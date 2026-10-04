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

// Function: entry_001e0dfc
// Address: 0x1e0dfc - 0x1e0e20
void entry_001e0dfc_0x1e0dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0dfc_0x1e0dfc");
#endif

    switch (ctx->pc) {
        case 0x1e0e14u: goto label_1e0e14;
        default: break;
    }

    ctx->pc = 0x1e0dfcu;

    // 0x1e0dfc: 0x2406016f  addiu       $a2, $zero, 0x16F
    ctx->pc = 0x1e0dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 367));
    // 0x1e0e00: 0xa0a30c0b  sb          $v1, 0xC0B($a1)
    ctx->pc = 0x1e0e00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3083), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e0e04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e0e04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e0e08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e0c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E0E0Cu;
    SET_GPR_U32(ctx, 31, 0x1E0E14u);
    ctx->pc = 0x1E0E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0E0Cu;
    // 0x1e0e10: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E0E0Cu, 0x1E0E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0E14u;
label_1e0e14:
    // 0x1e0e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0e18: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E18u;
        // 0x1e0e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0E20u;
}
