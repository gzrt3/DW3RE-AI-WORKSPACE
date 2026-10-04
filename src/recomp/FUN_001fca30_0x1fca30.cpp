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

// Function: FUN_001fca30
// Address: 0x1fca30 - 0x1fca50
void FUN_001fca30_0x1fca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fca30_0x1fca30");
#endif

    switch (ctx->pc) {
        case 0x1fca4cu: goto label_1fca4c;
        default: break;
    }

    ctx->pc = 0x1fca30u;

    // 0x1fca30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fca30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fca34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fca38: 0x93859040  lbu         $a1, -0x6FC0($gp)
    ctx->pc = 0x1fca38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938688)));
    // 0x1fca3c: 0x93869041  lbu         $a2, -0x6FBF($gp)
    ctx->pc = 0x1fca3cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938689)));
    // 0x1fca40: 0x93879042  lbu         $a3, -0x6FBE($gp)
    ctx->pc = 0x1fca40u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938690)));
    // 0x1fca44: 0xc071400  jal         func_1C5000
    ctx->pc = 0x1FCA44u;
    SET_GPR_U32(ctx, 31, 0x1FCA4Cu);
    ctx->pc = 0x1FCA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA44u;
    // 0x1fca48: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5000u, 0x1FCA44u, 0x1FCA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA4Cu;
label_1fca4c:
    // 0x1fca4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fca4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1fca50u;
}
