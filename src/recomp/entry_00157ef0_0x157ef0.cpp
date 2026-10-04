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

// Function: entry_00157ef0
// Address: 0x157ef0 - 0x157f00
void entry_00157ef0_0x157ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157ef0_0x157ef0");
#endif

    switch (ctx->pc) {
        case 0x157efcu: goto label_157efc;
        default: break;
    }

    ctx->pc = 0x157ef0u;

    // 0x157ef0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x157ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157ef4: 0xc07b1ac  jal         func_1EC6B0
    ctx->pc = 0x157EF4u;
    SET_GPR_U32(ctx, 31, 0x157EFCu);
    ctx->pc = 0x157EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157EF4u;
    // 0x157ef8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC6B0u, 0x157EF4u, 0x157EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157EFCu;
label_157efc:
    // 0x157efc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x157efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->pc = 0x157f00u;
}
