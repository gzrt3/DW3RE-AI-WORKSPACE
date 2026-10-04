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

// Function: entry_001d49e0
// Address: 0x1d49e0 - 0x1d49f8
void entry_001d49e0_0x1d49e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d49e0_0x1d49e0");
#endif

    ctx->pc = 0x1d49e0u;

    // 0x1d49e0: 0x0  nop
    ctx->pc = 0x1d49e0u;
    // NOP
    // 0x1d49e4: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x1d49e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x1d49e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D49E8u;
    {
        const bool branch_taken_0x1d49e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D49ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49E8u;
        // 0x1d49ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49e8) {
            ctx->pc = 0x1D49F8u;
            return;
        }
    }
    ctx->pc = 0x1D49F0u;
    // 0x1d49f0: 0xc0753bc  jal         func_1D4EF0
    ctx->pc = 0x1D49F0u;
    SET_GPR_U32(ctx, 31, 0x1D49F8u);
    ctx->pc = 0x1D4EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4EF0u, 0x1D49F0u, 0x1D49F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D49F8u;
}
