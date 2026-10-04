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

// Function: FUN_00232de8
// Address: 0x232de8 - 0x232e00
void FUN_00232de8_0x232de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00232de8_0x232de8");
#endif

    ctx->pc = 0x232de8u;

    // 0x232de8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x232dec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232df0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232df4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x232df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x232df8: 0xc08c90c  jal         func_232430
    ctx->pc = 0x232DF8u;
    SET_GPR_U32(ctx, 31, 0x232E00u);
    ctx->pc = 0x232DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232DF8u;
    // 0x232dfc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232430u, 0x232DF8u, 0x232E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E00u;
}
