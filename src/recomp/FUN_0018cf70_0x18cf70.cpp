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

// Function: FUN_0018cf70
// Address: 0x18cf70 - 0x18cfb0
void FUN_0018cf70_0x18cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018cf70_0x18cf70");
#endif

    ctx->pc = 0x18cf70u;

    // 0x18cf70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18cf74: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18cf78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18cf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18cf7c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18cf80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18cf84: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x18cf88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18cf8c: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x18cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x18cf90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18cf94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18cf94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf98: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x18cf98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cf9c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18cf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18cfa0: 0x960200e4  lhu         $v0, 0xE4($s0)
    ctx->pc = 0x18cfa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x18cfa4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18cfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x18cfa8: 0xc066e26  jal         func_19B898
    ctx->pc = 0x18CFA8u;
    SET_GPR_U32(ctx, 31, 0x18CFB0u);
    ctx->pc = 0x18CFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CFA8u;
    // 0x18cfac: 0xa60200e4  sh          $v0, 0xE4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 228), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x18CFA8u, 0x18CFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CFB0u;
}
