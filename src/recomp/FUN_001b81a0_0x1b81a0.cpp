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

// Function: FUN_001b81a0
// Address: 0x1b81a0 - 0x1b81e8
void FUN_001b81a0_0x1b81a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b81a0_0x1b81a0");
#endif

    switch (ctx->pc) {
        case 0x1b81c4u: goto label_1b81c4;
        case 0x1b81e0u: goto label_1b81e0;
        default: break;
    }

    ctx->pc = 0x1b81a0u;

    // 0x1b81a0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b81a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b81a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b81a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b81a8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1b81a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1b81ac: 0x24637800  addiu       $v1, $v1, 0x7800
    ctx->pc = 0x1b81acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30720));
    // 0x1b81b0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b81b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b81b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b81b8: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1b81b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1b81bc: 0xc066c3e  jal         func_19B0F8
    ctx->pc = 0x1B81BCu;
    SET_GPR_U32(ctx, 31, 0x1B81C4u);
    ctx->pc = 0x1B81C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B81BCu;
    // 0x1b81c0: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B0F8u, 0x1B81BCu, 0x1B81C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81C4u;
label_1b81c4:
    // 0x1b81c4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1b81c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1b81c8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1b81c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1b81cc: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x1b81ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x1b81d0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b81d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b81d4: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1b81d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b81d8: 0xc066c3e  jal         func_19B0F8
    ctx->pc = 0x1B81D8u;
    SET_GPR_U32(ctx, 31, 0x1B81E0u);
    ctx->pc = 0x1B81DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B81D8u;
    // 0x1b81dc: 0x24841e20  addiu       $a0, $a0, 0x1E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B0F8u, 0x1B81D8u, 0x1B81E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81E0u;
label_1b81e0:
    // 0x1b81e0: 0xaf8088dc  sw          $zero, -0x7724($gp)
    ctx->pc = 0x1b81e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936796), GPR_U32(ctx, 0));
    // 0x1b81e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b81e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1b81e8u;
}
