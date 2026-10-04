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

// Function: FUN_001c3080
// Address: 0x1c3080 - 0x1c3104
void FUN_001c3080_0x1c3080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c3080_0x1c3080");
#endif

    ctx->pc = 0x1c3080u;

    // 0x1c3080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c3084: 0x240200ab  addiu       $v0, $zero, 0xAB
    ctx->pc = 0x1c3084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x1c3088: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c3088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c308c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c308cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c3090: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3090u;
    {
        const bool branch_taken_0x1c3090 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3090u;
        // 0x1c3094: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3090) {
            ctx->pc = 0x1C30A0u;
            goto label_1c30a0;
        }
    }
    ctx->pc = 0x1C3098u;
    // 0x1c3098: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3098u;
    {
        const bool branch_taken_0x1c3098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3098u;
        // 0x1c309c: 0x24040082  addiu       $a0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3098) {
            ctx->pc = 0x1C30C0u;
            goto label_1c30c0;
        }
    }
    ctx->pc = 0x1C30A0u;
label_1c30a0:
    // 0x1c30a0: 0x28820082  slti        $v0, $a0, 0x82
    ctx->pc = 0x1c30a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)130) ? 1 : 0);
    // 0x1c30a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C30A4u;
    {
        const bool branch_taken_0x1c30a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30A4u;
        // 0x1c30a8: 0x28820059  slti        $v0, $a0, 0x59 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)89) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30a4) {
            ctx->pc = 0x1C30B4u;
            goto label_1c30b4;
        }
    }
    ctx->pc = 0x1C30ACu;
    // 0x1c30ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C30ACu;
    {
        const bool branch_taken_0x1c30ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30ACu;
        // 0x1c30b0: 0x2484ffd7  addiu       $a0, $a0, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30ac) {
            ctx->pc = 0x1C30C0u;
            goto label_1c30c0;
        }
    }
    ctx->pc = 0x1C30B4u;
label_1c30b4:
    // 0x1c30b4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C30B4u;
    {
        const bool branch_taken_0x1c30b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c30b4) {
            ctx->pc = 0x1C30C0u;
            goto label_1c30c0;
        }
    }
    ctx->pc = 0x1C30BCu;
    // 0x1c30bc: 0x2484ffd7  addiu       $a0, $a0, -0x29
    ctx->pc = 0x1c30bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967255));
label_1c30c0:
    // 0x1c30c0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1c30c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1c30c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1c30c8: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x1c30c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c30cc: 0x2442f320  addiu       $v0, $v0, -0xCE0
    ctx->pc = 0x1c30ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964000));
    // 0x1c30d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c30d4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c30d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1c30d8: 0x8c2a3ffc  lw          $t2, 0x3FFC($at)
    ctx->pc = 0x1c30d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x1c30dc: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1c30dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
    // 0x1c30e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c30e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c30e4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1c30e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c30e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c30e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c30ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c30f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30f4: 0xa1140  sll         $v0, $t2, 5
    ctx->pc = 0x1c30f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x1c30f8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1c30f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c30fc: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1C30FCu;
    SET_GPR_U32(ctx, 31, 0x1C3104u);
    ctx->pc = 0x1C3100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30FCu;
    // 0x1c3100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C30FCu, 0x1C3104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3104u;
}
