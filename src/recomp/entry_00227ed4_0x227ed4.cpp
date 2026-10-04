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

// Function: entry_00227ed4
// Address: 0x227ed4 - 0x227f30
void entry_00227ed4_0x227ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227ed4_0x227ed4");
#endif

    switch (ctx->pc) {
        case 0x227ee8u: goto label_227ee8;
        case 0x227f18u: goto label_227f18;
        default: break;
    }

    ctx->pc = 0x227ed4u;

    // 0x227ed4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x227ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x227ed8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x227ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x227edc: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x227edcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227ee0: 0xc072ecc  jal         func_1CBB30
    ctx->pc = 0x227EE0u;
    SET_GPR_U32(ctx, 31, 0x227EE8u);
    ctx->pc = 0x227EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227EE0u;
    // 0x227ee4: 0x248499b0  addiu       $a0, $a0, -0x6650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBB30u, 0x227EE0u, 0x227EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EE8u;
label_227ee8:
    // 0x227ee8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x227ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227eec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x227eecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ef0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x227ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x227ef4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x227ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227ef8: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x227ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
    // 0x227efc: 0x2442ea30  addiu       $v0, $v0, -0x15D0
    ctx->pc = 0x227efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961712));
    // 0x227f00: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x227f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f04: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x227f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x227f08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227f0c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x227f0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227f10: 0xc070430  jal         func_1C10C0
    ctx->pc = 0x227F10u;
    SET_GPR_U32(ctx, 31, 0x227F18u);
    ctx->pc = 0x227F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227F10u;
    // 0x227f14: 0x250899b0  addiu       $t0, $t0, -0x6650 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C10C0u, 0x227F10u, 0x227F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F18u;
label_227f18:
    // 0x227f18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227f1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227f20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227f24: 0x3e00008  jr          $ra
    ctx->pc = 0x227F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F24u;
        // 0x227f28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227F2Cu;
    // 0x227f2c: 0x0  nop
    ctx->pc = 0x227f2cu;
    // NOP
    ctx->pc = 0x227f30u;
}
