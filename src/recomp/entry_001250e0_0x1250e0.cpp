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

// Function: entry_001250e0
// Address: 0x1250e0 - 0x1250f0
void entry_001250e0_0x1250e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001250e0_0x1250e0");
#endif

    switch (ctx->pc) {
        case 0x1250e8u: goto label_1250e8;
        default: break;
    }

    ctx->pc = 0x1250e0u;

    // 0x1250e0: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x1250E0u;
    SET_GPR_U32(ctx, 31, 0x1250E8u);
    ctx->pc = 0x1250E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1250E0u;
    // 0x1250e4: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1250E0u, 0x1250E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1250E8u;
label_1250e8:
    // 0x1250e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1250E8u;
    {
        const bool branch_taken_0x1250e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1250ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250E8u;
        // 0x1250ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250e8) {
            ctx->pc = 0x12511Cu;
            return;
        }
    }
    ctx->pc = 0x1250F0u;
}
