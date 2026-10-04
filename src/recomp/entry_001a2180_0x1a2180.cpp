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

// Function: entry_001a2180
// Address: 0x1a2180 - 0x1a2190
void entry_001a2180_0x1a2180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2180_0x1a2180");
#endif

    switch (ctx->pc) {
        case 0x1a218cu: goto label_1a218c;
        default: break;
    }

    ctx->pc = 0x1a2180u;

    // 0x1a2180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2184: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2184u;
    SET_GPR_U32(ctx, 31, 0x1A218Cu);
    ctx->pc = 0x1A2188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2184u;
    // 0x1a2188: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2184u, 0x1A218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A218Cu;
label_1a218c:
    // 0x1a218c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a218cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a2190u;
}
