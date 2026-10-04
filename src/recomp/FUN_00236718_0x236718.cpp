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

// Function: FUN_00236718
// Address: 0x236718 - 0x236778
void FUN_00236718_0x236718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236718_0x236718");
#endif

    switch (ctx->pc) {
        case 0x236734u: goto label_236734;
        case 0x23674cu: goto label_23674c;
        case 0x236760u: goto label_236760;
        case 0x23676cu: goto label_23676c;
        default: break;
    }

    ctx->pc = 0x236718u;

    // 0x236718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23671c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23671cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236720: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236724: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x236728: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23672c: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x23672Cu;
    SET_GPR_U32(ctx, 31, 0x236734u);
    ctx->pc = 0x236730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23672Cu;
    // 0x236730: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x23672Cu, 0x236734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236734u;
label_236734:
    // 0x236734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236738: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x236738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x23673c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23673Cu;
    {
        const bool branch_taken_0x23673c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23673Cu;
        // 0x236740: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23673c) {
            ctx->pc = 0x236770u;
            goto label_236770;
        }
    }
    ctx->pc = 0x236744u;
    // 0x236744: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x236744u;
    SET_GPR_U32(ctx, 31, 0x23674Cu);
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x236744u, 0x23674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23674Cu;
label_23674c:
    // 0x23674c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23674cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236750: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236750u;
    {
        const bool branch_taken_0x236750 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x236750) {
            ctx->pc = 0x236764u;
            goto label_236764;
        }
    }
    ctx->pc = 0x236758u;
    // 0x236758: 0xc08d9e0  jal         func_236780
    ctx->pc = 0x236758u;
    SET_GPR_U32(ctx, 31, 0x236760u);
    ctx->pc = 0x236780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236780u, 0x236758u, 0x236760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236760u;
label_236760:
    // 0x236760: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236764:
    // 0x236764: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236764u;
    SET_GPR_U32(ctx, 31, 0x23676Cu);
    ctx->pc = 0x236768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236764u;
    // 0x236768: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236764u, 0x23676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23676Cu;
label_23676c:
    // 0x23676c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23676cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236770:
    // 0x236770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236774: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x236778u;
}
