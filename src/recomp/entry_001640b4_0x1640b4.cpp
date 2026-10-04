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

// Function: entry_001640b4
// Address: 0x1640b4 - 0x1640d8
void entry_001640b4_0x1640b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001640b4_0x1640b4");
#endif

    ctx->pc = 0x1640b4u;

label_1640b4:
    // 0x1640b4: 0x0  nop
    ctx->pc = 0x1640b4u;
    // NOP
label_1640b8:
    // 0x1640b8: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x1640b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_1640bc:
    // 0x1640bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1640c0:
    if (ctx->pc == 0x1640C0u) {
        ctx->pc = 0x1640C4u;
        goto label_1640c4;
    }
    ctx->pc = 0x1640BCu;
    {
        const bool branch_taken_0x1640bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1640bc) {
            ctx->pc = 0x1640D8u;
            return;
        }
    }
    ctx->pc = 0x1640C4u;
label_1640c4:
    // 0x1640c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1640c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1640c8:
    // 0x1640c8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1640c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1640cc:
    // 0x1640cc: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x1640ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_1640d0:
    // 0x1640d0: 0x40f809  jalr        $v0
label_1640d4:
    if (ctx->pc == 0x1640D4u) {
        ctx->pc = 0x1640D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640D0u;
        // 0x1640d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1640D8u;
        goto label_fallthrough_0x1640d0;
    }
    ctx->pc = 0x1640D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1640D8u);
        ctx->pc = 0x1640D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640D0u;
        // 0x1640d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1640D0u, 0x1640D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1640d0:
    ctx->pc = 0x1640D8u;
}
