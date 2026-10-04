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

// Function: FUN_0012a680
// Address: 0x12a680 - 0x12a6c0
void FUN_0012a680_0x12a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012a680_0x12a680");
#endif

    switch (ctx->pc) {
        case 0x12a6a8u: goto label_12a6a8;
        default: break;
    }

    ctx->pc = 0x12a680u;

    // 0x12a680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12a680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12a684: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12a684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12a688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12a68c: 0x8c830300  lw          $v1, 0x300($a0)
    ctx->pc = 0x12a68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 768)));
    // 0x12a690: 0x9062009c  lbu         $v0, 0x9C($v1)
    ctx->pc = 0x12a690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x12a694: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x12a694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x12a698: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A698u;
    {
        const bool branch_taken_0x12a698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A698u;
        // 0x12a69c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a698) {
            ctx->pc = 0x12A6B0u;
            goto label_12a6b0;
        }
    }
    ctx->pc = 0x12A6A0u;
    // 0x12a6a0: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12A6A0u;
    SET_GPR_U32(ctx, 31, 0x12A6A8u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12A6A0u, 0x12A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A6A8u;
label_12a6a8:
    // 0x12a6a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12A6A8u;
    {
        const bool branch_taken_0x12a6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A6A8u;
        // 0x12a6ac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a6a8) {
            ctx->pc = 0x12A6E0u;
            return;
        }
    }
    ctx->pc = 0x12A6B0u;
label_12a6b0:
    // 0x12a6b0: 0x24660040  addiu       $a2, $v1, 0x40
    ctx->pc = 0x12a6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x12a6b4: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x12a6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x12a6b8: 0xc066e02  jal         func_19B808
    ctx->pc = 0x12A6B8u;
    SET_GPR_U32(ctx, 31, 0x12A6C0u);
    ctx->pc = 0x12A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A6B8u;
    // 0x12a6bc: 0x26050330  addiu       $a1, $s0, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x12A6B8u, 0x12A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A6C0u;
}
