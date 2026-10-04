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

// Function: entry_0028706c
// Address: 0x28706c - 0x287080
void entry_0028706c_0x28706c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028706c_0x28706c");
#endif

    switch (ctx->pc) {
        case 0x287078u: goto label_287078;
        default: break;
    }

    ctx->pc = 0x28706cu;

    // 0x28706c: 0x24030483  addiu       $v1, $zero, 0x483
    ctx->pc = 0x28706cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
    // 0x287070: 0xc01d918  jal         func_076460
    ctx->pc = 0x287070u;
    SET_GPR_U32(ctx, 31, 0x287078u);
    ctx->pc = 0x287074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287070u;
    // 0x287074: 0x96446740  lhu         $a0, 0x6740($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x287070u, 0x287078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287078u;
label_287078:
    // 0x287078: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x287078u;
    {
        const bool branch_taken_0x287078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287078) {
            ctx->pc = 0x28708Cu;
            return;
        }
    }
    ctx->pc = 0x287080u;
}
