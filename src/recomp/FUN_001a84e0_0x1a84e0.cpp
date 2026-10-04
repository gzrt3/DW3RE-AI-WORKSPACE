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

// Function: FUN_001a84e0
// Address: 0x1a84e0 - 0x1a8524
void FUN_001a84e0_0x1a84e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a84e0_0x1a84e0");
#endif

    switch (ctx->pc) {
        case 0x1a8518u: goto label_1a8518;
        default: break;
    }

    ctx->pc = 0x1a84e0u;

    // 0x1a84e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a84e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a84e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a84e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a84e8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a84e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a84ec: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1a84ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x1a84f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a84f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a84f4: 0x8e025bfc  lw          $v0, 0x5BFC($s0)
    ctx->pc = 0x1a84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x285BFCu));
    // 0x1a84f8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A84F8u;
    {
        const bool branch_taken_0x1a84f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84F8u;
        // 0x1a84fc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84f8) {
            ctx->pc = 0x1A8520u;
            goto label_1a8520;
        }
    }
    ctx->pc = 0x1A8500u;
    // 0x1a8500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8504: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1a8504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1a8508: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a8508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1a850c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a850cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8510: 0xc069208  jal         func_1A4820
    ctx->pc = 0x1A8510u;
    SET_GPR_U32(ctx, 31, 0x1A8518u);
    ctx->pc = 0x1A8514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8510u;
    // 0x1a8514: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x1A8510u, 0x1A8518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8518u;
label_1a8518:
    // 0x1a8518: 0xae025bfc  sw          $v0, 0x5BFC($s0)
    ctx->pc = 0x1a8518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23548), GPR_U32(ctx, 2));
    // 0x1a851c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a851cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a8520:
    // 0x1a8520: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a8520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1a8524u;
}
