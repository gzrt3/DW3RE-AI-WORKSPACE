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

// Function: entry_0018b8a0
// Address: 0x18b8a0 - 0x18b8b0
void entry_0018b8a0_0x18b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b8a0_0x18b8a0");
#endif

    switch (ctx->pc) {
        case 0x18b8a8u: goto label_18b8a8;
        default: break;
    }

    ctx->pc = 0x18b8a0u;

    // 0x18b8a0: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x18B8A0u;
    SET_GPR_U32(ctx, 31, 0x18B8A8u);
    ctx->pc = 0x18B8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B8A0u;
    // 0x18b8a4: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x18B8A0u, 0x18B8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B8A8u;
label_18b8a8:
    // 0x18b8a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18B8A8u;
    {
        const bool branch_taken_0x18b8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b8a8) {
            ctx->pc = 0x18B8B8u;
            return;
        }
    }
    ctx->pc = 0x18B8B0u;
}
