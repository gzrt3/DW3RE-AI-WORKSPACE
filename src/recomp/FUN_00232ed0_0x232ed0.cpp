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

// Function: FUN_00232ed0
// Address: 0x232ed0 - 0x232ee8
void FUN_00232ed0_0x232ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00232ed0_0x232ed0");
#endif

    ctx->pc = 0x232ed0u;

    // 0x232ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x232ed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232ed8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232edc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x232edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x232ee0: 0xc069218  jal         func_1A4860
    ctx->pc = 0x232EE0u;
    SET_GPR_U32(ctx, 31, 0x232EE8u);
    ctx->pc = 0x232EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232EE0u;
    // 0x232ee4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x232EE0u, 0x232EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232EE8u;
}
