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

// Function: FUN_002370c8
// Address: 0x2370c8 - 0x23710c
void FUN_002370c8_0x2370c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002370c8_0x2370c8");
#endif

    switch (ctx->pc) {
        case 0x2370ecu: goto label_2370ec;
        case 0x2370fcu: goto label_2370fc;
        default: break;
    }

    ctx->pc = 0x2370c8u;

    // 0x2370c8: 0x8f838300  lw          $v1, -0x7D00($gp)
    ctx->pc = 0x2370c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935296)));
    // 0x2370cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2370ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2370d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2370d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2370d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2370d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2370d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2370dc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2370DCu;
    {
        const bool branch_taken_0x2370dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2370E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370DCu;
        // 0x2370e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370dc) {
            ctx->pc = 0x237104u;
            goto label_237104;
        }
    }
    ctx->pc = 0x2370E4u;
    // 0x2370e4: 0xc08d1d8  jal         func_234760
    ctx->pc = 0x2370E4u;
    SET_GPR_U32(ctx, 31, 0x2370ECu);
    ctx->pc = 0x234760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234760u, 0x2370E4u, 0x2370ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2370ECu;
label_2370ec:
    // 0x2370ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2370ECu;
    {
        const bool branch_taken_0x2370ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2370F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370ECu;
        // 0x2370f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370ec) {
            ctx->pc = 0x2370FCu;
            goto label_2370fc;
        }
    }
    ctx->pc = 0x2370F4u;
    // 0x2370f4: 0xc08d786  jal         func_235E18
    ctx->pc = 0x2370F4u;
    SET_GPR_U32(ctx, 31, 0x2370FCu);
    ctx->pc = 0x235E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235E18u, 0x2370F4u, 0x2370FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2370FCu;
label_2370fc:
    // 0x2370fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2370fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237100: 0xaf838300  sw          $v1, -0x7D00($gp)
    ctx->pc = 0x237100u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935296), GPR_U32(ctx, 3));
label_237104:
    // 0x237104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237108: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x237108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x23710cu;
}
