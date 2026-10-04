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

// Function: FUN_002327b8
// Address: 0x2327b8 - 0x2327f0
void FUN_002327b8_0x2327b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002327b8_0x2327b8");
#endif

    ctx->pc = 0x2327b8u;

    // 0x2327b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2327b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2327bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2327bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2327c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2327c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2327c4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2327c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2327c8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2327c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2327cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2327ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2327d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2327d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2327d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2327d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2327d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2327d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2327dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2327dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2327e0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2327e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2327e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2327e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2327e8: 0xc069218  jal         func_1A4860
    ctx->pc = 0x2327E8u;
    SET_GPR_U32(ctx, 31, 0x2327F0u);
    ctx->pc = 0x2327ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327E8u;
    // 0x2327ec: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x2327E8u, 0x2327F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327F0u;
}
