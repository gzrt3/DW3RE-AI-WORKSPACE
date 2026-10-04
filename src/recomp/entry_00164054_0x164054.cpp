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

// Function: entry_00164054
// Address: 0x164054 - 0x164078
void entry_00164054_0x164054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164054_0x164054");
#endif

    ctx->pc = 0x164054u;

label_164054:
    // 0x164054: 0x0  nop
    ctx->pc = 0x164054u;
    // NOP
label_164058:
    // 0x164058: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x164058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_16405c:
    // 0x16405c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_164060:
    if (ctx->pc == 0x164060u) {
        ctx->pc = 0x164064u;
        goto label_164064;
    }
    ctx->pc = 0x16405Cu;
    {
        const bool branch_taken_0x16405c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16405c) {
            ctx->pc = 0x164078u;
            return;
        }
    }
    ctx->pc = 0x164064u;
label_164064:
    // 0x164064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164068:
    // 0x164068: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x164068u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_16406c:
    // 0x16406c: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x16406cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_164070:
    // 0x164070: 0x40f809  jalr        $v0
label_164074:
    if (ctx->pc == 0x164074u) {
        ctx->pc = 0x164074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164070u;
        // 0x164074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164078u;
        goto label_fallthrough_0x164070;
    }
    ctx->pc = 0x164070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164078u);
        ctx->pc = 0x164074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164070u;
        // 0x164074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164070u, 0x164078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x164070:
    ctx->pc = 0x164078u;
}
