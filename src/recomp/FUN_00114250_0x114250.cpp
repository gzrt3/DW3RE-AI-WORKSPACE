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

// Function: FUN_00114250
// Address: 0x114250 - 0x114268
void FUN_00114250_0x114250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00114250_0x114250");
#endif

    switch (ctx->pc) {
        case 0x114264u: goto label_114264;
        default: break;
    }

    ctx->pc = 0x114250u;

    // 0x114250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x114254: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x114254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11425c: 0xc045100  jal         func_114400
    ctx->pc = 0x11425Cu;
    SET_GPR_U32(ctx, 31, 0x114264u);
    ctx->pc = 0x114260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11425Cu;
    // 0x114260: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114400u, 0x11425Cu, 0x114264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114264u;
label_114264:
    // 0x114264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x114268u;
}
