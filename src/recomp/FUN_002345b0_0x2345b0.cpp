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

// Function: FUN_002345b0
// Address: 0x2345b0 - 0x2345e8
void FUN_002345b0_0x2345b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002345b0_0x2345b0");
#endif

    switch (ctx->pc) {
        case 0x2345dcu: goto label_2345dc;
        default: break;
    }

    ctx->pc = 0x2345b0u;

    // 0x2345b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2345b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2345b4: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2345b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x2345b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2345b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2345bc: 0x24500518  addiu       $s0, $v0, 0x518
    ctx->pc = 0x2345bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1304));
    // 0x2345c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2345c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x29051Cu));
    // 0x2345c4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2345C4u;
    {
        const bool branch_taken_0x2345c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2345C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345C4u;
        // 0x2345c8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2345c4) {
            ctx->pc = 0x2345E0u;
            goto label_2345e0;
        }
    }
    ctx->pc = 0x2345CCu;
    // 0x2345cc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2345ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2345d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2345d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2345d4: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x2345D4u;
    SET_GPR_U32(ctx, 31, 0x2345DCu);
    ctx->pc = 0x2345D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2345D4u;
    // 0x2345d8: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x2345D4u, 0x2345DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345DCu;
label_2345dc:
    // 0x2345dc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2345dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2345e0:
    // 0x2345e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2345e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2345e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2345e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x2345e8u;
}
