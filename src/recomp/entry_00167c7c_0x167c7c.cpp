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

// Function: entry_00167c7c
// Address: 0x167c7c - 0x167cb8
void entry_00167c7c_0x167c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167c7c_0x167c7c");
#endif

    switch (ctx->pc) {
        case 0x167ca8u: goto label_167ca8;
        default: break;
    }

    ctx->pc = 0x167c7cu;

label_167c7c:
    // 0x167c7c: 0x0  nop
    ctx->pc = 0x167c7cu;
    // NOP
label_167c80:
    // 0x167c80: 0x9205004d  lbu         $a1, 0x4D($s0)
    ctx->pc = 0x167c80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_167c84:
    // 0x167c84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x167c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167c88:
    // 0x167c88: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x167c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_167c8c:
    // 0x167c8c: 0x24426250  addiu       $v0, $v0, 0x6250
    ctx->pc = 0x167c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25168));
label_167c90:
    // 0x167c90: 0x5180b  movn        $v1, $zero, $a1
    ctx->pc = 0x167c90u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_167c94:
    // 0x167c94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x167c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_167c98:
    // 0x167c98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_167c9c:
    // 0x167c9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x167c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_167ca0:
    // 0x167ca0: 0x40f809  jalr        $v0
label_167ca4:
    if (ctx->pc == 0x167CA4u) {
        ctx->pc = 0x167CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CA0u;
        // 0x167ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167CA8u;
        goto label_167ca8;
    }
    ctx->pc = 0x167CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167CA8u);
        ctx->pc = 0x167CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CA0u;
        // 0x167ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167CA0u, 0x167CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167CA8u;
label_167ca8:
    // 0x167ca8: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_167cac:
    if (ctx->pc == 0x167CACu) {
        ctx->pc = 0x167CB0u;
        goto label_167cb0;
    }
    ctx->pc = 0x167CA8u;
    {
        const bool branch_taken_0x167ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167ca8) {
            ctx->pc = 0x167D88u;
            return;
        }
    }
    ctx->pc = 0x167CB0u;
label_167cb0:
    // 0x167cb0: 0x10000035  b           . + 4 + (0x35 << 2)
label_167cb4:
    if (ctx->pc == 0x167CB4u) {
        ctx->pc = 0x167CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CB0u;
        // 0x167cb4: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167CB8u;
        goto label_fallthrough_0x167cb0;
    }
    ctx->pc = 0x167CB0u;
    {
        const bool branch_taken_0x167cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CB0u;
        // 0x167cb4: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167cb0) {
            ctx->pc = 0x167D88u;
            return;
        }
    }
label_fallthrough_0x167cb0:
    ctx->pc = 0x167CB8u;
}
