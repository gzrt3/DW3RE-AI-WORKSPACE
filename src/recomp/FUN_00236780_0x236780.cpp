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

// Function: FUN_00236780
// Address: 0x236780 - 0x2367b0
void FUN_00236780_0x236780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236780_0x236780");
#endif

    switch (ctx->pc) {
        case 0x236790u: goto label_236790;
        default: break;
    }

    ctx->pc = 0x236780u;

    // 0x236780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236788: 0xc069a54  jal         func_1A6950
    ctx->pc = 0x236788u;
    SET_GPR_U32(ctx, 31, 0x236790u);
    ctx->pc = 0x23678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236788u;
    // 0x23678c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6950u, 0x236788u, 0x236790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236790u;
label_236790:
    // 0x236790: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x236790u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236794: 0x8f8282fc  lw          $v0, -0x7D04($gp)
    ctx->pc = 0x236794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935292)));
    // 0x236798: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x236798u;
    {
        const bool branch_taken_0x236798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236798u;
        // 0x23679c: 0x2402ff1f  addiu       $v0, $zero, -0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236798) {
            ctx->pc = 0x2367A8u;
            goto label_2367a8;
        }
    }
    ctx->pc = 0x2367A0u;
    // 0x2367a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2367a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2367a4: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x2367a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_2367a8:
    // 0x2367a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2367a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2367ac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2367acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2367b0u;
}
