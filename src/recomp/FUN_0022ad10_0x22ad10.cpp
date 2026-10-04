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

// Function: FUN_0022ad10
// Address: 0x22ad10 - 0x22ad38
void FUN_0022ad10_0x22ad10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022ad10_0x22ad10");
#endif

    ctx->pc = 0x22ad10u;

    // 0x22ad10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ad10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22ad14: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x22ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x22ad18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ad18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ad1c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x22ad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x22ad20: 0x2484c160  addiu       $a0, $a0, -0x3EA0
    ctx->pc = 0x22ad20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951264));
    // 0x22ad24: 0x24a5d4c0  addiu       $a1, $a1, -0x2B40
    ctx->pc = 0x22ad24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956224));
    // 0x22ad28: 0x24060b00  addiu       $a2, $zero, 0xB00
    ctx->pc = 0x22ad28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2816));
    // 0x22ad2c: 0xa38092ec  sb          $zero, -0x6D14($gp)
    ctx->pc = 0x22ad2cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939372), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ad30: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x22AD30u;
    SET_GPR_U32(ctx, 31, 0x22AD38u);
    ctx->pc = 0x22AD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AD30u;
    // 0x22ad34: 0xaf8092f0  sw          $zero, -0x6D10($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939376), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x22AD30u, 0x22AD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD38u;
}
