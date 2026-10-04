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

// Function: entry_0021ffec
// Address: 0x21ffec - 0x21fffc
void entry_0021ffec_0x21ffec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ffec_0x21ffec");
#endif

    switch (ctx->pc) {
        case 0x21fff4u: goto label_21fff4;
        default: break;
    }

    ctx->pc = 0x21ffecu;

    // 0x21ffec: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FFECu;
    SET_GPR_U32(ctx, 31, 0x21FFF4u);
    ctx->pc = 0x21FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFECu;
    // 0x21fff0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FFECu, 0x21FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFF4u;
label_21fff4:
    // 0x21fff4: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x21FFF4u;
    {
        const bool branch_taken_0x21fff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fff4) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FFFCu;
}
