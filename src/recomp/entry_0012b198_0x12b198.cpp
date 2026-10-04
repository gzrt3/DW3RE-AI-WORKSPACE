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

// Function: entry_0012b198
// Address: 0x12b198 - 0x12b1a8
void entry_0012b198_0x12b198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b198_0x12b198");
#endif

    switch (ctx->pc) {
        case 0x12b1a0u: goto label_12b1a0;
        default: break;
    }

    ctx->pc = 0x12b198u;

    // 0x12b198: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12B198u;
    SET_GPR_U32(ctx, 31, 0x12B1A0u);
    ctx->pc = 0x12B19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B198u;
    // 0x12b19c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12B198u, 0x12B1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B1A0u;
label_12b1a0:
    // 0x12b1a0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x12B1A0u;
    {
        const bool branch_taken_0x12b1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1A0u;
        // 0x12b1a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1a0) {
            ctx->pc = 0x12B2CCu;
            return;
        }
    }
    ctx->pc = 0x12B1A8u;
}
