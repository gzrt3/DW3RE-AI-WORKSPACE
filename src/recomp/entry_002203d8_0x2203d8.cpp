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

// Function: entry_002203d8
// Address: 0x2203d8 - 0x2203f4
void entry_002203d8_0x2203d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002203d8_0x2203d8");
#endif

    switch (ctx->pc) {
        case 0x2203ecu: goto label_2203ec;
        default: break;
    }

    ctx->pc = 0x2203d8u;

    // 0x2203d8: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2203D8u;
    {
        const bool branch_taken_0x2203d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2203d8) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x2203E0u;
    // 0x2203e0: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x2203e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x2203e4: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2203E4u;
    SET_GPR_U32(ctx, 31, 0x2203ECu);
    ctx->pc = 0x2203E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203E4u;
    // 0x2203e8: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2203E4u, 0x2203ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203ECu;
label_2203ec:
    // 0x2203ec: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2203ECu;
    {
        const bool branch_taken_0x2203ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2203ec) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x2203F4u;
}
