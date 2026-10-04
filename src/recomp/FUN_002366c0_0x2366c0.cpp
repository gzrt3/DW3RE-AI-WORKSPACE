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

// Function: FUN_002366c0
// Address: 0x2366c0 - 0x23670c
void FUN_002366c0_0x2366c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002366c0_0x2366c0");
#endif

    switch (ctx->pc) {
        case 0x2366dcu: goto label_2366dc;
        case 0x2366f4u: goto label_2366f4;
        case 0x236700u: goto label_236700;
        default: break;
    }

    ctx->pc = 0x2366c0u;

    // 0x2366c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2366c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2366c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2366c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2366c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2366c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2366cc: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2366ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x2366d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2366d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2366d4: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x2366D4u;
    SET_GPR_U32(ctx, 31, 0x2366DCu);
    ctx->pc = 0x2366D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2366D4u;
    // 0x2366d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x2366D4u, 0x2366DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2366DCu;
label_2366dc:
    // 0x2366dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2366dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2366e0: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x2366e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x2366e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2366E4u;
    {
        const bool branch_taken_0x2366e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2366E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366E4u;
        // 0x2366e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2366e4) {
            ctx->pc = 0x236704u;
            goto label_236704;
        }
    }
    ctx->pc = 0x2366ECu;
    // 0x2366ec: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x2366ECu;
    SET_GPR_U32(ctx, 31, 0x2366F4u);
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x2366ECu, 0x2366F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2366F4u;
label_2366f4:
    // 0x2366f4: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2366f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x2366f8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x2366F8u;
    SET_GPR_U32(ctx, 31, 0x236700u);
    ctx->pc = 0x2366FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2366F8u;
    // 0x2366fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x2366F8u, 0x236700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236700u;
label_236700:
    // 0x236700: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236704:
    // 0x236704: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236708: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x23670cu;
}
