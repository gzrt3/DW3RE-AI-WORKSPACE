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

// Function: entry_00169a40
// Address: 0x169a40 - 0x169a98
void entry_00169a40_0x169a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169a40_0x169a40");
#endif

    ctx->pc = 0x169a40u;

    // 0x169a40: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x169A40u;
    {
        const bool branch_taken_0x169a40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A40u;
        // 0x169a44: 0x30d000ff  andi        $s0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a40) {
            ctx->pc = 0x169AF4u;
            return;
        }
    }
    ctx->pc = 0x169A48u;
    // 0x169a48: 0x2a010020  slti        $at, $s0, 0x20
    ctx->pc = 0x169a48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x169a4c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x169A4Cu;
    {
        const bool branch_taken_0x169a4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A4Cu;
        // 0x169a50: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a4c) {
            ctx->pc = 0x169AF0u;
            return;
        }
    }
    ctx->pc = 0x169A54u;
    // 0x169a54: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x169a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x169a58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169a5c: 0x8c251ed8  lw          $a1, 0x1ED8($at)
    ctx->pc = 0x169a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x281ED8u));
    // 0x169a60: 0x2032004  sllv        $a0, $v1, $s0
    ctx->pc = 0x169a60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x169a64: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x169a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x169a68: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x169A68u;
    {
        const bool branch_taken_0x169a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a68) {
            ctx->pc = 0x169AECu;
            return;
        }
    }
    ctx->pc = 0x169A70u;
    // 0x169a70: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x169a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x169a74: 0x802027  not         $a0, $a0
    ctx->pc = 0x169a74u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x169a78: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x169a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x169a7c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x169a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x169a80: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x169A80u;
    {
        const bool branch_taken_0x169a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A80u;
        // 0x169a84: 0xac241ed8  sw          $a0, 0x1ED8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a80) {
            ctx->pc = 0x169AECu;
            return;
        }
    }
    ctx->pc = 0x169A88u;
    // 0x169a88: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x169a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x169a8c: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x169a8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x169a90: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x169A90u;
    {
        const bool branch_taken_0x169a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x169A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A90u;
        // 0x169a94: 0x1021c0  sll         $a0, $s0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a90) {
            ctx->pc = 0x169AC0u;
            return;
        }
    }
    ctx->pc = 0x169A98u;
}
