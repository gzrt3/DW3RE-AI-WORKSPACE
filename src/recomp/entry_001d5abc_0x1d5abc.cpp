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

// Function: entry_001d5abc
// Address: 0x1d5abc - 0x1d5ae0
void entry_001d5abc_0x1d5abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5abc_0x1d5abc");
#endif

    switch (ctx->pc) {
        case 0x1d5ad8u: goto label_1d5ad8;
        default: break;
    }

    ctx->pc = 0x1d5abcu;

    // 0x1d5abc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5ABCu;
    {
        const bool branch_taken_0x1d5abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5abc) {
            ctx->pc = 0x1D5AE0u;
            return;
        }
    }
    ctx->pc = 0x1D5AC4u;
    // 0x1d5ac4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d5ac8: 0xa0620246  sb          $v0, 0x246($v1)
    ctx->pc = 0x1d5ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 582), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d5acc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1d5accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d5ad0: 0xc054388  jal         func_150E20
    ctx->pc = 0x1D5AD0u;
    SET_GPR_U32(ctx, 31, 0x1D5AD8u);
    ctx->pc = 0x1D5AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AD0u;
    // 0x1d5ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150E20u, 0x1D5AD0u, 0x1D5AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AD8u;
label_1d5ad8:
    // 0x1d5ad8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D5AD8u;
    {
        const bool branch_taken_0x1d5ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ad8) {
            ctx->pc = 0x1D5AE4u;
            return;
        }
    }
    ctx->pc = 0x1D5AE0u;
}
