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

// Function: FUN_00123b50
// Address: 0x123b50 - 0x123b98
void FUN_00123b50_0x123b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00123b50_0x123b50");
#endif

    switch (ctx->pc) {
        case 0x123b68u: goto label_123b68;
        case 0x123b80u: goto label_123b80;
        case 0x123b90u: goto label_123b90;
        default: break;
    }

    ctx->pc = 0x123b50u;

    // 0x123b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x123b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x123b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x123b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x123b5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x123b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b60: 0xc0713b0  jal         func_1C4EC0
    ctx->pc = 0x123B60u;
    SET_GPR_U32(ctx, 31, 0x123B68u);
    ctx->pc = 0x123B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B60u;
    // 0x123b64: 0x948402f8  lhu         $a0, 0x2F8($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EC0u, 0x123B60u, 0x123B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B68u;
label_123b68:
    // 0x123b68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x123b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x123b6c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x123b6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x123b70: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x123B70u;
    {
        const bool branch_taken_0x123b70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x123B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B70u;
        // 0x123b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b70) {
            ctx->pc = 0x123B88u;
            goto label_123b88;
        }
    }
    ctx->pc = 0x123B78u;
    // 0x123b78: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x123B78u;
    SET_GPR_U32(ctx, 31, 0x123B80u);
    ctx->pc = 0x123B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B78u;
    // 0x123b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x123B78u, 0x123B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B80u;
label_123b80:
    // 0x123b80: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x123B80u;
    {
        const bool branch_taken_0x123b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B80u;
        // 0x123b84: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b80) {
            ctx->pc = 0x123C18u;
            return;
        }
    }
    ctx->pc = 0x123B88u;
label_123b88:
    // 0x123b88: 0xc071740  jal         func_1C5D00
    ctx->pc = 0x123B88u;
    SET_GPR_U32(ctx, 31, 0x123B90u);
    ctx->pc = 0x1C5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D00u, 0x123B88u, 0x123B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B90u;
label_123b90:
    // 0x123b90: 0xc071728  jal         func_1C5CA0
    ctx->pc = 0x123B90u;
    SET_GPR_U32(ctx, 31, 0x123B98u);
    ctx->pc = 0x123B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B90u;
    // 0x123b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CA0u, 0x123B90u, 0x123B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B98u;
}
