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

// Function: FUN_00154b60
// Address: 0x154b60 - 0x154bc4
void FUN_00154b60_0x154b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00154b60_0x154b60");
#endif

    switch (ctx->pc) {
        case 0x154b74u: goto label_154b74;
        case 0x154b94u: goto label_154b94;
        case 0x154bb0u: goto label_154bb0;
        default: break;
    }

    ctx->pc = 0x154b60u;

    // 0x154b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x154b64: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154B64u;
    {
        const bool branch_taken_0x154b64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x154B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B64u;
        // 0x154b68: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b64) {
            ctx->pc = 0x154B7Cu;
            goto label_154b7c;
        }
    }
    ctx->pc = 0x154B6Cu;
    // 0x154b6c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x154B6Cu;
    SET_GPR_U32(ctx, 31, 0x154B74u);
    ctx->pc = 0x154B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B6Cu;
    // 0x154b70: 0x8f858630  lw          $a1, -0x79D0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x154B6Cu, 0x154B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B74u;
label_154b74:
    // 0x154b74: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x154B74u;
    {
        const bool branch_taken_0x154b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B74u;
        // 0x154b78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b74) {
            ctx->pc = 0x154BC8u;
            return;
        }
    }
    ctx->pc = 0x154B7Cu;
label_154b7c:
    // 0x154b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154b80: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154B80u;
    {
        const bool branch_taken_0x154b80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x154B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B80u;
        // 0x154b84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b80) {
            ctx->pc = 0x154B9Cu;
            goto label_154b9c;
        }
    }
    ctx->pc = 0x154B88u;
    // 0x154b88: 0x8f828630  lw          $v0, -0x79D0($gp)
    ctx->pc = 0x154b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x154b8c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x154B8Cu;
    SET_GPR_U32(ctx, 31, 0x154B94u);
    ctx->pc = 0x154B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B8Cu;
    // 0x154b90: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x154B8Cu, 0x154B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B94u;
label_154b94:
    // 0x154b94: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x154B94u;
    {
        const bool branch_taken_0x154b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b94) {
            ctx->pc = 0x154BC4u;
            return;
        }
    }
    ctx->pc = 0x154B9Cu;
label_154b9c:
    // 0x154b9c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154B9Cu;
    {
        const bool branch_taken_0x154b9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x154b9c) {
            ctx->pc = 0x154BB8u;
            goto label_154bb8;
        }
    }
    ctx->pc = 0x154BA4u;
    // 0x154ba4: 0x8f828630  lw          $v0, -0x79D0($gp)
    ctx->pc = 0x154ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x154ba8: 0xc066e26  jal         func_19B898
    ctx->pc = 0x154BA8u;
    SET_GPR_U32(ctx, 31, 0x154BB0u);
    ctx->pc = 0x154BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BA8u;
    // 0x154bac: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x154BA8u, 0x154BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BB0u;
label_154bb0:
    // 0x154bb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x154BB0u;
    {
        const bool branch_taken_0x154bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154bb0) {
            ctx->pc = 0x154BC4u;
            return;
        }
    }
    ctx->pc = 0x154BB8u;
label_154bb8:
    // 0x154bb8: 0x8f828630  lw          $v0, -0x79D0($gp)
    ctx->pc = 0x154bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x154bbc: 0xc066e26  jal         func_19B898
    ctx->pc = 0x154BBCu;
    SET_GPR_U32(ctx, 31, 0x154BC4u);
    ctx->pc = 0x154BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BBCu;
    // 0x154bc0: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x154BBCu, 0x154BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BC4u;
}
