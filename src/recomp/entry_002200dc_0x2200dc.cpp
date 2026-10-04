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

// Function: entry_002200dc
// Address: 0x2200dc - 0x2200e4
void entry_002200dc_0x2200dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002200dc_0x2200dc");
#endif

    ctx->pc = 0x2200dcu;

    // 0x2200dc: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2200DCu;
    SET_GPR_U32(ctx, 31, 0x2200E4u);
    ctx->pc = 0x2200E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200DCu;
    // 0x2200e0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2200DCu, 0x2200E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200E4u;
}
