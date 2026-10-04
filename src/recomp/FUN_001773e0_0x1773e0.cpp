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

// Function: FUN_001773e0
// Address: 0x1773e0 - 0x177418
void FUN_001773e0_0x1773e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001773e0_0x1773e0");
#endif

    switch (ctx->pc) {
        case 0x177414u: goto label_177414;
        default: break;
    }

    ctx->pc = 0x1773e0u;

    // 0x1773e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1773e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1773e4: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x1773e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1773e8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1773E8u;
    {
        const bool branch_taken_0x1773e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1773ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773E8u;
        // 0x1773ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1773e8) {
            ctx->pc = 0x177414u;
            goto label_177414;
        }
    }
    ctx->pc = 0x1773F0u;
    // 0x1773f0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1773f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1773f4: 0x278281d8  addiu       $v0, $gp, -0x7E28
    ctx->pc = 0x1773f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935000));
    // 0x1773f8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1773f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1773fc: 0x278281d9  addiu       $v0, $gp, -0x7E27
    ctx->pc = 0x1773fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935001));
    // 0x177400: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x177400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x177404: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x177404u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x177408: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x177408u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17740c: 0xc044934  jal         func_1124D0
    ctx->pc = 0x17740Cu;
    SET_GPR_U32(ctx, 31, 0x177414u);
    ctx->pc = 0x177410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17740Cu;
    // 0x177410: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x17740Cu, 0x177414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177414u;
label_177414:
    // 0x177414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x177418u;
}
