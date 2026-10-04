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

// Function: entry_001979c4
// Address: 0x1979c4 - 0x1979e8
void entry_001979c4_0x1979c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001979c4_0x1979c4");
#endif

    switch (ctx->pc) {
        case 0x1979d4u: goto label_1979d4;
        default: break;
    }

    ctx->pc = 0x1979c4u;

    // 0x1979c4: 0x0  nop
    ctx->pc = 0x1979c4u;
    // NOP
    // 0x1979c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1979c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979cc: 0xc065fec  jal         func_197FB0
    ctx->pc = 0x1979CCu;
    SET_GPR_U32(ctx, 31, 0x1979D4u);
    ctx->pc = 0x1979D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979CCu;
    // 0x1979d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FB0u, 0x1979CCu, 0x1979D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979D4u;
label_1979d4:
    // 0x1979d4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1979d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1979d8: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1979D8u;
    {
        const bool branch_taken_0x1979d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1979d8) {
            ctx->pc = 0x197978u;
            return;
        }
    }
    ctx->pc = 0x1979E0u;
    // 0x1979e0: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x1979E0u;
    {
        const bool branch_taken_0x1979e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1979e0) {
            ctx->pc = 0x197C44u;
            return;
        }
    }
    ctx->pc = 0x1979E8u;
}
