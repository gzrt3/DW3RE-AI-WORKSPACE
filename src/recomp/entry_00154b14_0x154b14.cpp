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

// Function: entry_00154b14
// Address: 0x154b14 - 0x154b3c
void entry_00154b14_0x154b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154b14_0x154b14");
#endif

    switch (ctx->pc) {
        case 0x154b34u: goto label_154b34;
        default: break;
    }

    ctx->pc = 0x154b14u;

    // 0x154b14: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x154B14u;
    {
        const bool branch_taken_0x154b14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x154b14) {
            ctx->pc = 0x154B3Cu;
            return;
        }
    }
    ctx->pc = 0x154B1Cu;
    // 0x154b1c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x154b20: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x154b24: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
    // 0x154b28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154b2c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x154B2Cu;
    SET_GPR_U32(ctx, 31, 0x154B34u);
    ctx->pc = 0x154B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B2Cu;
    // 0x154b30: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x154B2Cu, 0x154B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B34u;
label_154b34:
    // 0x154b34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x154B34u;
    {
        const bool branch_taken_0x154b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b34) {
            ctx->pc = 0x154B54u;
            return;
        }
    }
    ctx->pc = 0x154B3Cu;
}
