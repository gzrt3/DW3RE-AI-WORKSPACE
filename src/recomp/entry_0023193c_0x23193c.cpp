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

// Function: entry_0023193c
// Address: 0x23193c - 0x23195c
void entry_0023193c_0x23193c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023193c_0x23193c");
#endif

    switch (ctx->pc) {
        case 0x231958u: goto label_231958;
        default: break;
    }

    ctx->pc = 0x23193cu;

    // 0x23193c: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x23193cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x231940: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x231940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x231944: 0x8c42127c  lw          $v0, 0x127C($v0)
    ctx->pc = 0x231944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x231948: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231948u;
    {
        const bool branch_taken_0x231948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231948) {
            ctx->pc = 0x23195Cu;
            return;
        }
    }
    ctx->pc = 0x231950u;
    // 0x231950: 0xc0694da  jal         func_1A5368
    ctx->pc = 0x231950u;
    SET_GPR_U32(ctx, 31, 0x231958u);
    ctx->pc = 0x231954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231950u;
    // 0x231954: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5368u, 0x231950u, 0x231958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231958u;
label_231958:
    // 0x231958: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    ctx->pc = 0x23195cu;
}
