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

// Function: entry_00146168
// Address: 0x146168 - 0x146180
void entry_00146168_0x146168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146168_0x146168");
#endif

    switch (ctx->pc) {
        case 0x146170u: goto label_146170;
        case 0x146178u: goto label_146178;
        default: break;
    }

    ctx->pc = 0x146168u;

    // 0x146168: 0xc059eb8  jal         func_167AE0
    ctx->pc = 0x146168u;
    SET_GPR_U32(ctx, 31, 0x146170u);
    ctx->pc = 0x14616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146168u;
    // 0x14616c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x146168u, 0x146170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146170u;
label_146170:
    // 0x146170: 0xc040208  jal         func_100820
    ctx->pc = 0x146170u;
    SET_GPR_U32(ctx, 31, 0x146178u);
    ctx->pc = 0x100820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100820u, 0x146170u, 0x146178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146178u;
label_146178:
    // 0x146178: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x146178u;
    {
        const bool branch_taken_0x146178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146178u;
        // 0x14617c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146178) {
            ctx->pc = 0x1461E4u;
            return;
        }
    }
    ctx->pc = 0x146180u;
}
