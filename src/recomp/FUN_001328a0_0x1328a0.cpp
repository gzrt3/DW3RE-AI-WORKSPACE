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

// Function: FUN_001328a0
// Address: 0x1328a0 - 0x1328bc
void FUN_001328a0_0x1328a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001328a0_0x1328a0");
#endif

    ctx->pc = 0x1328a0u;

    // 0x1328a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1328a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1328a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1328a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1328a8: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1328a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1328ac: 0x90850004  lbu         $a1, 0x4($a0)
    ctx->pc = 0x1328acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1328b0: 0x90860006  lbu         $a2, 0x6($a0)
    ctx->pc = 0x1328b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1328b4: 0xc04ca34  jal         func_1328D0
    ctx->pc = 0x1328B4u;
    SET_GPR_U32(ctx, 31, 0x1328BCu);
    ctx->pc = 0x1328B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1328B4u;
    // 0x1328b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328D0u, 0x1328B4u, 0x1328BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328BCu;
}
