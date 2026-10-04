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

// Function: FUN_002329b8
// Address: 0x2329b8 - 0x2329d0
void FUN_002329b8_0x2329b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002329b8_0x2329b8");
#endif

    ctx->pc = 0x2329b8u;

    // 0x2329b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2329b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2329bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2329bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2329c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2329c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2329c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2329c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2329c8: 0xc069218  jal         func_1A4860
    ctx->pc = 0x2329C8u;
    SET_GPR_U32(ctx, 31, 0x2329D0u);
    ctx->pc = 0x2329CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2329C8u;
    // 0x2329cc: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x2329C8u, 0x2329D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2329D0u;
}
