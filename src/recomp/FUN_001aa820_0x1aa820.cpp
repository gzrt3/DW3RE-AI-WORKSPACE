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

// Function: FUN_001aa820
// Address: 0x1aa820 - 0x1aa85c
void FUN_001aa820_0x1aa820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aa820_0x1aa820");
#endif

    ctx->pc = 0x1aa820u;

    // 0x1aa820: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1aa820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1aa824: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1aa824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1aa828: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1aa828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1aa82c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aa82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa830: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1aa830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1aa834: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1aa834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa838: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1aa838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1aa83c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1aa83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1aa840: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1aa840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1aa844: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1aa844u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x1aa848: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1aa848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1aa84c: 0x26d23240  addiu       $s2, $s6, 0x3240
    ctx->pc = 0x1aa84cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
    // 0x1aa850: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1aa850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1aa854: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1AA854u;
    SET_GPR_U32(ctx, 31, 0x1AA85Cu);
    ctx->pc = 0x1AA858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA854u;
    // 0x1aa858: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1AA854u, 0x1AA85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA85Cu;
}
