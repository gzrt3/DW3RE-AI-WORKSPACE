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

// Function: entry_00229a6c
// Address: 0x229a6c - 0x229ac4
void entry_00229a6c_0x229a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229a6c_0x229a6c");
#endif

    switch (ctx->pc) {
        case 0x229aacu: goto label_229aac;
        default: break;
    }

    ctx->pc = 0x229a6cu;

    // 0x229a6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x229a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x229a70: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x229a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x229a74: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x229A74u;
    {
        const bool branch_taken_0x229a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x229A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A74u;
        // 0x229a78: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a74) {
            ctx->pc = 0x229AC4u;
            return;
        }
    }
    ctx->pc = 0x229A7Cu;
    // 0x229a7c: 0x24424a30  addiu       $v0, $v0, 0x4A30
    ctx->pc = 0x229a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18992));
    // 0x229a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x229a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x229a84: 0x90420680  lbu         $v0, 0x680($v0)
    ctx->pc = 0x229a84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1664)));
    // 0x229a88: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x229A88u;
    {
        const bool branch_taken_0x229a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229a88) {
            ctx->pc = 0x229AC4u;
            return;
        }
    }
    ctx->pc = 0x229A90u;
    // 0x229a90: 0x86050006  lh          $a1, 0x6($s0)
    ctx->pc = 0x229a90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x229a94: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x229a94u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x229a98: 0x8607000a  lh          $a3, 0xA($s0)
    ctx->pc = 0x229a98u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x229a9c: 0x8608000c  lh          $t0, 0xC($s0)
    ctx->pc = 0x229a9cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x229aa0: 0x8609000e  lh          $t1, 0xE($s0)
    ctx->pc = 0x229aa0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x229aa4: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x229AA4u;
    SET_GPR_U32(ctx, 31, 0x229AACu);
    ctx->pc = 0x229AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AA4u;
    // 0x229aa8: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x229AA4u, 0x229AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AACu;
label_229aac:
    // 0x229aac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x229aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x229ab0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x229ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x229ab4: 0x24424a30  addiu       $v0, $v0, 0x4A30
    ctx->pc = 0x229ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18992));
    // 0x229ab8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x229ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229abc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x229abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x229ac0: 0xa0440680  sb          $a0, 0x680($v0)
    ctx->pc = 0x229ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1664), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x229ac4u;
}
