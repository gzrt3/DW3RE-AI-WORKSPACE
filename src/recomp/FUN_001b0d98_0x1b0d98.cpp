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

// Function: FUN_001b0d98
// Address: 0x1b0d98 - 0x1b0de0
void FUN_001b0d98_0x1b0d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b0d98_0x1b0d98");
#endif

    switch (ctx->pc) {
        case 0x1b0dc4u: goto label_1b0dc4;
        default: break;
    }

    ctx->pc = 0x1b0d98u;

    // 0x1b0d98: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1b0d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1b0d9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0d9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0da0: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b0da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x1b0da4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0da8: 0x8c657290  lw          $a1, 0x7290($v1)
    ctx->pc = 0x1b0da8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x287290u));
    // 0x1b0dac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0db0: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0DB0u;
    {
        const bool branch_taken_0x1b0db0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1B0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DB0u;
        // 0x1b0db4: 0xac828cf0  sw          $v0, -0x7310($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294937840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0db0) {
            ctx->pc = 0x1B0DC4u;
            goto label_1b0dc4;
        }
    }
    ctx->pc = 0x1B0DB8u;
    // 0x1b0db8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1b0dbc: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0DBCu;
    SET_GPR_U32(ctx, 31, 0x1B0DC4u);
    ctx->pc = 0x1B0DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DBCu;
    // 0x1b0dc0: 0x2484ac28  addiu       $a0, $a0, -0x53D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0DBCu, 0x1B0DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DC4u;
label_1b0dc4:
    // 0x1b0dc4: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b0dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1b0dc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0dcc: 0x250861d8  addiu       $t0, $t0, 0x61D8
    ctx->pc = 0x1b0dccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25048));
    // 0x1b0dd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0dd8: 0xc06c38e  jal         func_1B0E38
    ctx->pc = 0x1B0DD8u;
    SET_GPR_U32(ctx, 31, 0x1B0DE0u);
    ctx->pc = 0x1B0DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DD8u;
    // 0x1b0ddc: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0E38u, 0x1B0DD8u, 0x1B0DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DE0u;
}
