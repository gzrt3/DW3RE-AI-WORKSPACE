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

// Function: FUN_00227a10
// Address: 0x227a10 - 0x227ad0
void FUN_00227a10_0x227a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00227a10_0x227a10");
#endif

    switch (ctx->pc) {
        case 0x227a70u: goto label_227a70;
        case 0x227a84u: goto label_227a84;
        default: break;
    }

    ctx->pc = 0x227a10u;

    // 0x227a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227a14: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x227a14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x227a18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x227a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x227a1c: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x227a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
    // 0x227a20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x227a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x227a24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x227a28: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x227a28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x227a2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a30: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x227a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x227a34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x227a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x227a38: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x227a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x227a3c: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x227a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x227a40: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x227a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x227a44: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x227a44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x227a48: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x227a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x227a4c: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x227a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x227a50: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x227a50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x227a54: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x227a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x227a58: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x227a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x227a5c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x227a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x227a60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227A60u;
    {
        const bool branch_taken_0x227a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A60u;
        // 0x227a64: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a60) {
            ctx->pc = 0x227A78u;
            goto label_227a78;
        }
    }
    ctx->pc = 0x227A68u;
    // 0x227a68: 0xc044894  jal         func_112250
    ctx->pc = 0x227A68u;
    SET_GPR_U32(ctx, 31, 0x227A70u);
    ctx->pc = 0x227A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227A68u;
    // 0x227a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x227A68u, 0x227A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A70u;
label_227a70:
    // 0x227a70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227A70u;
    {
        const bool branch_taken_0x227a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227a70) {
            ctx->pc = 0x227A84u;
            goto label_227a84;
        }
    }
    ctx->pc = 0x227A78u;
label_227a78:
    // 0x227a78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x227a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227a7c: 0xc05da58  jal         func_176960
    ctx->pc = 0x227A7Cu;
    SET_GPR_U32(ctx, 31, 0x227A84u);
    ctx->pc = 0x227A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227A7Cu;
    // 0x227a80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176960u, 0x227A7Cu, 0x227A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A84u;
label_227a84:
    // 0x227a84: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x227a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x227a88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x227a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x227a8c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x227A8Cu;
    {
        const bool branch_taken_0x227a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A8Cu;
        // 0x227a90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a8c) {
            ctx->pc = 0x227AC0u;
            goto label_227ac0;
        }
    }
    ctx->pc = 0x227A94u;
    // 0x227a94: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x227a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x227a98: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x227A98u;
    {
        const bool branch_taken_0x227a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A98u;
        // 0x227a9c: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a98) {
            ctx->pc = 0x227ABCu;
            goto label_227abc;
        }
    }
    ctx->pc = 0x227AA0u;
    // 0x227aa0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227AA0u;
    {
        const bool branch_taken_0x227aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x227aa0) {
            ctx->pc = 0x227ABCu;
            goto label_227abc;
        }
    }
    ctx->pc = 0x227AA8u;
    // 0x227aa8: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x227aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x227aac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227AACu;
    {
        const bool branch_taken_0x227aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AACu;
        // 0x227ab0: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227aac) {
            ctx->pc = 0x227ABCu;
            goto label_227abc;
        }
    }
    ctx->pc = 0x227AB4u;
    // 0x227ab4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227AB4u;
    {
        const bool branch_taken_0x227ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227ab4) {
            ctx->pc = 0x227AC8u;
            goto label_227ac8;
        }
    }
    ctx->pc = 0x227ABCu;
label_227abc:
    // 0x227abc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x227abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227ac0:
    // 0x227ac0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x227AC0u;
    {
        const bool branch_taken_0x227ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AC0u;
        // 0x227ac4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ac0) {
            ctx->pc = 0x227AD0u;
            return;
        }
    }
    ctx->pc = 0x227AC8u;
label_227ac8:
    // 0x227ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227acc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x227accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x227ad0u;
}
