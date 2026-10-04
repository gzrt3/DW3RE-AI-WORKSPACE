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

// Function: entry_0021fe40
// Address: 0x21fe40 - 0x21fe50
void entry_0021fe40_0x21fe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fe40_0x21fe40");
#endif

    switch (ctx->pc) {
        case 0x21fe48u: goto label_21fe48;
        default: break;
    }

    ctx->pc = 0x21fe40u;

    // 0x21fe40: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FE40u;
    SET_GPR_U32(ctx, 31, 0x21FE48u);
    ctx->pc = 0x21FE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE40u;
    // 0x21fe44: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FE40u, 0x21FE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE48u;
label_21fe48:
    // 0x21fe48: 0x10000191  b           . + 4 + (0x191 << 2)
    ctx->pc = 0x21FE48u;
    {
        const bool branch_taken_0x21fe48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe48) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FE50u;
}
