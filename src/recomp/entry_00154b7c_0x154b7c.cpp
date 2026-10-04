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

// Function: entry_00154b7c
// Address: 0x154b7c - 0x154b9c
void entry_00154b7c_0x154b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154b7c_0x154b7c");
#endif

    switch (ctx->pc) {
        case 0x154b94u: goto label_154b94;
        default: break;
    }

    ctx->pc = 0x154b7cu;

    // 0x154b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154b80: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154B80u;
    {
        const bool branch_taken_0x154b80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x154B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B80u;
        // 0x154b84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b80) {
            ctx->pc = 0x154B9Cu;
            return;
        }
    }
    ctx->pc = 0x154B88u;
    // 0x154b88: 0x8f828630  lw          $v0, -0x79D0($gp)
    ctx->pc = 0x154b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x154b8c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x154B8Cu;
    SET_GPR_U32(ctx, 31, 0x154B94u);
    ctx->pc = 0x154B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B8Cu;
    // 0x154b90: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x154B8Cu, 0x154B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B94u;
label_154b94:
    // 0x154b94: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x154B94u;
    {
        const bool branch_taken_0x154b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b94) {
            ctx->pc = 0x154BC4u;
            return;
        }
    }
    ctx->pc = 0x154B9Cu;
}
