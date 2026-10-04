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

// Function: FUN_00191560
// Address: 0x191560 - 0x191594
void FUN_00191560_0x191560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00191560_0x191560");
#endif

    ctx->pc = 0x191560u;

    // 0x191560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x191560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x191564: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x191564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x191568: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x191568u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19156c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19156cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x191570: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x191570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x191574: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x191574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x191578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x191578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19157c: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x19157cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x191580: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x191580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x191584: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x191584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x191588: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x191588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19158c: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x19158Cu;
    SET_GPR_U32(ctx, 31, 0x191594u);
    ctx->pc = 0x191590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19158Cu;
    // 0x191590: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x19158Cu, 0x191594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191594u;
}
