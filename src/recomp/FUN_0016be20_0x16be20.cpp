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

// Function: FUN_0016be20
// Address: 0x16be20 - 0x16be64
void FUN_0016be20_0x16be20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016be20_0x16be20");
#endif

    ctx->pc = 0x16be20u;

    // 0x16be20: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x16be20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x16be24: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x16be24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x16be28: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x16BE28u;
    {
        const bool branch_taken_0x16be28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE28u;
        // 0x16be2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be28) {
            ctx->pc = 0x16BE64u;
            return;
        }
    }
    ctx->pc = 0x16BE30u;
    // 0x16be30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16be34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16be34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16be38: 0x622804  sllv        $a1, $v0, $v1
    ctx->pc = 0x16be38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x16be3c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x16be40: 0x24631ed8  addiu       $v1, $v1, 0x1ED8
    ctx->pc = 0x16be40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7896));
    // 0x16be44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16be44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16be48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16be48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16be4c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x16be4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x16be50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BE50u;
    {
        const bool branch_taken_0x16be50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16be50) {
            ctx->pc = 0x16BE60u;
            goto label_16be60;
        }
    }
    ctx->pc = 0x16BE58u;
    // 0x16be58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16BE58u;
    {
        const bool branch_taken_0x16be58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16be58) {
            ctx->pc = 0x16BE64u;
            return;
        }
    }
    ctx->pc = 0x16BE60u;
label_16be60:
    // 0x16be60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16be60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16be64u;
}
