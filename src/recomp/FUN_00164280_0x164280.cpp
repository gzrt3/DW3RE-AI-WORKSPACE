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

// Function: FUN_00164280
// Address: 0x164280 - 0x164298
void FUN_00164280_0x164280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00164280_0x164280");
#endif

    ctx->pc = 0x164280u;

    // 0x164280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16428c: 0x8f84869c  lw          $a0, -0x7964($gp)
    ctx->pc = 0x16428cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936220)));
    // 0x164290: 0xc08e9ac  jal         func_23A6B0
    ctx->pc = 0x164290u;
    SET_GPR_U32(ctx, 31, 0x164298u);
    ctx->pc = 0x164294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164290u;
    // 0x164294: 0x24066720  addiu       $a2, $zero, 0x6720 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B0u, 0x164290u, 0x164298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164298u;
}
