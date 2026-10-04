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

// Function: entry_0023f540
// Address: 0x23f540 - 0x23f570
void entry_0023f540_0x23f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f540_0x23f540");
#endif

    switch (ctx->pc) {
        case 0x23f548u: goto label_23f548;
        case 0x23f550u: goto label_23f550;
        case 0x23f558u: goto label_23f558;
        default: break;
    }

    ctx->pc = 0x23f540u;

    // 0x23f540: 0xc060158  jal         func_180560
    ctx->pc = 0x23F540u;
    SET_GPR_U32(ctx, 31, 0x23F548u);
    ctx->pc = 0x180560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180560u, 0x23F540u, 0x23F548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F548u;
label_23f548:
    // 0x23f548: 0xc060258  jal         func_180960
    ctx->pc = 0x23F548u;
    SET_GPR_U32(ctx, 31, 0x23F550u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23F548u, 0x23F550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F550u;
label_23f550:
    // 0x23f550: 0xc060258  jal         func_180960
    ctx->pc = 0x23F550u;
    SET_GPR_U32(ctx, 31, 0x23F558u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23F550u, 0x23F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F558u;
label_23f558:
    // 0x23f558: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f55c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23f55cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f560: 0x3e00008  jr          $ra
    ctx->pc = 0x23F560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F560u;
        // 0x23f564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F568u;
    // 0x23f568: 0x0  nop
    ctx->pc = 0x23f568u;
    // NOP
    // 0x23f56c: 0x0  nop
    ctx->pc = 0x23f56cu;
    // NOP
    ctx->pc = 0x23f570u;
}
