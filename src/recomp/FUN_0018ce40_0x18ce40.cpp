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

// Function: FUN_0018ce40
// Address: 0x18ce40 - 0x18ce60
void FUN_0018ce40_0x18ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018ce40_0x18ce40");
#endif

    ctx->pc = 0x18ce40u;

    // 0x18ce40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18ce44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18ce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18ce48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ce4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ce4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ce50: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18ce50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18ce54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce58: 0xc066e26  jal         func_19B898
    ctx->pc = 0x18CE58u;
    SET_GPR_U32(ctx, 31, 0x18CE60u);
    ctx->pc = 0x18CE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE58u;
    // 0x18ce5c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x18CE58u, 0x18CE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE60u;
}
