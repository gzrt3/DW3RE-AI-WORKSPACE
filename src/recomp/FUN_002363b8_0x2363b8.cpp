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

// Function: FUN_002363b8
// Address: 0x2363b8 - 0x236404
void FUN_002363b8_0x2363b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002363b8_0x2363b8");
#endif

    switch (ctx->pc) {
        case 0x2363d4u: goto label_2363d4;
        case 0x2363ecu: goto label_2363ec;
        case 0x2363f8u: goto label_2363f8;
        default: break;
    }

    ctx->pc = 0x2363b8u;

    // 0x2363b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2363b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2363bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2363bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2363c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2363c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2363c4: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2363c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x2363c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2363c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2363cc: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x2363CCu;
    SET_GPR_U32(ctx, 31, 0x2363D4u);
    ctx->pc = 0x2363D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2363CCu;
    // 0x2363d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x2363CCu, 0x2363D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2363D4u;
label_2363d4:
    // 0x2363d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2363d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2363d8: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x2363d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2363dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2363DCu;
    {
        const bool branch_taken_0x2363dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2363E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363DCu;
        // 0x2363e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2363dc) {
            ctx->pc = 0x2363FCu;
            goto label_2363fc;
        }
    }
    ctx->pc = 0x2363E4u;
    // 0x2363e4: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x2363E4u;
    SET_GPR_U32(ctx, 31, 0x2363ECu);
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x2363E4u, 0x2363ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2363ECu;
label_2363ec:
    // 0x2363ec: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2363ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x2363f0: 0xc069210  jal         func_1A4840
    ctx->pc = 0x2363F0u;
    SET_GPR_U32(ctx, 31, 0x2363F8u);
    ctx->pc = 0x2363F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2363F0u;
    // 0x2363f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x2363F0u, 0x2363F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2363F8u;
label_2363f8:
    // 0x2363f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2363f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2363fc:
    // 0x2363fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2363fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236400: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x236404u;
}
