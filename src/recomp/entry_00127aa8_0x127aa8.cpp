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

// Function: entry_00127aa8
// Address: 0x127aa8 - 0x127ab8
void entry_00127aa8_0x127aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127aa8_0x127aa8");
#endif

    switch (ctx->pc) {
        case 0x127ab0u: goto label_127ab0;
        default: break;
    }

    ctx->pc = 0x127aa8u;

    // 0x127aa8: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x127AA8u;
    SET_GPR_U32(ctx, 31, 0x127AB0u);
    ctx->pc = 0x127AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127AA8u;
    // 0x127aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x127AA8u, 0x127AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127AB0u;
label_127ab0:
    // 0x127ab0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x127AB0u;
    {
        const bool branch_taken_0x127ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AB0u;
        // 0x127ab4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ab0) {
            ctx->pc = 0x127B44u;
            return;
        }
    }
    ctx->pc = 0x127AB8u;
}
