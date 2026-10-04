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

// Function: FUN_0015bf80
// Address: 0x15bf80 - 0x15bfcc
void FUN_0015bf80_0x15bf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015bf80_0x15bf80");
#endif

    ctx->pc = 0x15bf80u;

    // 0x15bf80: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x15bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x15bf84: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15BF84u;
    {
        const bool branch_taken_0x15bf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF84u;
        // 0x15bf88: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf84) {
            ctx->pc = 0x15BFACu;
            goto label_15bfac;
        }
    }
    ctx->pc = 0x15BF8Cu;
    // 0x15bf8c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x15bf90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15bf94: 0x244234e0  addiu       $v0, $v0, 0x34E0
    ctx->pc = 0x15bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13536));
    // 0x15bf98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15bf9c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x15bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x15bfa0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15bfa4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15BFA4u;
    {
        const bool branch_taken_0x15bfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFA4u;
        // 0x15bfa8: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bfa4) {
            ctx->pc = 0x15BFCCu;
            return;
        }
    }
    ctx->pc = 0x15BFACu;
label_15bfac:
    // 0x15bfac: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x15bfb0: 0x24423490  addiu       $v0, $v0, 0x3490
    ctx->pc = 0x15bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13456));
    // 0x15bfb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15bfb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15bfbc: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x15bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x15bfc0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15bfc4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x15bfc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15bfc8: 0x0  nop
    ctx->pc = 0x15bfc8u;
    // NOP
    ctx->pc = 0x15bfccu;
}
