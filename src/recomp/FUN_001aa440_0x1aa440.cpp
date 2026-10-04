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

// Function: FUN_001aa440
// Address: 0x1aa440 - 0x1aa480
void FUN_001aa440_0x1aa440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aa440_0x1aa440");
#endif

    ctx->pc = 0x1aa440u;

    // 0x1aa440: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1aa440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1aa444: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1aa444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1aa448: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1aa448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1aa44c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aa44cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa450: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1aa450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1aa454: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1aa454u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa458: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1aa458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1aa45c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1aa45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1aa460: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1aa460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1aa464: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x1aa464u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
    // 0x1aa468: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1aa468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1aa46c: 0x26f23240  addiu       $s2, $s7, 0x3240
    ctx->pc = 0x1aa46cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 12864));
    // 0x1aa470: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1aa470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1aa474: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1aa474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1aa478: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1AA478u;
    SET_GPR_U32(ctx, 31, 0x1AA480u);
    ctx->pc = 0x1AA47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA478u;
    // 0x1aa47c: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1AA478u, 0x1AA480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA480u;
}
