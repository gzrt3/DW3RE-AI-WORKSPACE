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

// Function: FUN_00232e80
// Address: 0x232e80 - 0x232e9c
void FUN_00232e80_0x232e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00232e80_0x232e80");
#endif

    ctx->pc = 0x232e80u;

    // 0x232e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232e84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232e88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232e8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x232e90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x232e94: 0xc069218  jal         func_1A4860
    ctx->pc = 0x232E94u;
    SET_GPR_U32(ctx, 31, 0x232E9Cu);
    ctx->pc = 0x232E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E94u;
    // 0x232e98: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x232E94u, 0x232E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E9Cu;
}
