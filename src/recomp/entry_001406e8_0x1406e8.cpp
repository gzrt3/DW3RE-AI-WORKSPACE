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

// Function: entry_001406e8
// Address: 0x1406e8 - 0x140704
void entry_001406e8_0x1406e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001406e8_0x1406e8");
#endif

    ctx->pc = 0x1406e8u;

    // 0x1406e8: 0x8602021c  lh          $v0, 0x21C($s0)
    ctx->pc = 0x1406e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x1406ec: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1406ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1406f0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1406F0u;
    {
        const bool branch_taken_0x1406f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1406f0) {
            ctx->pc = 0x140704u;
            return;
        }
    }
    ctx->pc = 0x1406F8u;
    // 0x1406f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1406f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406fc: 0xc050fa4  jal         func_143E90
    ctx->pc = 0x1406FCu;
    SET_GPR_U32(ctx, 31, 0x140704u);
    ctx->pc = 0x140700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1406FCu;
    // 0x140700: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143E90u, 0x1406FCu, 0x140704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140704u;
}
