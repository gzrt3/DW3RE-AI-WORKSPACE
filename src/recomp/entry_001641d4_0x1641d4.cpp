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

// Function: entry_001641d4
// Address: 0x1641d4 - 0x1641f8
void entry_001641d4_0x1641d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001641d4_0x1641d4");
#endif

    ctx->pc = 0x1641d4u;

label_1641d4:
    // 0x1641d4: 0x0  nop
    ctx->pc = 0x1641d4u;
    // NOP
label_1641d8:
    // 0x1641d8: 0x8e021558  lw          $v0, 0x1558($s0)
    ctx->pc = 0x1641d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5464)));
label_1641dc:
    // 0x1641dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1641e0:
    if (ctx->pc == 0x1641E0u) {
        ctx->pc = 0x1641E4u;
        goto label_1641e4;
    }
    ctx->pc = 0x1641DCu;
    {
        const bool branch_taken_0x1641dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1641dc) {
            ctx->pc = 0x1641F8u;
            return;
        }
    }
    ctx->pc = 0x1641E4u;
label_1641e4:
    // 0x1641e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1641e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1641e8:
    // 0x1641e8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1641e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1641ec:
    // 0x1641ec: 0x8e021558  lw          $v0, 0x1558($s0)
    ctx->pc = 0x1641ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5464)));
label_1641f0:
    // 0x1641f0: 0x40f809  jalr        $v0
label_1641f4:
    if (ctx->pc == 0x1641F4u) {
        ctx->pc = 0x1641F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641F0u;
        // 0x1641f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1641F8u;
        goto label_fallthrough_0x1641f0;
    }
    ctx->pc = 0x1641F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1641F8u);
        ctx->pc = 0x1641F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641F0u;
        // 0x1641f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1641F0u, 0x1641F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1641f0:
    ctx->pc = 0x1641F8u;
}
