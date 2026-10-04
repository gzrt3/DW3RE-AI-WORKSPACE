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

// Function: entry_00227b40
// Address: 0x227b40 - 0x227bc0
void entry_00227b40_0x227b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227b40_0x227b40");
#endif

    switch (ctx->pc) {
        case 0x227b88u: goto label_227b88;
        default: break;
    }

    ctx->pc = 0x227b40u;

    // 0x227b40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x227b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227b44: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x227b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x227b48: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x227b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x227b4c: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x227b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x227b50: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x227b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x227b54: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x227b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x227b58: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x227b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x227b5c: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x227b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x227b60: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x227b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x227b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227b68: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x227b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x227b6c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x227b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x227b70: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x227b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x227b74: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x227b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x227b78: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x227b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x227b7c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x227b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x227b80: 0xc05da58  jal         func_176960
    ctx->pc = 0x227B80u;
    SET_GPR_U32(ctx, 31, 0x227B88u);
    ctx->pc = 0x227B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B80u;
    // 0x227b84: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176960u, 0x227B80u, 0x227B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B88u;
label_227b88:
    // 0x227b88: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x227b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x227b8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x227b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x227b90: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x227B90u;
    {
        const bool branch_taken_0x227b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B90u;
        // 0x227b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b90) {
            ctx->pc = 0x227BC4u;
            return;
        }
    }
    ctx->pc = 0x227B98u;
    // 0x227b98: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x227b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x227b9c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x227B9Cu;
    {
        const bool branch_taken_0x227b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B9Cu;
        // 0x227ba0: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b9c) {
            ctx->pc = 0x227BC0u;
            return;
        }
    }
    ctx->pc = 0x227BA4u;
    // 0x227ba4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227BA4u;
    {
        const bool branch_taken_0x227ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x227ba4) {
            ctx->pc = 0x227BC0u;
            return;
        }
    }
    ctx->pc = 0x227BACu;
    // 0x227bac: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x227bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x227bb0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227BB0u;
    {
        const bool branch_taken_0x227bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BB0u;
        // 0x227bb4: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227bb0) {
            ctx->pc = 0x227BC0u;
            return;
        }
    }
    ctx->pc = 0x227BB8u;
    // 0x227bb8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227BB8u;
    {
        const bool branch_taken_0x227bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227bb8) {
            ctx->pc = 0x227BCCu;
            return;
        }
    }
    ctx->pc = 0x227BC0u;
}
