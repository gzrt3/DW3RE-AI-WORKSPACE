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

// Function: entry_00227ec0
// Address: 0x227ec0 - 0x227ed4
void entry_00227ec0_0x227ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227ec0_0x227ec0");
#endif

    switch (ctx->pc) {
        case 0x227ed0u: goto label_227ed0;
        default: break;
    }

    ctx->pc = 0x227ec0u;

    // 0x227ec0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x227ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x227ec4: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x227ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227ec8: 0xc05d988  jal         func_176620
    ctx->pc = 0x227EC8u;
    SET_GPR_U32(ctx, 31, 0x227ED0u);
    ctx->pc = 0x227ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227EC8u;
    // 0x227ecc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176620u, 0x227EC8u, 0x227ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227ED0u;
label_227ed0:
    // 0x227ed0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x227ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x227ed4u;
}
