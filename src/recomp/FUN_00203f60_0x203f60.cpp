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

// Function: FUN_00203f60
// Address: 0x203f60 - 0x203f84
void FUN_00203f60_0x203f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203f60_0x203f60");
#endif

    switch (ctx->pc) {
        case 0x203f80u: goto label_203f80;
        default: break;
    }

    ctx->pc = 0x203f60u;

    // 0x203f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x203f64: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x203f64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x203f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x203f6c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x203f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x203f70: 0x8c240d20  lw          $a0, 0xD20($at)
    ctx->pc = 0x203f70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x290D20u));
    // 0x203f74: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x203f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x203f78: 0xc041698  jal         func_105A60
    ctx->pc = 0x203F78u;
    SET_GPR_U32(ctx, 31, 0x203F80u);
    ctx->pc = 0x203F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203F78u;
    // 0x203f7c: 0x24c64440  addiu       $a2, $a2, 0x4440 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A60u, 0x203F78u, 0x203F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F80u;
label_203f80:
    // 0x203f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x203f84u;
}
