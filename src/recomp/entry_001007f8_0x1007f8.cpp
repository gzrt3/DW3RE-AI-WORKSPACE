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

// Function: entry_001007f8
// Address: 0x1007f8 - 0x100808
void entry_001007f8_0x1007f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001007f8_0x1007f8");
#endif

    switch (ctx->pc) {
        case 0x100804u: goto label_100804;
        default: break;
    }

    ctx->pc = 0x1007f8u;

    // 0x1007f8: 0x8f848444  lw          $a0, -0x7BBC($gp)
    ctx->pc = 0x1007f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935620)));
    // 0x1007fc: 0xc040290  jal         func_100A40
    ctx->pc = 0x1007FCu;
    SET_GPR_U32(ctx, 31, 0x100804u);
    ctx->pc = 0x100800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1007FCu;
    // 0x100800: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100A40u, 0x1007FCu, 0x100804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100804u;
label_100804:
    // 0x100804: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x100804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x100808u;
}
