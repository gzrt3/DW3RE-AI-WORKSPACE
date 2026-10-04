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

// Function: FUN_00124e80
// Address: 0x124e80 - 0x124e9c
void FUN_00124e80_0x124e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00124e80_0x124e80");
#endif

    switch (ctx->pc) {
        case 0x124e94u: goto label_124e94;
        default: break;
    }

    ctx->pc = 0x124e80u;

    // 0x124e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x124e84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x124e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x124e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x124e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x124e8c: 0xc071740  jal         func_1C5D00
    ctx->pc = 0x124E8Cu;
    SET_GPR_U32(ctx, 31, 0x124E94u);
    ctx->pc = 0x124E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E8Cu;
    // 0x124e90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D00u, 0x124E8Cu, 0x124E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E94u;
label_124e94:
    // 0x124e94: 0xc071728  jal         func_1C5CA0
    ctx->pc = 0x124E94u;
    SET_GPR_U32(ctx, 31, 0x124E9Cu);
    ctx->pc = 0x124E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E94u;
    // 0x124e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CA0u, 0x124E94u, 0x124E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E9Cu;
}
