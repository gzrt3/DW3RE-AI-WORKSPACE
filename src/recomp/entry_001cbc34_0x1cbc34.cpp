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

// Function: entry_001cbc34
// Address: 0x1cbc34 - 0x1cbc70
void entry_001cbc34_0x1cbc34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbc34_0x1cbc34");
#endif

    switch (ctx->pc) {
        case 0x1cbc68u: goto label_1cbc68;
        default: break;
    }

    ctx->pc = 0x1cbc34u;

    // 0x1cbc34: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CBC34u;
    {
        const bool branch_taken_0x1cbc34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CBC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC34u;
        // 0x1cbc38: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc34) {
            ctx->pc = 0x1CBC70u;
            return;
        }
    }
    ctx->pc = 0x1CBC3Cu;
    // 0x1cbc3c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cbc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1cbc40: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cbc40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cbc44: 0x24428ee0  addiu       $v0, $v0, -0x7120
    ctx->pc = 0x1cbc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938336));
    // 0x1cbc48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbc4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cbc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbc50: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1cbc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cbc54: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cbc58: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1cbc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
    // 0x1cbc5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbc60: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1CBC60u;
    SET_GPR_U32(ctx, 31, 0x1CBC68u);
    ctx->pc = 0x1CBC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBC60u;
    // 0x1cbc64: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1CBC60u, 0x1CBC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBC68u;
label_1cbc68:
    // 0x1cbc68: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1CBC68u;
    {
        const bool branch_taken_0x1cbc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbc68) {
            ctx->pc = 0x1CBE1Cu;
            return;
        }
    }
    ctx->pc = 0x1CBC70u;
}
