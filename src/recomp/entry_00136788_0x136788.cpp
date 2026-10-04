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

// Function: entry_00136788
// Address: 0x136788 - 0x1367b4
void entry_00136788_0x136788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136788_0x136788");
#endif

    switch (ctx->pc) {
        case 0x136798u: goto label_136798;
        default: break;
    }

    ctx->pc = 0x136788u;

    // 0x136788: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13678c: 0x8c30a3cc  lw          $s0, -0x5C34($at)
    ctx->pc = 0x13678cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x30A3CCu));
    // 0x136790: 0xc0590dc  jal         func_164370
    ctx->pc = 0x136790u;
    SET_GPR_U32(ctx, 31, 0x136798u);
    ctx->pc = 0x136794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136790u;
    // 0x136794: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x136790u, 0x136798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136798u;
label_136798:
    // 0x136798: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x136798u;
    {
        const bool branch_taken_0x136798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136798) {
            ctx->pc = 0x1367B4u;
            return;
        }
    }
    ctx->pc = 0x1367A0u;
    // 0x1367a0: 0xac50005c  sw          $s0, 0x5C($v0)
    ctx->pc = 0x1367a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 16));
    // 0x1367a4: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x1367a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x1367a8: 0x24637dd0  addiu       $v1, $v1, 0x7DD0
    ctx->pc = 0x1367a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32208));
    // 0x1367ac: 0xa4400012  sh          $zero, 0x12($v0)
    ctx->pc = 0x1367acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x1367b0: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1367b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    ctx->pc = 0x1367b4u;
}
