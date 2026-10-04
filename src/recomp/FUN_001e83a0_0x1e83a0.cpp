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

// Function: FUN_001e83a0
// Address: 0x1e83a0 - 0x1e83e4
void FUN_001e83a0_0x1e83a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e83a0_0x1e83a0");
#endif

    switch (ctx->pc) {
        case 0x1e83bcu: goto label_1e83bc;
        case 0x1e83d8u: goto label_1e83d8;
        case 0x1e83e0u: goto label_1e83e0;
        default: break;
    }

    ctx->pc = 0x1e83a0u;

    // 0x1e83a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e83a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e83a4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1e83a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1e83a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e83a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e83ac: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e83acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e83b0: 0x8c226914  lw          $v0, 0x6914($at)
    ctx->pc = 0x1e83b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x296914u));
    // 0x1e83b4: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1E83B4u;
    SET_GPR_U32(ctx, 31, 0x1E83BCu);
    ctx->pc = 0x1E83B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E83B4u;
    // 0x1e83b8: 0x22ac0  sll         $a1, $v0, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1E83B4u, 0x1E83BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E83BCu;
label_1e83bc:
    // 0x1e83bc: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1e83bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x1e83c0: 0xaf828e90  sw          $v0, -0x7170($gp)
    ctx->pc = 0x1e83c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938256), GPR_U32(ctx, 2));
    // 0x1e83c4: 0x8c2494d0  lw          $a0, -0x6B30($at)
    ctx->pc = 0x1e83c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x2994D0u));
    // 0x1e83c8: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1e83c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x1e83cc: 0x8c2594d4  lw          $a1, -0x6B2C($at)
    ctx->pc = 0x1e83ccu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x2994D4u));
    // 0x1e83d0: 0xc0415dc  jal         func_105770
    ctx->pc = 0x1E83D0u;
    SET_GPR_U32(ctx, 31, 0x1E83D8u);
    ctx->pc = 0x1E83D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E83D0u;
    // 0x1e83d4: 0x27868dc4  addiu       $a2, $gp, -0x723C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105770u, 0x1E83D0u, 0x1E83D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E83D8u;
label_1e83d8:
    // 0x1e83d8: 0xc041500  jal         func_105400
    ctx->pc = 0x1E83D8u;
    SET_GPR_U32(ctx, 31, 0x1E83E0u);
    ctx->pc = 0x105400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105400u, 0x1E83D8u, 0x1E83E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E83E0u;
label_1e83e0:
    // 0x1e83e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e83e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1e83e4u;
}
