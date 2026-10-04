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

// Function: FUN_001a6888
// Address: 0x1a6888 - 0x1a68b8
void FUN_001a6888_0x1a6888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6888_0x1a6888");
#endif

    switch (ctx->pc) {
        case 0x1a68b4u: goto label_1a68b4;
        default: break;
    }

    ctx->pc = 0x1a6888u;

    // 0x1a6888: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a6888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a688c: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x1a688cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x1a6890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6894: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x1a6894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1a6898: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x1a6898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x1a689c: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x1a689cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x1a68a0: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x1a68a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x1a68a4: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x1a68a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x1a68a8: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x1a68a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x1a68ac: 0xc0698a6  jal         func_1A6298
    ctx->pc = 0x1A68ACu;
    SET_GPR_U32(ctx, 31, 0x1A68B4u);
    ctx->pc = 0x1A68B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A68ACu;
    // 0x1a68b0: 0xffab0088  sd          $t3, 0x88($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6298u, 0x1A68ACu, 0x1A68B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68B4u;
label_1a68b4:
    // 0x1a68b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a68b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a68b8u;
}
