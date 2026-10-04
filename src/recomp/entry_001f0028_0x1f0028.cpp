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

// Function: entry_001f0028
// Address: 0x1f0028 - 0x1f0050
void entry_001f0028_0x1f0028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0028_0x1f0028");
#endif

    switch (ctx->pc) {
        case 0x1f003cu: goto label_1f003c;
        default: break;
    }

    ctx->pc = 0x1f0028u;

    // 0x1f0028: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1f0028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1f002c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f002cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0030: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f0030u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0034: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1F0034u;
    SET_GPR_U32(ctx, 31, 0x1F003Cu);
    ctx->pc = 0x1F0038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0034u;
    // 0x1f0038: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1F0034u, 0x1F003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F003Cu;
label_1f003c:
    // 0x1f003c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f003cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0040: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0040u;
        // 0x1f0044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0048u;
    // 0x1f0048: 0x0  nop
    ctx->pc = 0x1f0048u;
    // NOP
    // 0x1f004c: 0x0  nop
    ctx->pc = 0x1f004cu;
    // NOP
    ctx->pc = 0x1f0050u;
}
