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

// Function: entry_00164174
// Address: 0x164174 - 0x164198
void entry_00164174_0x164174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164174_0x164174");
#endif

    ctx->pc = 0x164174u;

label_164174:
    // 0x164174: 0x0  nop
    ctx->pc = 0x164174u;
    // NOP
label_164178:
    // 0x164178: 0x8e021998  lw          $v0, 0x1998($s0)
    ctx->pc = 0x164178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6552)));
label_16417c:
    // 0x16417c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_164180:
    if (ctx->pc == 0x164180u) {
        ctx->pc = 0x164184u;
        goto label_164184;
    }
    ctx->pc = 0x16417Cu;
    {
        const bool branch_taken_0x16417c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16417c) {
            ctx->pc = 0x164198u;
            return;
        }
    }
    ctx->pc = 0x164184u;
label_164184:
    // 0x164184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164188:
    // 0x164188: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x164188u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_16418c:
    // 0x16418c: 0x8e021998  lw          $v0, 0x1998($s0)
    ctx->pc = 0x16418cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6552)));
label_164190:
    // 0x164190: 0x40f809  jalr        $v0
label_164194:
    if (ctx->pc == 0x164194u) {
        ctx->pc = 0x164194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164190u;
        // 0x164194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164198u;
        goto label_fallthrough_0x164190;
    }
    ctx->pc = 0x164190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164198u);
        ctx->pc = 0x164194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164190u;
        // 0x164194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164190u, 0x164198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x164190:
    ctx->pc = 0x164198u;
}
