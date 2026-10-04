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

// Function: FUN_0011e2d0
// Address: 0x11e2d0 - 0x11e30c
void FUN_0011e2d0_0x11e2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011e2d0_0x11e2d0");
#endif

    switch (ctx->pc) {
        case 0x11e2f8u: goto label_11e2f8;
        default: break;
    }

    ctx->pc = 0x11e2d0u;

    // 0x11e2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11e2d4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x11e2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x11e2d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11e2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11e2dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11e2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11e2e0: 0x90224af3  lbu         $v0, 0x4AF3($at)
    ctx->pc = 0x11e2e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF3u));
    // 0x11e2e4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x11e2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x11e2e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E2E8u;
    {
        const bool branch_taken_0x11e2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2E8u;
        // 0x11e2ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2e8) {
            ctx->pc = 0x11E2F8u;
            goto label_11e2f8;
        }
    }
    ctx->pc = 0x11E2F0u;
    // 0x11e2f0: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x11E2F0u;
    SET_GPR_U32(ctx, 31, 0x11E2F8u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x11E2F0u, 0x11E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2F8u;
label_11e2f8:
    // 0x11e2f8: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x11e2f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x11e2fc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x11e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11e300: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11e300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11e304: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x11e304u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
    // 0x11e308: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x11e308u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    ctx->pc = 0x11e30cu;
}
