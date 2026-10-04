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

// Function: FUN_00236fe0
// Address: 0x236fe0 - 0x23700c
void FUN_00236fe0_0x236fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236fe0_0x236fe0");
#endif

    switch (ctx->pc) {
        case 0x236ff8u: goto label_236ff8;
        case 0x237008u: goto label_237008;
        default: break;
    }

    ctx->pc = 0x236fe0u;

    // 0x236fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236fe4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x236fe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x236fe8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x236FE8u;
    {
        const bool branch_taken_0x236fe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x236FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FE8u;
        // 0x236fec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fe8) {
            ctx->pc = 0x237000u;
            goto label_237000;
        }
    }
    ctx->pc = 0x236FF0u;
    // 0x236ff0: 0xc069218  jal         func_1A4860
    ctx->pc = 0x236FF0u;
    SET_GPR_U32(ctx, 31, 0x236FF8u);
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x236FF0u, 0x236FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236FF8u;
label_236ff8:
    // 0x236ff8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x236FF8u;
    {
        const bool branch_taken_0x236ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FF8u;
        // 0x236ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ff8) {
            ctx->pc = 0x237014u;
            return;
        }
    }
    ctx->pc = 0x237000u;
label_237000:
    // 0x237000: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x237000u;
    SET_GPR_U32(ctx, 31, 0x237008u);
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x237000u, 0x237008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237008u;
label_237008:
    // 0x237008: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x237008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x23700cu;
}
