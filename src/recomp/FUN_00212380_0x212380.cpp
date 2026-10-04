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

// Function: FUN_00212380
// Address: 0x212380 - 0x21239c
void FUN_00212380_0x212380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00212380_0x212380");
#endif

    ctx->pc = 0x212380u;

    // 0x212380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x212384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x212384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x212388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x212388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21238c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21238cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x212390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x212390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212394: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x212394u;
    SET_GPR_U32(ctx, 31, 0x21239Cu);
    ctx->pc = 0x212398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212394u;
    // 0x212398: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x212394u, 0x21239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21239Cu;
}
