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

// Function: entry_001a3d20
// Address: 0x1a3d20 - 0x1a3d70
void entry_001a3d20_0x1a3d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3d20_0x1a3d20");
#endif

    switch (ctx->pc) {
        case 0x1a3d2cu: goto label_1a3d2c;
        case 0x1a3d3cu: goto label_1a3d3c;
        case 0x1a3d48u: goto label_1a3d48;
        default: break;
    }

    ctx->pc = 0x1a3d20u;

    // 0x1a3d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3d24: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A3D24u;
    SET_GPR_U32(ctx, 31, 0x1A3D2Cu);
    ctx->pc = 0x1A3D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D24u;
    // 0x1a3d28: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A3D24u, 0x1A3D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D2Cu;
label_1a3d2c:
    // 0x1a3d2c: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x1a3d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x1a3d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3d34: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A3D34u;
    SET_GPR_U32(ctx, 31, 0x1A3D3Cu);
    ctx->pc = 0x1A3D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D34u;
    // 0x1a3d38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A3D34u, 0x1A3D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D3Cu;
label_1a3d3c:
    // 0x1a3d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3d40: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A3D40u;
    SET_GPR_U32(ctx, 31, 0x1A3D48u);
    ctx->pc = 0x1A3D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D40u;
    // 0x1a3d44: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A3D40u, 0x1A3D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D48u;
label_1a3d48:
    // 0x1a3d48: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x1a3d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x1a3d4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3d54: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D54u;
        // 0x1a3d58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3D5Cu;
    // 0x1a3d5c: 0x0  nop
    ctx->pc = 0x1a3d5cu;
    // NOP
    // 0x1a3d60: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a3d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x1a3d64: 0x8068d2c  j           func_1A34B0
    ctx->pc = 0x1A3D64u;
    ctx->pc = 0x1A3D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D64u;
    // 0x1a3d68: 0x24a5a408  addiu       $a1, $a1, -0x5BF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    FUN_001a34b0_0x1a34b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A3D6Cu;
    // 0x1a3d6c: 0x0  nop
    ctx->pc = 0x1a3d6cu;
    // NOP
    ctx->pc = 0x1a3d70u;
}
