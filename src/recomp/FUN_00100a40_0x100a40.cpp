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

// Function: FUN_00100a40
// Address: 0x100a40 - 0x100ac0
void FUN_00100a40_0x100a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00100a40_0x100a40");
#endif

    switch (ctx->pc) {
        case 0x100a48u: goto label_100a48;
        case 0x100a6cu: goto label_100a6c;
        default: break;
    }

    ctx->pc = 0x100a40u;

    // 0x100a40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x100a40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a44: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x100a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_100a48:
    // 0x100a48: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x100a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x100a4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a50: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x100a50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x100a54: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x100a54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x100a58: 0x240b0028  addiu       $t3, $zero, 0x28
    ctx->pc = 0x100a58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x100a5c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x100a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x100a60: 0xa66021  addu        $t4, $a1, $a2
    ctx->pc = 0x100a60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x100a64: 0xdd860000  ld          $a2, 0x0($t4)
    ctx->pc = 0x100a64u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x100a68: 0xfc860040  sd          $a2, 0x40($a0)
    ctx->pc = 0x100a68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 6));
label_100a6c:
    // 0x100a6c: 0x0  nop
    ctx->pc = 0x100a6cu;
    // NOP
    // 0x100a70: 0x18a3021  addu        $a2, $t4, $t2
    ctx->pc = 0x100a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x100a74: 0xdcc60008  ld          $a2, 0x8($a2)
    ctx->pc = 0x100a74u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x100a78: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x100A78u;
    {
        const bool branch_taken_0x100a78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x100a78) {
            ctx->pc = 0x100A90u;
            goto label_100a90;
        }
    }
    ctx->pc = 0x100A80u;
    // 0x100a80: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x100a80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
    // 0x100a84: 0x6333e  dsrl32      $a2, $a2, 12
    ctx->pc = 0x100a84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 12));
    // 0x100a88: 0x1663014  dsllv       $a2, $a2, $t3
    ctx->pc = 0x100a88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (GPR_U32(ctx, 11) & 0x3F));
    // 0x100a8c: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x100a8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_100a90:
    // 0x100a90: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x100a90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x100a94: 0x254afff8  addiu       $t2, $t2, -0x8
    ctx->pc = 0x100a94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
    // 0x100a98: 0x521fff4  bgez        $t1, . + 4 + (-0xC << 2)
    ctx->pc = 0x100A98u;
    {
        const bool branch_taken_0x100a98 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x100A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A98u;
        // 0x100a9c: 0x256bffec  addiu       $t3, $t3, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a98) {
            ctx->pc = 0x100A6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100a6c;
        }
    }
    ctx->pc = 0x100AA0u;
    // 0x100aa0: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x100aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x100aa4: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x100aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x100aa8: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x100AA8u;
    {
        const bool branch_taken_0x100aa8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x100AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AA8u;
        // 0x100aac: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100aa8) {
            ctx->pc = 0x100AB8u;
            goto label_100ab8;
        }
    }
    ctx->pc = 0x100AB0u;
    // 0x100ab0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x100AB0u;
    {
        const bool branch_taken_0x100ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AB0u;
        // 0x100ab4: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ab0) {
            ctx->pc = 0x100AC0u;
            return;
        }
    }
    ctx->pc = 0x100AB8u;
label_100ab8:
    // 0x100ab8: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x100AB8u;
    {
        const bool branch_taken_0x100ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AB8u;
        // 0x100abc: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ab8) {
            ctx->pc = 0x100A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100a48;
        }
    }
    ctx->pc = 0x100AC0u;
}
