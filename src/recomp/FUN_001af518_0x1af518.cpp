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

// Function: FUN_001af518
// Address: 0x1af518 - 0x1af550
void FUN_001af518_0x1af518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af518_0x1af518");
#endif

    switch (ctx->pc) {
        case 0x1af548u: goto label_1af548;
        default: break;
    }

    ctx->pc = 0x1af518u;

    // 0x1af518: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1af51c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1af51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1af520: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1af520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1af524: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1af524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1af528: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1af528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af52c: 0x8c4372bc  lw          $v1, 0x72BC($v0)
    ctx->pc = 0x1af52cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2872BCu));
    // 0x1af530: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1af530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af534: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1af534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1af538: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF538u;
    {
        const bool branch_taken_0x1af538 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AF53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF538u;
        // 0x1af53c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af538) {
            ctx->pc = 0x1AF548u;
            goto label_1af548;
        }
    }
    ctx->pc = 0x1AF540u;
    // 0x1af540: 0xc06bd74  jal         func_1AF5D0
    ctx->pc = 0x1AF540u;
    SET_GPR_U32(ctx, 31, 0x1AF548u);
    ctx->pc = 0x1AF5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF5D0u, 0x1AF540u, 0x1AF548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF548u;
label_1af548:
    // 0x1af548: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1AF548u;
    SET_GPR_U32(ctx, 31, 0x1AF550u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1AF548u, 0x1AF550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF550u;
}
