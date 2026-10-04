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

// Function: entry_0018076c
// Address: 0x18076c - 0x180794
void entry_0018076c_0x18076c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018076c_0x18076c");
#endif

    switch (ctx->pc) {
        case 0x18077cu: goto label_18077c;
        default: break;
    }

    ctx->pc = 0x18076cu;

    // 0x18076c: 0x878787dc  lh          $a3, -0x7824($gp)
    ctx->pc = 0x18076cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936540)));
    // 0x180770: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x180770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x180774: 0xc0667fc  jal         func_199FF0
    ctx->pc = 0x180774u;
    SET_GPR_U32(ctx, 31, 0x18077Cu);
    ctx->pc = 0x180778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180774u;
    // 0x180778: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199FF0u, 0x180774u, 0x18077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18077Cu;
label_18077c:
    // 0x18077c: 0x8f8287dc  lw          $v0, -0x7824($gp)
    ctx->pc = 0x18077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936540)));
    // 0x180780: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x180780u;
    {
        const bool branch_taken_0x180780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180780) {
            ctx->pc = 0x180794u;
            return;
        }
    }
    ctx->pc = 0x180788u;
    // 0x180788: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x180788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x18078c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18078Cu;
    {
        const bool branch_taken_0x18078c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18078Cu;
        // 0x180790: 0x24440250  addiu       $a0, $v0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18078c) {
            ctx->pc = 0x18079Cu;
            return;
        }
    }
    ctx->pc = 0x180794u;
}
