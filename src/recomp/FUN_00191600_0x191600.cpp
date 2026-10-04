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

// Function: FUN_00191600
// Address: 0x191600 - 0x191628
void FUN_00191600_0x191600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00191600_0x191600");
#endif

    ctx->pc = 0x191600u;

    // 0x191600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x191600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x191604: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x191604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191608: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x191608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19160c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x19160cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x191610: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x191610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x191614: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x191614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x191618: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x191618u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x19161c: 0x26102cc0  addiu       $s0, $s0, 0x2CC0
    ctx->pc = 0x19161cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11456));
    // 0x191620: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x191620u;
    SET_GPR_U32(ctx, 31, 0x191628u);
    ctx->pc = 0x191624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191620u;
    // 0x191624: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x191620u, 0x191628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191628u;
}
