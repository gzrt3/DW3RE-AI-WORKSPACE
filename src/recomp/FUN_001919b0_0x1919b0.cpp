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

// Function: FUN_001919b0
// Address: 0x1919b0 - 0x1919c4
void FUN_001919b0_0x1919b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001919b0_0x1919b0");
#endif

    ctx->pc = 0x1919b0u;

    // 0x1919b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1919b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1919b4: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1919b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x1919b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1919b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1919bc: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1919BCu;
    SET_GPR_U32(ctx, 31, 0x1919C4u);
    ctx->pc = 0x1919C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1919BCu;
    // 0x1919c0: 0x24a52d00  addiu       $a1, $a1, 0x2D00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1919BCu, 0x1919C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1919C4u;
}
