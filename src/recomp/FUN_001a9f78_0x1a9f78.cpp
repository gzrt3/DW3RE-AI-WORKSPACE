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

// Function: FUN_001a9f78
// Address: 0x1a9f78 - 0x1a9fa4
void FUN_001a9f78_0x1a9f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a9f78_0x1a9f78");
#endif

    ctx->pc = 0x1a9f78u;

    // 0x1a9f78: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a9f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a9f7c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a9f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1a9f80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f84: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1a9f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1a9f88: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a9f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1a9f8c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1a9f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a9f90: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a9f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1a9f94: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1a9f94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
    // 0x1a9f98: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a9f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1a9f9c: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1A9F9Cu;
    SET_GPR_U32(ctx, 31, 0x1A9FA4u);
    ctx->pc = 0x1A9FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F9Cu;
    // 0x1a9fa0: 0x26703240  addiu       $s0, $s3, 0x3240 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1A9F9Cu, 0x1A9FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9FA4u;
}
