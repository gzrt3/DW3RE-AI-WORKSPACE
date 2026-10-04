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

// Function: entry_001c1c34
// Address: 0x1c1c34 - 0x1c1ca0
void entry_001c1c34_0x1c1c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1c34_0x1c1c34");
#endif

    switch (ctx->pc) {
        case 0x1c1c58u: goto label_1c1c58;
        case 0x1c1c74u: goto label_1c1c74;
        default: break;
    }

    ctx->pc = 0x1c1c34u;

    // 0x1c1c34: 0xaf828928  sw          $v0, -0x76D8($gp)
    ctx->pc = 0x1c1c34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936872), GPR_U32(ctx, 2));
    // 0x1c1c38: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1c1c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c1c3c: 0x8f888928  lw          $t0, -0x76D8($gp)
    ctx->pc = 0x1c1c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936872)));
    // 0x1c1c40: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c1c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c1c44: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1c1c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1c1c48: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c1c48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c4c: 0x24090172  addiu       $t1, $zero, 0x172
    ctx->pc = 0x1c1c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x1c1c50: 0xc054e5c  jal         func_153970
    ctx->pc = 0x1C1C50u;
    SET_GPR_U32(ctx, 31, 0x1C1C58u);
    ctx->pc = 0x1C1C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C50u;
    // 0x1c1c54: 0x340affe1  ori         $t2, $zero, 0xFFE1 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1C1C50u, 0x1C1C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C58u;
label_1c1c58:
    // 0x1c1c58: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1c1c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x1c1c5c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c1c5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c60: 0x2484d840  addiu       $a0, $a0, -0x27C0
    ctx->pc = 0x1c1c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957120));
    // 0x1c1c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c68: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x1c1c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1c1c6c: 0xc054e74  jal         func_1539D0
    ctx->pc = 0x1C1C6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1C74u);
    ctx->pc = 0x1C1C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C6Cu;
    // 0x1c1c70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1C1C6Cu, 0x1C1C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C74u;
label_1c1c74:
    // 0x1c1c74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1c78: 0xaf828924  sw          $v0, -0x76DC($gp)
    ctx->pc = 0x1c1c78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936868), GPR_U32(ctx, 2));
    // 0x1c1c7c: 0xaf838920  sw          $v1, -0x76E0($gp)
    ctx->pc = 0x1c1c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 3));
    // 0x1c1c80: 0xaf80892c  sw          $zero, -0x76D4($gp)
    ctx->pc = 0x1c1c80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 0));
    // 0x1c1c84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1c88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C8Cu;
        // 0x1c1c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1C94u;
    // 0x1c1c94: 0x0  nop
    ctx->pc = 0x1c1c94u;
    // NOP
    // 0x1c1c98: 0x0  nop
    ctx->pc = 0x1c1c98u;
    // NOP
    // 0x1c1c9c: 0x0  nop
    ctx->pc = 0x1c1c9cu;
    // NOP
    ctx->pc = 0x1c1ca0u;
}
