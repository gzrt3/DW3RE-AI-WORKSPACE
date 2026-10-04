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

// Function: entry_001250f0
// Address: 0x1250f0 - 0x125110
void entry_001250f0_0x1250f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001250f0_0x1250f0");
#endif

    switch (ctx->pc) {
        case 0x125108u: goto label_125108;
        default: break;
    }

    ctx->pc = 0x1250f0u;

    // 0x1250f0: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x1250f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x1250f4: 0x2861000d  slti        $at, $v1, 0xD
    ctx->pc = 0x1250f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1250f8: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1250F8u;
    {
        const bool branch_taken_0x1250f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1250FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250F8u;
        // 0x1250fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250f8) {
            ctx->pc = 0x125110u;
            return;
        }
    }
    ctx->pc = 0x125100u;
    // 0x125100: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x125100u;
    SET_GPR_U32(ctx, 31, 0x125108u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x125100u, 0x125108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125108u;
label_125108:
    // 0x125108: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x125108u;
    {
        const bool branch_taken_0x125108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125108) {
            ctx->pc = 0x125118u;
            return;
        }
    }
    ctx->pc = 0x125110u;
}
