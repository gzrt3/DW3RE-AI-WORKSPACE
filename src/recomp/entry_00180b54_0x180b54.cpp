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

// Function: entry_00180b54
// Address: 0x180b54 - 0x180bc8
void entry_00180b54_0x180b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180b54_0x180b54");
#endif

    ctx->pc = 0x180b54u;

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
}
