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

// Function: FUN_001b9d60
// Address: 0x1b9d60 - 0x1b9d80
void FUN_001b9d60_0x1b9d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b9d60_0x1b9d60");
#endif

    switch (ctx->pc) {
        case 0x1b9d74u: goto label_1b9d74;
        default: break;
    }

    ctx->pc = 0x1b9d60u;

    // 0x1b9d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9d64: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b9d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1b9d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9d6c: 0xc055e34  jal         func_1578D0
    ctx->pc = 0x1B9D6Cu;
    SET_GPR_U32(ctx, 31, 0x1B9D74u);
    ctx->pc = 0x1B9D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D6Cu;
    // 0x1b9d70: 0xac203880  sw          $zero, 0x3880($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 14464), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1578D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1578D0u, 0x1B9D6Cu, 0x1B9D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D74u;
label_1b9d74:
    // 0x1b9d74: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b9d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1b9d78: 0xac223884  sw          $v0, 0x3884($at)
    ctx->pc = 0x1b9d78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x463884u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x463884u, _value); } while (0);
    // 0x1b9d7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1b9d80u;
}
