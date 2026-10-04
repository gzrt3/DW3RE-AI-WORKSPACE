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

// Function: entry_001c1b6c
// Address: 0x1c1b6c - 0x1c1bd0
void entry_001c1b6c_0x1c1b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1b6c_0x1c1b6c");
#endif

    switch (ctx->pc) {
        case 0x1c1b8cu: goto label_1c1b8c;
        case 0x1c1ba8u: goto label_1c1ba8;
        default: break;
    }

    ctx->pc = 0x1c1b6cu;

    // 0x1c1b6c: 0xaf828938  sw          $v0, -0x76C8($gp)
    ctx->pc = 0x1c1b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936888), GPR_U32(ctx, 2));
    // 0x1c1b70: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c1b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c1b74: 0x8f888938  lw          $t0, -0x76C8($gp)
    ctx->pc = 0x1c1b74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
    // 0x1c1b78: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1c1b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c1b7c: 0x24060270  addiu       $a2, $zero, 0x270
    ctx->pc = 0x1c1b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    // 0x1c1b80: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x1c1b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c1b84: 0xc054e5c  jal         func_153970
    ctx->pc = 0x1C1B84u;
    SET_GPR_U32(ctx, 31, 0x1C1B8Cu);
    ctx->pc = 0x1C1B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B84u;
    // 0x1c1b88: 0x340affe1  ori         $t2, $zero, 0xFFE1 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1C1B84u, 0x1C1B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B8Cu;
label_1c1b8c:
    // 0x1c1b8c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1c1b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x1c1b90: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c1b90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b94: 0x24848ec0  addiu       $a0, $a0, -0x7140
    ctx->pc = 0x1c1b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938304));
    // 0x1c1b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b9c: 0x24060093  addiu       $a2, $zero, 0x93
    ctx->pc = 0x1c1b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x1c1ba0: 0xc054e74  jal         func_1539D0
    ctx->pc = 0x1C1BA0u;
    SET_GPR_U32(ctx, 31, 0x1C1BA8u);
    ctx->pc = 0x1C1BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1BA0u;
    // 0x1c1ba4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1C1BA0u, 0x1C1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1BA8u;
label_1c1ba8:
    // 0x1c1ba8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1bac: 0xaf828934  sw          $v0, -0x76CC($gp)
    ctx->pc = 0x1c1bacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936884), GPR_U32(ctx, 2));
    // 0x1c1bb0: 0xaf838930  sw          $v1, -0x76D0($gp)
    ctx->pc = 0x1c1bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 3));
    // 0x1c1bb4: 0xaf80893c  sw          $zero, -0x76C4($gp)
    ctx->pc = 0x1c1bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), GPR_U32(ctx, 0));
    // 0x1c1bb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c1bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1bbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1bc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BC4u;
        // 0x1c1bc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1BCCu;
    // 0x1c1bcc: 0x0  nop
    ctx->pc = 0x1c1bccu;
    // NOP
    ctx->pc = 0x1c1bd0u;
}
