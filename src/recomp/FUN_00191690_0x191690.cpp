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

// Function: FUN_00191690
// Address: 0x191690 - 0x1916c4
void FUN_00191690_0x191690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00191690_0x191690");
#endif

    ctx->pc = 0x191690u;

    // 0x191690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x191690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x191694: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x191694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x191698: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x191698u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19169c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19169cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1916a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1916a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1916a4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1916a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1916a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1916a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1916ac: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x1916acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1916b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1916b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1916b4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1916b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1916b8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1916b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1916bc: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x1916BCu;
    SET_GPR_U32(ctx, 31, 0x1916C4u);
    ctx->pc = 0x1916C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1916BCu;
    // 0x1916c0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x1916BCu, 0x1916C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1916C4u;
}
