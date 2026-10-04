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

// Function: entry_00124fd8
// Address: 0x124fd8 - 0x124fe8
void entry_00124fd8_0x124fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124fd8_0x124fd8");
#endif

    switch (ctx->pc) {
        case 0x124fe0u: goto label_124fe0;
        default: break;
    }

    ctx->pc = 0x124fd8u;

    // 0x124fd8: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x124FD8u;
    SET_GPR_U32(ctx, 31, 0x124FE0u);
    ctx->pc = 0x124FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124FD8u;
    // 0x124fdc: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x124FD8u, 0x124FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124FE0u;
label_124fe0:
    // 0x124fe0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x124FE0u;
    {
        const bool branch_taken_0x124fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FE0u;
        // 0x124fe4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124fe0) {
            ctx->pc = 0x125000u;
            return;
        }
    }
    ctx->pc = 0x124FE8u;
}
