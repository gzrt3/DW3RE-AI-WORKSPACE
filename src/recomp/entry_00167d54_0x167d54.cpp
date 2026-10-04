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

// Function: entry_00167d54
// Address: 0x167d54 - 0x167d88
void entry_00167d54_0x167d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167d54_0x167d54");
#endif

    switch (ctx->pc) {
        case 0x167d78u: goto label_167d78;
        default: break;
    }

    ctx->pc = 0x167d54u;

label_167d54:
    // 0x167d54: 0x0  nop
    ctx->pc = 0x167d54u;
    // NOP
label_167d58:
    // 0x167d58: 0x9203004d  lbu         $v1, 0x4D($s0)
    ctx->pc = 0x167d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_167d5c:
    // 0x167d5c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x167d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_167d60:
    // 0x167d60: 0x24426250  addiu       $v0, $v0, 0x6250
    ctx->pc = 0x167d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25168));
label_167d64:
    // 0x167d64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x167d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_167d68:
    // 0x167d68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_167d6c:
    // 0x167d6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x167d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_167d70:
    // 0x167d70: 0x40f809  jalr        $v0
label_167d74:
    if (ctx->pc == 0x167D74u) {
        ctx->pc = 0x167D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D70u;
        // 0x167d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D78u;
        goto label_167d78;
    }
    ctx->pc = 0x167D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167D78u);
        ctx->pc = 0x167D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D70u;
        // 0x167d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167D70u, 0x167D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167D78u;
label_167d78:
    // 0x167d78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_167d7c:
    if (ctx->pc == 0x167D7Cu) {
        ctx->pc = 0x167D80u;
        goto label_167d80;
    }
    ctx->pc = 0x167D78u;
    {
        const bool branch_taken_0x167d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167d78) {
            ctx->pc = 0x167D88u;
            return;
        }
    }
    ctx->pc = 0x167D80u;
label_167d80:
    // 0x167d80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x167d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_167d84:
    // 0x167d84: 0xa202004e  sb          $v0, 0x4E($s0)
    ctx->pc = 0x167d84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x167d88u;
}
