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

// Function: entry_0021eef0
// Address: 0x21eef0 - 0x21ef08
void entry_0021eef0_0x21eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021eef0_0x21eef0");
#endif

    switch (ctx->pc) {
        case 0x21eefcu: goto label_21eefc;
        default: break;
    }

    ctx->pc = 0x21eef0u;

    // 0x21eef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21eef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eef4: 0xc087d98  jal         func_21F660
    ctx->pc = 0x21EEF4u;
    SET_GPR_U32(ctx, 31, 0x21EEFCu);
    ctx->pc = 0x21EEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EEF4u;
    // 0x21eef8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F660u, 0x21EEF4u, 0x21EEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EEFCu;
label_21eefc:
    // 0x21eefc: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x21eefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21ef00: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x21ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x21ef04: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x21ef04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x21ef08u;
}
