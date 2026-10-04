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

// Function: FUN_0015bf20
// Address: 0x15bf20 - 0x15bf6c
void FUN_0015bf20_0x15bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015bf20_0x15bf20");
#endif

    ctx->pc = 0x15bf20u;

    // 0x15bf20: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x15bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x15bf24: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15BF24u;
    {
        const bool branch_taken_0x15bf24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x15BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF24u;
        // 0x15bf28: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf24) {
            ctx->pc = 0x15BF4Cu;
            goto label_15bf4c;
        }
    }
    ctx->pc = 0x15BF2Cu;
    // 0x15bf2c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x15bf30: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15bf34: 0x244234e0  addiu       $v0, $v0, 0x34E0
    ctx->pc = 0x15bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13536));
    // 0x15bf38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15bf3c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x15bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x15bf40: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15bf44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15BF44u;
    {
        const bool branch_taken_0x15bf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF44u;
        // 0x15bf48: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf44) {
            ctx->pc = 0x15BF6Cu;
            return;
        }
    }
    ctx->pc = 0x15BF4Cu;
label_15bf4c:
    // 0x15bf4c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x15bf50: 0x24423490  addiu       $v0, $v0, 0x3490
    ctx->pc = 0x15bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13456));
    // 0x15bf54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15bf58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15bf5c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x15bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x15bf60: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15bf64: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x15bf64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15bf68: 0x0  nop
    ctx->pc = 0x15bf68u;
    // NOP
    ctx->pc = 0x15bf6cu;
}
