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

// Function: entry_001b7a2c
// Address: 0x1b7a2c - 0x1b7a9c
void entry_001b7a2c_0x1b7a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7a2c_0x1b7a2c");
#endif

    switch (ctx->pc) {
        case 0x1b7a40u: goto label_1b7a40;
        default: break;
    }

    ctx->pc = 0x1b7a2cu;

    // 0x1b7a2c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1b7a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b7a30: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x1b7a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x1b7a34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7A34u;
    {
        const bool branch_taken_0x1b7a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A34u;
        // 0x1b7a38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a34) {
            ctx->pc = 0x1B7A48u;
            goto label_1b7a48;
        }
    }
    ctx->pc = 0x1B7A3Cu;
    // 0x1b7a3c: 0x0  nop
    ctx->pc = 0x1b7a3cu;
    // NOP
label_1b7a40:
    // 0x1b7a40: 0x87282b  sltu        $a1, $a0, $a3
    ctx->pc = 0x1b7a40u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b7a44: 0x0  nop
    ctx->pc = 0x1b7a44u;
    // NOP
label_1b7a48:
    // 0x1b7a48: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7A48u;
    {
        const bool branch_taken_0x1b7a48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7a48) {
            ctx->pc = 0x1B7A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7A48u;
            // 0x1b7a4c: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A5Cu;
            goto label_1b7a5c;
        }
    }
    ctx->pc = 0x1B7A50u;
    // 0x1b7a50: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1b7a50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1b7a54: 0x87202f  dsubu       $a0, $a0, $a3
    ctx->pc = 0x1b7a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 7));
    // 0x1b7a58: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x1b7a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_1b7a5c:
    // 0x1b7a5c: 0x0  nop
    ctx->pc = 0x1b7a5cu;
    // NOP
    // 0x1b7a60: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B7A60u;
    {
        const bool branch_taken_0x1b7a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A60u;
        // 0x1b7a64: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a60) {
            ctx->pc = 0x1B7A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7a40;
        }
    }
    ctx->pc = 0x1B7A68u;
    // 0x1b7a68: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1b7a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1b7a6c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b7a70: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7A70u;
    {
        const bool branch_taken_0x1b7a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7a70) {
            ctx->pc = 0x1B7A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7A70u;
            // 0x1b7a74: 0xfd060010  sd          $a2, 0x10($t0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A98u;
            goto label_1b7a98;
        }
    }
    ctx->pc = 0x1B7A78u;
    // 0x1b7a78: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x1b7a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x1b7a7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7A7Cu;
    {
        const bool branch_taken_0x1b7a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A7Cu;
        // 0x1b7a80: 0x64c20080  daddiu      $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a7c) {
            ctx->pc = 0x1B7A90u;
            goto label_1b7a90;
        }
    }
    ctx->pc = 0x1B7A84u;
    // 0x1b7a84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7A84u;
    {
        const bool branch_taken_0x1b7a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A84u;
        // 0x1b7a88: 0x64c60080  daddiu      $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a84) {
            ctx->pc = 0x1B7A94u;
            goto label_1b7a94;
        }
    }
    ctx->pc = 0x1B7A8Cu;
    // 0x1b7a8c: 0x0  nop
    ctx->pc = 0x1b7a8cu;
    // NOP
label_1b7a90:
    // 0x1b7a90: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x1b7a90u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_1b7a94:
    // 0x1b7a94: 0xfd060010  sd          $a2, 0x10($t0)
    ctx->pc = 0x1b7a94u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 6));
label_1b7a98:
    // 0x1b7a98: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1b7a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b7a9cu;
}
