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

// Function: FUN_00193850
// Address: 0x193850 - 0x193878
void FUN_00193850_0x193850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00193850_0x193850");
#endif

    ctx->pc = 0x193850u;

    // 0x193850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19385c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19385cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x193860: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x193860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x193864: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x193864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x193868: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x193868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x19386c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19386cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x193870: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x193870u;
    SET_GPR_U32(ctx, 31, 0x193878u);
    ctx->pc = 0x193874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193870u;
    // 0x193874: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x193870u, 0x193878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193878u;
}
