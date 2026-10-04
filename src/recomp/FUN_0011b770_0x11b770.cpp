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

// Function: FUN_0011b770
// Address: 0x11b770 - 0x11b790
void FUN_0011b770_0x11b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011b770_0x11b770");
#endif

    ctx->pc = 0x11b770u;

    // 0x11b770: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11b770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11b774: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11b774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11b778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11b778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11b77c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11b77cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b780: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11b780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11b784: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11b784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11b788: 0xc066e26  jal         func_19B898
    ctx->pc = 0x11B788u;
    SET_GPR_U32(ctx, 31, 0x11B790u);
    ctx->pc = 0x11B78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B788u;
    // 0x11b78c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x11B788u, 0x11B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B790u;
}
