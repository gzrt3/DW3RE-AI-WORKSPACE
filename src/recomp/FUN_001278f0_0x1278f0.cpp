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

// Function: FUN_001278f0
// Address: 0x1278f0 - 0x127914
void FUN_001278f0_0x1278f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001278f0_0x1278f0");
#endif

    ctx->pc = 0x1278f0u;

    // 0x1278f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1278f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1278f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1278f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1278f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1278f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1278fc: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x1278fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x127900: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x127900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x127904: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x127904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x127908: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x127908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x12790c: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x12790Cu;
    SET_GPR_U32(ctx, 31, 0x127914u);
    ctx->pc = 0x127910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12790Cu;
    // 0x127910: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x12790Cu, 0x127914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127914u;
}
