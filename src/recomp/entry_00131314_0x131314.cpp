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

// Function: entry_00131314
// Address: 0x131314 - 0x131324
void entry_00131314_0x131314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131314_0x131314");
#endif

    switch (ctx->pc) {
        case 0x13131cu: goto label_13131c;
        default: break;
    }

    ctx->pc = 0x131314u;

    // 0x131314: 0xc05b848  jal         func_16E120
    ctx->pc = 0x131314u;
    SET_GPR_U32(ctx, 31, 0x13131Cu);
    ctx->pc = 0x131318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131314u;
    // 0x131318: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E120u, 0x131314u, 0x13131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13131Cu;
label_13131c:
    // 0x13131c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x13131cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x131320: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x131320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x131324u;
}
