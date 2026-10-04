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

// Function: entry_0021c340
// Address: 0x21c340 - 0x21c360
void entry_0021c340_0x21c340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c340_0x21c340");
#endif

    switch (ctx->pc) {
        case 0x21c358u: goto label_21c358;
        default: break;
    }

    ctx->pc = 0x21c340u;

    // 0x21c340: 0x8f8392c8  lw          $v1, -0x6D38($gp)
    ctx->pc = 0x21c340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939336)));
    // 0x21c344: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x21c344u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x21c348: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C348u;
    {
        const bool branch_taken_0x21c348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c348) {
            ctx->pc = 0x21C360u;
            return;
        }
    }
    ctx->pc = 0x21C350u;
    // 0x21c350: 0xc044a04  jal         func_112810
    ctx->pc = 0x21C350u;
    SET_GPR_U32(ctx, 31, 0x21C358u);
    ctx->pc = 0x112810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112810u, 0x21C350u, 0x21C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C358u;
label_21c358:
    // 0x21c358: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21C358u;
    {
        const bool branch_taken_0x21c358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C358u;
        // 0x21c35c: 0x8f848590  lw          $a0, -0x7A70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c358) {
            ctx->pc = 0x21C394u;
            return;
        }
    }
    ctx->pc = 0x21C360u;
}
