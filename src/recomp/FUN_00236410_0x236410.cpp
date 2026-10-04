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

// Function: FUN_00236410
// Address: 0x236410 - 0x23645c
void FUN_00236410_0x236410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236410_0x236410");
#endif

    switch (ctx->pc) {
        case 0x23642cu: goto label_23642c;
        case 0x236444u: goto label_236444;
        case 0x236450u: goto label_236450;
        default: break;
    }

    ctx->pc = 0x236410u;

    // 0x236410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236418: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23641c: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x23641cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x236420: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x236424: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236424u;
    SET_GPR_U32(ctx, 31, 0x23642Cu);
    ctx->pc = 0x236428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236424u;
    // 0x236428: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236424u, 0x23642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23642Cu;
label_23642c:
    // 0x23642c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23642cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236430: 0x24050097  addiu       $a1, $zero, 0x97
    ctx->pc = 0x236430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x236434: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x236434u;
    {
        const bool branch_taken_0x236434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236434u;
        // 0x236438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236434) {
            ctx->pc = 0x236454u;
            goto label_236454;
        }
    }
    ctx->pc = 0x23643Cu;
    // 0x23643c: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x23643Cu;
    SET_GPR_U32(ctx, 31, 0x236444u);
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x23643Cu, 0x236444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236444u;
label_236444:
    // 0x236444: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x236448: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236448u;
    SET_GPR_U32(ctx, 31, 0x236450u);
    ctx->pc = 0x23644Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236448u;
    // 0x23644c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236448u, 0x236450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236450u;
label_236450:
    // 0x236450: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236454:
    // 0x236454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236458: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x23645cu;
}
