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

// Function: entry_001c1cf4
// Address: 0x1c1cf4 - 0x1c1d30
void entry_001c1cf4_0x1c1cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1cf4_0x1c1cf4");
#endif

    switch (ctx->pc) {
        case 0x1c1cfcu: goto label_1c1cfc;
        case 0x1c1d08u: goto label_1c1d08;
        case 0x1c1d14u: goto label_1c1d14;
        default: break;
    }

    ctx->pc = 0x1c1cf4u;

    // 0x1c1cf4: 0xc070f9c  jal         func_1C3E70
    ctx->pc = 0x1C1CF4u;
    SET_GPR_U32(ctx, 31, 0x1C1CFCu);
    ctx->pc = 0x1C1CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CF4u;
    // 0x1c1cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3E70u, 0x1C1CF4u, 0x1C1CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1CFCu;
label_1c1cfc:
    // 0x1c1cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d00: 0xc073040  jal         func_1CC100
    ctx->pc = 0x1C1D00u;
    SET_GPR_U32(ctx, 31, 0x1C1D08u);
    ctx->pc = 0x1C1D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D00u;
    // 0x1c1d04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC100u, 0x1C1D00u, 0x1C1D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D08u;
label_1c1d08:
    // 0x1c1d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d0c: 0xc09108c  jal         func_244230
    ctx->pc = 0x1C1D0Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D14u);
    ctx->pc = 0x1C1D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D0Cu;
    // 0x1c1d10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244230u, 0x1C1D0Cu, 0x1C1D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D14u;
label_1c1d14:
    // 0x1c1d14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c1d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1d18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1d1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1d20: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D20u;
        // 0x1c1d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1D28u;
    // 0x1c1d28: 0x0  nop
    ctx->pc = 0x1c1d28u;
    // NOP
    // 0x1c1d2c: 0x0  nop
    ctx->pc = 0x1c1d2cu;
    // NOP
    ctx->pc = 0x1c1d30u;
}
