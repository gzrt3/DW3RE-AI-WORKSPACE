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

// Function: FUN_001ab4a8
// Address: 0x1ab4a8 - 0x1ab4ec
void FUN_001ab4a8_0x1ab4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ab4a8_0x1ab4a8");
#endif

    ctx->pc = 0x1ab4a8u;

    // 0x1ab4a8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1ab4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1ab4ac: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1ab4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1ab4b0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1ab4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1ab4b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ab4b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab4b8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1ab4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1ab4bc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1ab4bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab4c0: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1ab4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1ab4c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ab4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab4c8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1ab4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1ab4cc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1ab4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ab4d0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1ab4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1ab4d4: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x1ab4d4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
    // 0x1ab4d8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1ab4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1ab4dc: 0x26f23240  addiu       $s2, $s7, 0x3240
    ctx->pc = 0x1ab4dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 12864));
    // 0x1ab4e0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1ab4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1ab4e4: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1AB4E4u;
    SET_GPR_U32(ctx, 31, 0x1AB4ECu);
    ctx->pc = 0x1AB4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB4E4u;
    // 0x1ab4e8: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1AB4E4u, 0x1AB4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB4ECu;
}
