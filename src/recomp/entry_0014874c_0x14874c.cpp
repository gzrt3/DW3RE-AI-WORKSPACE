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

// Function: entry_0014874c
// Address: 0x14874c - 0x148770
void entry_0014874c_0x14874c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014874c_0x14874c");
#endif

    ctx->pc = 0x14874cu;

    // 0x14874c: 0x0  nop
    ctx->pc = 0x14874cu;
    // NOP
    // 0x148750: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x148750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x148754: 0x2442bd80  addiu       $v0, $v0, -0x4280
    ctx->pc = 0x148754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950272));
    // 0x148758: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x148758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14875c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14875cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148760: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148760u;
    {
        const bool branch_taken_0x148760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x148760) {
            ctx->pc = 0x148770u;
            return;
        }
    }
    ctx->pc = 0x148768u;
    // 0x148768: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x148768u;
    SET_GPR_U32(ctx, 31, 0x148770u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x148768u, 0x148770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148770u;
}
