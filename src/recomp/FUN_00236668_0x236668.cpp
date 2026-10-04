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

// Function: FUN_00236668
// Address: 0x236668 - 0x2366b4
void FUN_00236668_0x236668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236668_0x236668");
#endif

    switch (ctx->pc) {
        case 0x236684u: goto label_236684;
        case 0x23669cu: goto label_23669c;
        case 0x2366a8u: goto label_2366a8;
        default: break;
    }

    ctx->pc = 0x236668u;

    // 0x236668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23666c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23666cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236670: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236674: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x236678: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23667c: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x23667Cu;
    SET_GPR_U32(ctx, 31, 0x236684u);
    ctx->pc = 0x236680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23667Cu;
    // 0x236680: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x23667Cu, 0x236684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236684u;
label_236684:
    // 0x236684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236688: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x236688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x23668c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23668Cu;
    {
        const bool branch_taken_0x23668c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23668Cu;
        // 0x236690: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23668c) {
            ctx->pc = 0x2366ACu;
            goto label_2366ac;
        }
    }
    ctx->pc = 0x236694u;
    // 0x236694: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x236694u;
    SET_GPR_U32(ctx, 31, 0x23669Cu);
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x236694u, 0x23669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23669Cu;
label_23669c:
    // 0x23669c: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x23669cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x2366a0: 0xc069210  jal         func_1A4840
    ctx->pc = 0x2366A0u;
    SET_GPR_U32(ctx, 31, 0x2366A8u);
    ctx->pc = 0x2366A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2366A0u;
    // 0x2366a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x2366A0u, 0x2366A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2366A8u;
label_2366a8:
    // 0x2366a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2366a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2366ac:
    // 0x2366ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2366acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2366b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2366b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x2366b4u;
}
