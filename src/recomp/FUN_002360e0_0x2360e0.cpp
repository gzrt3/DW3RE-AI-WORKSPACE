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

// Function: FUN_002360e0
// Address: 0x2360e0 - 0x23612c
void FUN_002360e0_0x2360e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002360e0_0x2360e0");
#endif

    switch (ctx->pc) {
        case 0x2360fcu: goto label_2360fc;
        case 0x236114u: goto label_236114;
        case 0x236120u: goto label_236120;
        default: break;
    }

    ctx->pc = 0x2360e0u;

    // 0x2360e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2360e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2360e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2360e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2360e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2360e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2360ec: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2360ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x2360f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2360f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2360f4: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x2360F4u;
    SET_GPR_U32(ctx, 31, 0x2360FCu);
    ctx->pc = 0x2360F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2360F4u;
    // 0x2360f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x2360F4u, 0x2360FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2360FCu;
label_2360fc:
    // 0x2360fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2360fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236100: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x236100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x236104: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x236104u;
    {
        const bool branch_taken_0x236104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236104u;
        // 0x236108: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236104) {
            ctx->pc = 0x236124u;
            goto label_236124;
        }
    }
    ctx->pc = 0x23610Cu;
    // 0x23610c: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x23610Cu;
    SET_GPR_U32(ctx, 31, 0x236114u);
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x23610Cu, 0x236114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236114u;
label_236114:
    // 0x236114: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x236118: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236118u;
    SET_GPR_U32(ctx, 31, 0x236120u);
    ctx->pc = 0x23611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236118u;
    // 0x23611c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236118u, 0x236120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236120u;
label_236120:
    // 0x236120: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236124:
    // 0x236124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236128: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x23612cu;
}
