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

// Function: entry_00164114
// Address: 0x164114 - 0x164138
void entry_00164114_0x164114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164114_0x164114");
#endif

    ctx->pc = 0x164114u;

label_164114:
    // 0x164114: 0x0  nop
    ctx->pc = 0x164114u;
    // NOP
label_164118:
    // 0x164118: 0x8e020dd8  lw          $v0, 0xDD8($s0)
    ctx->pc = 0x164118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3544)));
label_16411c:
    // 0x16411c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_164120:
    if (ctx->pc == 0x164120u) {
        ctx->pc = 0x164124u;
        goto label_164124;
    }
    ctx->pc = 0x16411Cu;
    {
        const bool branch_taken_0x16411c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16411c) {
            ctx->pc = 0x164138u;
            return;
        }
    }
    ctx->pc = 0x164124u;
label_164124:
    // 0x164124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164128:
    // 0x164128: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x164128u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_16412c:
    // 0x16412c: 0x8e020dd8  lw          $v0, 0xDD8($s0)
    ctx->pc = 0x16412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3544)));
label_164130:
    // 0x164130: 0x40f809  jalr        $v0
label_164134:
    if (ctx->pc == 0x164134u) {
        ctx->pc = 0x164134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164130u;
        // 0x164134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164138u;
        goto label_fallthrough_0x164130;
    }
    ctx->pc = 0x164130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164138u);
        ctx->pc = 0x164134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164130u;
        // 0x164134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164130u, 0x164138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x164130:
    ctx->pc = 0x164138u;
}
