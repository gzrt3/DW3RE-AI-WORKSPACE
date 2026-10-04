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

// Function: entry_001ee250
// Address: 0x1ee250 - 0x1ee260
void entry_001ee250_0x1ee250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee250_0x1ee250");
#endif

    switch (ctx->pc) {
        case 0x1ee258u: goto label_1ee258;
        default: break;
    }

    ctx->pc = 0x1ee250u;

    // 0x1ee250: 0xc07b48c  jal         func_1ED230
    ctx->pc = 0x1EE250u;
    SET_GPR_U32(ctx, 31, 0x1EE258u);
    ctx->pc = 0x1ED230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED230u, 0x1EE250u, 0x1EE258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE258u;
label_1ee258:
    // 0x1ee258: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1EE258u;
    {
        const bool branch_taken_0x1ee258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE258u;
        // 0x1ee25c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee258) {
            ctx->pc = 0x1EE1ECu;
            return;
        }
    }
    ctx->pc = 0x1EE260u;
}
