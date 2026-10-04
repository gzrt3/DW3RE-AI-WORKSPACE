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

// Function: FUN_0010db00
// Address: 0x10db00 - 0x10db1c
void FUN_0010db00_0x10db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010db00_0x10db00");
#endif

    switch (ctx->pc) {
        case 0x10db10u: goto label_10db10;
        case 0x10db18u: goto label_10db18;
        default: break;
    }

    ctx->pc = 0x10db00u;

    // 0x10db00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10db04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10db04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10db08: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x10DB08u;
    SET_GPR_U32(ctx, 31, 0x10DB10u);
    ctx->pc = 0x10DB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DB08u;
    // 0x10db0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x10DB08u, 0x10DB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DB10u;
label_10db10:
    // 0x10db10: 0xc0436cc  jal         func_10DB30
    ctx->pc = 0x10DB10u;
    SET_GPR_U32(ctx, 31, 0x10DB18u);
    ctx->pc = 0x10DB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB30u, 0x10DB10u, 0x10DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DB18u;
label_10db18:
    // 0x10db18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10db18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x10db1cu;
}
