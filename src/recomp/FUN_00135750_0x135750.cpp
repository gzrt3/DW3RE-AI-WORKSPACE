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

// Function: FUN_00135750
// Address: 0x135750 - 0x135774
void FUN_00135750_0x135750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00135750_0x135750");
#endif

    ctx->pc = 0x135750u;

    // 0x135750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x135750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x135754: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x135754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x135758: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x135758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13575c: 0x24849f20  addiu       $a0, $a0, -0x60E0
    ctx->pc = 0x13575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942496));
    // 0x135760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x135764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x135764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135768: 0x24060540  addiu       $a2, $zero, 0x540
    ctx->pc = 0x135768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
    // 0x13576c: 0xc08e9ac  jal         func_23A6B0
    ctx->pc = 0x13576Cu;
    SET_GPR_U32(ctx, 31, 0x135774u);
    ctx->pc = 0x135770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13576Cu;
    // 0x135770: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B0u, 0x13576Cu, 0x135774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135774u;
}
