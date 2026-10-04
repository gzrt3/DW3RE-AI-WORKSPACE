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

// Function: entry_0023d978
// Address: 0x23d978 - 0x23d994
void entry_0023d978_0x23d978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d978_0x23d978");
#endif

    switch (ctx->pc) {
        case 0x23d98cu: goto label_23d98c;
        default: break;
    }

    ctx->pc = 0x23d978u;

    // 0x23d978: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x23d978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x23d97c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D97Cu;
    {
        const bool branch_taken_0x23d97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D97Cu;
        // 0x23d980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d97c) {
            ctx->pc = 0x23D994u;
            return;
        }
    }
    ctx->pc = 0x23D984u;
    // 0x23d984: 0xc08e29c  jal         func_238A70
    ctx->pc = 0x23D984u;
    SET_GPR_U32(ctx, 31, 0x23D98Cu);
    ctx->pc = 0x238A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238A70u, 0x23D984u, 0x23D98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D98Cu;
label_23d98c:
    // 0x23d98c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23d98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x23d990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23d990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23d994u;
}
