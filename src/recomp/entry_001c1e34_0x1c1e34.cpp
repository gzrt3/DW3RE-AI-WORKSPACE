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

// Function: entry_001c1e34
// Address: 0x1c1e34 - 0x1c1e60
void entry_001c1e34_0x1c1e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1e34_0x1c1e34");
#endif

    switch (ctx->pc) {
        case 0x1c1e3cu: goto label_1c1e3c;
        case 0x1c1e44u: goto label_1c1e44;
        default: break;
    }

    ctx->pc = 0x1c1e34u;

    // 0x1c1e34: 0xc0711f0  jal         func_1C47C0
    ctx->pc = 0x1C1E34u;
    SET_GPR_U32(ctx, 31, 0x1C1E3Cu);
    ctx->pc = 0x1C47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C47C0u, 0x1C1E34u, 0x1C1E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E3Cu;
label_1c1e3c:
    // 0x1c1e3c: 0xc0731b0  jal         func_1CC6C0
    ctx->pc = 0x1C1E3Cu;
    SET_GPR_U32(ctx, 31, 0x1C1E44u);
    ctx->pc = 0x1C1E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E3Cu;
    // 0x1c1e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC6C0u, 0x1C1E3Cu, 0x1C1E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E44u;
label_1c1e44:
    // 0x1c1e44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E4Cu;
        // 0x1c1e50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1E54u;
    // 0x1c1e54: 0x0  nop
    ctx->pc = 0x1c1e54u;
    // NOP
    // 0x1c1e58: 0x0  nop
    ctx->pc = 0x1c1e58u;
    // NOP
    // 0x1c1e5c: 0x0  nop
    ctx->pc = 0x1c1e5cu;
    // NOP
    ctx->pc = 0x1c1e60u;
}
