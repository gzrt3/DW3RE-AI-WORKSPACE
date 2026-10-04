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

// Function: entry_0021fd30
// Address: 0x21fd30 - 0x21fd40
void entry_0021fd30_0x21fd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fd30_0x21fd30");
#endif

    switch (ctx->pc) {
        case 0x21fd38u: goto label_21fd38;
        default: break;
    }

    ctx->pc = 0x21fd30u;

    // 0x21fd30: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FD30u;
    SET_GPR_U32(ctx, 31, 0x21FD38u);
    ctx->pc = 0x21FD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD30u;
    // 0x21fd34: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FD30u, 0x21FD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD38u;
label_21fd38:
    // 0x21fd38: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x21FD38u;
    {
        const bool branch_taken_0x21fd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd38) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FD40u;
}
