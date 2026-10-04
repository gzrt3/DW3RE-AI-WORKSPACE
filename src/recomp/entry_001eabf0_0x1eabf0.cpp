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

// Function: entry_001eabf0
// Address: 0x1eabf0 - 0x1eac20
void entry_001eabf0_0x1eabf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eabf0_0x1eabf0");
#endif

    switch (ctx->pc) {
        case 0x1eac0cu: goto label_1eac0c;
        default: break;
    }

    ctx->pc = 0x1eabf0u;

    // 0x1eabf0: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1eabf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x1eabf4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1eabf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eabf8: 0x24845770  addiu       $a0, $a0, 0x5770
    ctx->pc = 0x1eabf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22384));
    // 0x1eabfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eabfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac00: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x1eac00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x1eac04: 0xc054e74  jal         func_1539D0
    ctx->pc = 0x1EAC04u;
    SET_GPR_U32(ctx, 31, 0x1EAC0Cu);
    ctx->pc = 0x1EAC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAC04u;
    // 0x1eac08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1EAC04u, 0x1EAC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC0Cu;
label_1eac0c:
    // 0x1eac0c: 0xaf828ef8  sw          $v0, -0x7108($gp)
    ctx->pc = 0x1eac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938360), GPR_U32(ctx, 2));
    // 0x1eac10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eac10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eac14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eac14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eac18: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC18u;
        // 0x1eac1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAC20u;
}
