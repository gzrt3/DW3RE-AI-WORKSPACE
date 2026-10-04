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

// Function: FUN_001ab090
// Address: 0x1ab090 - 0x1ab0dc
void FUN_001ab090_0x1ab090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ab090_0x1ab090");
#endif

    ctx->pc = 0x1ab090u;

    // 0x1ab090: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1ab090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1ab094: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1ab094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1ab098: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1ab098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1ab09c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ab09cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0a0: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1ab0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1ab0a4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1ab0a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0a8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1ab0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1ab0ac: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1ab0acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0b0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1ab0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1ab0b4: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1ab0b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0b8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1ab0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1ab0bc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ab0bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0c0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1ab0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1ab0c4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1ab0c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0c8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1ab0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1ab0cc: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1ab0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1ab0d0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1ab0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1ab0d4: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1AB0D4u;
    SET_GPR_U32(ctx, 31, 0x1AB0DCu);
    ctx->pc = 0x1AB0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0D4u;
    // 0x1ab0d8: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1AB0D4u, 0x1AB0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0DCu;
}
