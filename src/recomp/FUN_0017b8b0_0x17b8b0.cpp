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

// Function: FUN_0017b8b0
// Address: 0x17b8b0 - 0x17b8c8
void FUN_0017b8b0_0x17b8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017b8b0_0x17b8b0");
#endif

    ctx->pc = 0x17b8b0u;

    // 0x17b8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b8b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b8b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b8bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17b8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8c0: 0xc066d0a  jal         func_19B428
    ctx->pc = 0x17B8C0u;
    SET_GPR_U32(ctx, 31, 0x17B8C8u);
    ctx->pc = 0x17B8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B8C0u;
    // 0x17b8c4: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B428u, 0x17B8C0u, 0x17B8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B8C8u;
}
