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

// Function: entry_0018079c
// Address: 0x18079c - 0x1807ac
void entry_0018079c_0x18079c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018079c_0x18079c");
#endif

    ctx->pc = 0x18079cu;

    // 0x18079c: 0x878787dc  lh          $a3, -0x7824($gp)
    ctx->pc = 0x18079cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936540)));
    // 0x1807a0: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1807a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1807a4: 0xc066896  jal         func_19A258
    ctx->pc = 0x1807A4u;
    SET_GPR_U32(ctx, 31, 0x1807ACu);
    ctx->pc = 0x1807A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1807A4u;
    // 0x1807a8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A258u, 0x1807A4u, 0x1807ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1807ACu;
}
