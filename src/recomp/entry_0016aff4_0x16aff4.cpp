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

// Function: entry_0016aff4
// Address: 0x16aff4 - 0x16b04c
void entry_0016aff4_0x16aff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016aff4_0x16aff4");
#endif

    ctx->pc = 0x16aff4u;

    // 0x16aff4: 0x0  nop
    ctx->pc = 0x16aff4u;
    // NOP
    // 0x16aff8: 0x10a0002e  beqz        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x16AFF8u;
    {
        const bool branch_taken_0x16aff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFF8u;
        // 0x16affc: 0x30d000ff  andi        $s0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aff8) {
            ctx->pc = 0x16B0B4u;
            return;
        }
    }
    ctx->pc = 0x16B000u;
    // 0x16b000: 0x2a010020  slti        $at, $s0, 0x20
    ctx->pc = 0x16b000u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x16b004: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x16B004u;
    {
        const bool branch_taken_0x16b004 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B004u;
        // 0x16b008: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b004) {
            ctx->pc = 0x16B0B0u;
            return;
        }
    }
    ctx->pc = 0x16B00Cu;
    // 0x16b00c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b010: 0x8c251edc  lw          $a1, 0x1EDC($at)
    ctx->pc = 0x16b010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7900)));
    // 0x16b014: 0x2032004  sllv        $a0, $v1, $s0
    ctx->pc = 0x16b014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x16b018: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x16b018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x16b01c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x16B01Cu;
    {
        const bool branch_taken_0x16b01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b01c) {
            ctx->pc = 0x16B0B0u;
            return;
        }
    }
    ctx->pc = 0x16B024u;
    // 0x16b024: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16b024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x16b028: 0x802027  not         $a0, $a0
    ctx->pc = 0x16b028u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x16b02c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x16b02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x16b030: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16b030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16b034: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x16B034u;
    {
        const bool branch_taken_0x16b034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B034u;
        // 0x16b038: 0xac241edc  sw          $a0, 0x1EDC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7900), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b034) {
            ctx->pc = 0x16B0B0u;
            return;
        }
    }
    ctx->pc = 0x16B03Cu;
    // 0x16b03c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16b040: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16b040u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x16b044: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16B044u;
    {
        const bool branch_taken_0x16b044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b044) {
            ctx->pc = 0x16B074u;
            return;
        }
    }
    ctx->pc = 0x16B04Cu;
}
