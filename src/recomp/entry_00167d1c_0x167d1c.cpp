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

// Function: entry_00167d1c
// Address: 0x167d1c - 0x167d54
void entry_00167d1c_0x167d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167d1c_0x167d1c");
#endif

    switch (ctx->pc) {
        case 0x167d40u: goto label_167d40;
        default: break;
    }

    ctx->pc = 0x167d1cu;

label_167d1c:
    // 0x167d1c: 0x0  nop
    ctx->pc = 0x167d1cu;
    // NOP
label_167d20:
    // 0x167d20: 0x9203004d  lbu         $v1, 0x4D($s0)
    ctx->pc = 0x167d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_167d24:
    // 0x167d24: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x167d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_167d28:
    // 0x167d28: 0x24426260  addiu       $v0, $v0, 0x6260
    ctx->pc = 0x167d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25184));
label_167d2c:
    // 0x167d2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x167d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_167d30:
    // 0x167d30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_167d34:
    // 0x167d34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x167d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_167d38:
    // 0x167d38: 0x40f809  jalr        $v0
label_167d3c:
    if (ctx->pc == 0x167D3Cu) {
        ctx->pc = 0x167D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D38u;
        // 0x167d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D40u;
        goto label_167d40;
    }
    ctx->pc = 0x167D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167D40u);
        ctx->pc = 0x167D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D38u;
        // 0x167d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167D38u, 0x167D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167D40u;
label_167d40:
    // 0x167d40: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_167d44:
    if (ctx->pc == 0x167D44u) {
        ctx->pc = 0x167D48u;
        goto label_167d48;
    }
    ctx->pc = 0x167D40u;
    {
        const bool branch_taken_0x167d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167d40) {
            ctx->pc = 0x167D88u;
            return;
        }
    }
    ctx->pc = 0x167D48u;
label_167d48:
    // 0x167d48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x167d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_167d4c:
    // 0x167d4c: 0x1000000e  b           . + 4 + (0xE << 2)
label_167d50:
    if (ctx->pc == 0x167D50u) {
        ctx->pc = 0x167D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D4Cu;
        // 0x167d50: 0xa202004e  sb          $v0, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D54u;
        goto label_fallthrough_0x167d4c;
    }
    ctx->pc = 0x167D4Cu;
    {
        const bool branch_taken_0x167d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D4Cu;
        // 0x167d50: 0xa202004e  sb          $v0, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d4c) {
            ctx->pc = 0x167D88u;
            return;
        }
    }
label_fallthrough_0x167d4c:
    ctx->pc = 0x167D54u;
}
