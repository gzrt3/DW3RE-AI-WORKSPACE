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

// Function: FUN_00155350
// Address: 0x155350 - 0x155364
void FUN_00155350_0x155350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00155350_0x155350");
#endif

    ctx->pc = 0x155350u;

    // 0x155350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155354: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x155354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x155358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15535c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x15535Cu;
    SET_GPR_U32(ctx, 31, 0x155364u);
    ctx->pc = 0x155360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15535Cu;
    // 0x155360: 0x24a5ba00  addiu       $a1, $a1, -0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x15535Cu, 0x155364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155364u;
}
