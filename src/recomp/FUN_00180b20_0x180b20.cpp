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

// Function: FUN_00180b20
// Address: 0x180b20 - 0x180bf8
void FUN_00180b20_0x180b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00180b20_0x180b20");
#endif

    switch (ctx->pc) {
        case 0x180b54u: goto label_180b54;
        case 0x180bd4u: goto label_180bd4;
        default: break;
    }

    ctx->pc = 0x180b20u;

    // 0x180b20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x180b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180b24: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x180b24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x180b28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180b28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180b2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x180b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x180b30: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x180b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x180b34: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x180b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x180b38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180b3c: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x180B3Cu;
    {
        const bool branch_taken_0x180b3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B3Cu;
        // 0x180b40: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b3c) {
            ctx->pc = 0x180BF4u;
            goto label_180bf4;
        }
    }
    ctx->pc = 0x180B44u;
    // 0x180b44: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x180b44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x180b48: 0x1420001f  bnez        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x180B48u;
    {
        const bool branch_taken_0x180b48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x180B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B48u;
        // 0x180b4c: 0x24a8fff8  addiu       $t0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b48) {
            ctx->pc = 0x180BC8u;
            goto label_180bc8;
        }
    }
    ctx->pc = 0x180B50u;
    // 0x180b50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x180b50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180b54:
    // 0x180b54: 0x895021  addu        $t2, $a0, $t1
    ctx->pc = 0x180b54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x180b58: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x180b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x180b5c: 0x8d460004  lw          $a2, 0x4($t2)
    ctx->pc = 0x180b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x180b60: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x180b60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x180b64: 0x8d580008  lw          $t8, 0x8($t2)
    ctx->pc = 0x180b64u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x180b68: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x180b68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x180b6c: 0x8d4f000c  lw          $t7, 0xC($t2)
    ctx->pc = 0x180b6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x180b70: 0x8d4e0010  lw          $t6, 0x10($t2)
    ctx->pc = 0x180b70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x180b74: 0x8d4d0014  lw          $t5, 0x14($t2)
    ctx->pc = 0x180b74u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x180b78: 0x8d4c0018  lw          $t4, 0x18($t2)
    ctx->pc = 0x180b78u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x180b7c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x180b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x180b80: 0x8d4b001c  lw          $t3, 0x1C($t2)
    ctx->pc = 0x180b80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x180b84: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x180b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x180b88: 0x183100  sll         $a2, $t8, 4
    ctx->pc = 0x180b88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x180b8c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x180b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x180b90: 0xf3100  sll         $a2, $t7, 4
    ctx->pc = 0x180b90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x180b94: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x180b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x180b98: 0xe3100  sll         $a2, $t6, 4
    ctx->pc = 0x180b98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x180b9c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x180b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x180ba0: 0xd3100  sll         $a2, $t5, 4
    ctx->pc = 0x180ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x180ba4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x180ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x180ba8: 0xc3100  sll         $a2, $t4, 4
    ctx->pc = 0x180ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x180bac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x180bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x180bb0: 0xb3100  sll         $a2, $t3, 4
    ctx->pc = 0x180bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x180bb4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x180bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x180bb8: 0x8d460020  lw          $a2, 0x20($t2)
    ctx->pc = 0x180bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x180bbc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x180bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x180bc0: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x180BC0u;
    {
        const bool branch_taken_0x180bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x180BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BC0u;
        // 0x180bc4: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180bc0) {
            ctx->pc = 0x180B54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180b54;
        }
    }
    ctx->pc = 0x180BC8u;
label_180bc8:
    // 0x180bc8: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x180bc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x180bcc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x180BCCu;
    {
        const bool branch_taken_0x180bcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x180BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BCCu;
        // 0x180bd0: 0x74080  sll         $t0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180bcc) {
            ctx->pc = 0x180BF4u;
            goto label_180bf4;
        }
    }
    ctx->pc = 0x180BD4u;
label_180bd4:
    // 0x180bd4: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x180bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x180bd8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x180bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x180bdc: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x180bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x180be0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x180be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x180be4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x180be4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x180be8: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x180be8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x180bec: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x180BECu;
    {
        const bool branch_taken_0x180bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x180BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BECu;
        // 0x180bf0: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180bec) {
            ctx->pc = 0x180BD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180bd4;
        }
    }
    ctx->pc = 0x180BF4u;
label_180bf4:
    // 0x180bf4: 0x0  nop
    ctx->pc = 0x180bf4u;
    // NOP
    ctx->pc = 0x180bf8u;
}
