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

// Function: entry_0021fe78
// Address: 0x21fe78 - 0x21fe88
void entry_0021fe78_0x21fe78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fe78_0x21fe78");
#endif

    switch (ctx->pc) {
        case 0x21fe80u: goto label_21fe80;
        default: break;
    }

    ctx->pc = 0x21fe78u;

    // 0x21fe78: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FE78u;
    SET_GPR_U32(ctx, 31, 0x21FE80u);
    ctx->pc = 0x21FE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE78u;
    // 0x21fe7c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FE78u, 0x21FE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE80u;
label_21fe80:
    // 0x21fe80: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x21FE80u;
    {
        const bool branch_taken_0x21fe80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe80) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FE88u;
}
