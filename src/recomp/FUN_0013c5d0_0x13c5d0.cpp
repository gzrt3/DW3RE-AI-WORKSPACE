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

// Function: FUN_0013c5d0
// Address: 0x13c5d0 - 0x13c604
void FUN_0013c5d0_0x13c5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013c5d0_0x13c5d0");
#endif

    switch (ctx->pc) {
        case 0x13c5f0u: goto label_13c5f0;
        default: break;
    }

    ctx->pc = 0x13c5d0u;

    // 0x13c5d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c5d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c5d8: 0x948302e6  lhu         $v1, 0x2E6($a0)
    ctx->pc = 0x13c5d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
    // 0x13c5dc: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x13c5dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13c5e0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C5E0u;
    {
        const bool branch_taken_0x13c5e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c5e0) {
            ctx->pc = 0x13C5F8u;
            goto label_13c5f8;
        }
    }
    ctx->pc = 0x13C5E8u;
    // 0x13c5e8: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x13C5E8u;
    SET_GPR_U32(ctx, 31, 0x13C5F0u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x13C5E8u, 0x13C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C5F0u;
label_13c5f0:
    // 0x13c5f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13C5F0u;
    {
        const bool branch_taken_0x13c5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5F0u;
        // 0x13c5f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5f0) {
            ctx->pc = 0x13C604u;
            return;
        }
    }
    ctx->pc = 0x13C5F8u;
label_13c5f8:
    // 0x13c5f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13c5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13c5fc: 0xa48302e6  sh          $v1, 0x2E6($a0)
    ctx->pc = 0x13c5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 742), (uint16_t)GPR_U32(ctx, 3));
    // 0x13c600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13c604u;
}
