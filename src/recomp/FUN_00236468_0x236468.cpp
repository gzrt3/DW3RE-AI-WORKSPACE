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

// Function: FUN_00236468
// Address: 0x236468 - 0x2364b4
void FUN_00236468_0x236468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236468_0x236468");
#endif

    switch (ctx->pc) {
        case 0x236484u: goto label_236484;
        case 0x23649cu: goto label_23649c;
        case 0x2364a8u: goto label_2364a8;
        default: break;
    }

    ctx->pc = 0x236468u;

    // 0x236468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23646c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23646cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236470: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236474: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x236478: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23647c: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x23647Cu;
    SET_GPR_U32(ctx, 31, 0x236484u);
    ctx->pc = 0x236480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23647Cu;
    // 0x236480: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x23647Cu, 0x236484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236484u;
label_236484:
    // 0x236484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236488: 0x24050098  addiu       $a1, $zero, 0x98
    ctx->pc = 0x236488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x23648c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23648Cu;
    {
        const bool branch_taken_0x23648c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23648Cu;
        // 0x236490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23648c) {
            ctx->pc = 0x2364ACu;
            goto label_2364ac;
        }
    }
    ctx->pc = 0x236494u;
    // 0x236494: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x236494u;
    SET_GPR_U32(ctx, 31, 0x23649Cu);
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x236494u, 0x23649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23649Cu;
label_23649c:
    // 0x23649c: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x23649cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x2364a0: 0xc069210  jal         func_1A4840
    ctx->pc = 0x2364A0u;
    SET_GPR_U32(ctx, 31, 0x2364A8u);
    ctx->pc = 0x2364A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2364A0u;
    // 0x2364a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x2364A0u, 0x2364A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2364A8u;
label_2364a8:
    // 0x2364a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2364a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2364ac:
    // 0x2364ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2364acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2364b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2364b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x2364b4u;
}
