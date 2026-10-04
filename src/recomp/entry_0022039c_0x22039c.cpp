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

// Function: entry_0022039c
// Address: 0x22039c - 0x2203b8
void entry_0022039c_0x22039c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022039c_0x22039c");
#endif

    switch (ctx->pc) {
        case 0x2203b0u: goto label_2203b0;
        default: break;
    }

    ctx->pc = 0x22039cu;

    // 0x22039c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22039Cu;
    {
        const bool branch_taken_0x22039c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22039c) {
            ctx->pc = 0x2203B8u;
            return;
        }
    }
    ctx->pc = 0x2203A4u;
    // 0x2203a4: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x2203a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x2203a8: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2203A8u;
    SET_GPR_U32(ctx, 31, 0x2203B0u);
    ctx->pc = 0x2203ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203A8u;
    // 0x2203ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2203A8u, 0x2203B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203B0u;
label_2203b0:
    // 0x2203b0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2203B0u;
    {
        const bool branch_taken_0x2203b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2203b0) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x2203B8u;
}
