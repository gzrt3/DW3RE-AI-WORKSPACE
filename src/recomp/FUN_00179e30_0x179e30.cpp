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

// Function: FUN_00179e30
// Address: 0x179e30 - 0x179e80
void FUN_00179e30_0x179e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00179e30_0x179e30");
#endif

    ctx->pc = 0x179e30u;

    // 0x179e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x179e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x179e34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x179e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x179e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x179e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x179e3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x179e40: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x179e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x179e44: 0x8f838450  lw          $v1, -0x7BB0($gp)
    ctx->pc = 0x179e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x179e48: 0x8f828444  lw          $v0, -0x7BBC($gp)
    ctx->pc = 0x179e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935620)));
    // 0x179e4c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x179e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x179e50: 0x24710008  addiu       $s1, $v1, 0x8
    ctx->pc = 0x179e50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x179e54: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x179e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x179e58: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x179e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x179e5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x179e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x179e60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x179e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x179e64: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x179e64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x179e68: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x179e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x179e6c: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x179e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x179e70: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x179e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179e74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x179e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e78: 0xc066d0a  jal         func_19B428
    ctx->pc = 0x179E78u;
    SET_GPR_U32(ctx, 31, 0x179E80u);
    ctx->pc = 0x179E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E78u;
    // 0x179e7c: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B428u, 0x179E78u, 0x179E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E80u;
}
