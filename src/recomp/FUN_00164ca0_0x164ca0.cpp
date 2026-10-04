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

// Function: FUN_00164ca0
// Address: 0x164ca0 - 0x164cb8
void FUN_00164ca0_0x164ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00164ca0_0x164ca0");
#endif

    ctx->pc = 0x164ca0u;

    // 0x164ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164ca4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x164ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x164ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164cac: 0x24a53ee0  addiu       $a1, $a1, 0x3EE0
    ctx->pc = 0x164cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16096));
    // 0x164cb0: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x164CB0u;
    SET_GPR_U32(ctx, 31, 0x164CB8u);
    ctx->pc = 0x164CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164CB0u;
    // 0x164cb4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x164CB0u, 0x164CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164CB8u;
}
