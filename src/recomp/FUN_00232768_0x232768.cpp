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

// Function: FUN_00232768
// Address: 0x232768 - 0x232788
void FUN_00232768_0x232768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00232768_0x232768");
#endif

    ctx->pc = 0x232768u;

    // 0x232768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23276c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23276cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232770: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232774: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x232778: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x232778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23277c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23277cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x232780: 0xc069218  jal         func_1A4860
    ctx->pc = 0x232780u;
    SET_GPR_U32(ctx, 31, 0x232788u);
    ctx->pc = 0x232784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232780u;
    // 0x232784: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x232780u, 0x232788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232788u;
}
