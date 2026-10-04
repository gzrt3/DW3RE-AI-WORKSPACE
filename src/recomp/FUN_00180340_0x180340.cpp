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

// Function: FUN_00180340
// Address: 0x180340 - 0x180364
void FUN_00180340_0x180340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00180340_0x180340");
#endif

    switch (ctx->pc) {
        case 0x180360u: goto label_180360;
        default: break;
    }

    ctx->pc = 0x180340u;

    // 0x180340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180344: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18034c: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x18034cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x180350: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x180350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x180354: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180358: 0xc0600dc  jal         func_180370
    ctx->pc = 0x180358u;
    SET_GPR_U32(ctx, 31, 0x180360u);
    ctx->pc = 0x18035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180358u;
    // 0x18035c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180370u, 0x180358u, 0x180360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180360u;
label_180360:
    // 0x180360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x180364u;
}
