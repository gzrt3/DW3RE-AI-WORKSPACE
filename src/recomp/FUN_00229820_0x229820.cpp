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

// Function: FUN_00229820
// Address: 0x229820 - 0x229838
void FUN_00229820_0x229820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00229820_0x229820");
#endif

    ctx->pc = 0x229820u;

    // 0x229820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x229820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x229824: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x229824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x229828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x229828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22982c: 0x90224910  lbu         $v0, 0x4910($at)
    ctx->pc = 0x22982cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334910u));
    // 0x229830: 0xc059eb8  jal         func_167AE0
    ctx->pc = 0x229830u;
    SET_GPR_U32(ctx, 31, 0x229838u);
    ctx->pc = 0x229834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229830u;
    // 0x229834: 0x2444000a  addiu       $a0, $v0, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x229830u, 0x229838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229838u;
}
