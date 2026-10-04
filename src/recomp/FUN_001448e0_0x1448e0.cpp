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

// Function: FUN_001448e0
// Address: 0x1448e0 - 0x1448fc
void FUN_001448e0_0x1448e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001448e0_0x1448e0");
#endif

    ctx->pc = 0x1448e0u;

    // 0x1448e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1448e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1448e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1448e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1448e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1448e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1448ec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1448ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1448f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1448f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1448f4: 0xc070120  jal         func_1C0480
    ctx->pc = 0x1448F4u;
    SET_GPR_U32(ctx, 31, 0x1448FCu);
    ctx->pc = 0x1448F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1448F4u;
    // 0x1448f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0480u, 0x1448F4u, 0x1448FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1448FCu;
}
