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

// Function: FUN_00286e98
// Address: 0x286e98 - 0x286eb0
void FUN_00286e98_0x286e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00286e98_0x286e98");
#endif

    switch (ctx->pc) {
        case 0x286ea8u: goto label_286ea8;
        default: break;
    }

    ctx->pc = 0x286e98u;

    // 0x286e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x286e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x286e9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x286e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x286ea0: 0xc01d858  jal         func_076160
    ctx->pc = 0x286EA0u;
    SET_GPR_U32(ctx, 31, 0x286EA8u);
    ctx->pc = 0x286EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286EA0u;
    // 0x286ea4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x76160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76160u, 0x286EA0u, 0x286EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286EA8u;
label_286ea8:
    // 0x286ea8: 0xf  sync
    ctx->pc = 0x286ea8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x286eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x286eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x286eb0u;
}
