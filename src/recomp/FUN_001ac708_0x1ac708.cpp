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

// Function: FUN_001ac708
// Address: 0x1ac708 - 0x1ac71c
void FUN_001ac708_0x1ac708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ac708_0x1ac708");
#endif

    switch (ctx->pc) {
        case 0x1ac718u: goto label_1ac718;
        default: break;
    }

    ctx->pc = 0x1ac708u;

    // 0x1ac708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac70c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac710: 0xc06b180  jal         func_1AC600
    ctx->pc = 0x1AC710u;
    SET_GPR_U32(ctx, 31, 0x1AC718u);
    ctx->pc = 0x1AC714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC710u;
    // 0x1ac714: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC600u, 0x1AC710u, 0x1AC718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC718u;
label_1ac718:
    // 0x1ac718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ac71cu;
}
