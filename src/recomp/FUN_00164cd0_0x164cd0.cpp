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

// Function: FUN_00164cd0
// Address: 0x164cd0 - 0x164cf8
void FUN_00164cd0_0x164cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00164cd0_0x164cd0");
#endif

    ctx->pc = 0x164cd0u;

    // 0x164cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x164cd4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x164cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x164cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x164cdc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x164cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x164ce0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x164ce4: 0x24843ee0  addiu       $a0, $a0, 0x3EE0
    ctx->pc = 0x164ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16096));
    // 0x164ce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x164cec: 0x8f9086c0  lw          $s0, -0x7940($gp)
    ctx->pc = 0x164cecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936256)));
    // 0x164cf0: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x164CF0u;
    SET_GPR_U32(ctx, 31, 0x164CF8u);
    ctx->pc = 0x164CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164CF0u;
    // 0x164cf4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x164CF0u, 0x164CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164CF8u;
}
