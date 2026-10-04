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

// Function: FUN_001c5ca0
// Address: 0x1c5ca0 - 0x1c5cec
void FUN_001c5ca0_0x1c5ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c5ca0_0x1c5ca0");
#endif

    ctx->pc = 0x1c5ca0u;

    // 0x1c5ca0: 0x908302ec  lbu         $v1, 0x2EC($a0)
    ctx->pc = 0x1c5ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 748)));
    // 0x1c5ca4: 0x908202eb  lbu         $v0, 0x2EB($a0)
    ctx->pc = 0x1c5ca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 747)));
    // 0x1c5ca8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1c5ca8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c5cac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5CACu;
    {
        const bool branch_taken_0x1c5cac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CACu;
        // 0x1c5cb0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5cac) {
            ctx->pc = 0x1C5CBCu;
            goto label_1c5cbc;
        }
    }
    ctx->pc = 0x1C5CB4u;
    // 0x1c5cb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5CB4u;
    {
        const bool branch_taken_0x1c5cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CB4u;
        // 0x1c5cb8: 0xa08202ec  sb          $v0, 0x2EC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 748), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5cb4) {
            ctx->pc = 0x1C5CCCu;
            goto label_1c5ccc;
        }
    }
    ctx->pc = 0x1C5CBCu;
label_1c5cbc:
    // 0x1c5cbc: 0xa08002ec  sb          $zero, 0x2EC($a0)
    ctx->pc = 0x1c5cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 748), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5cc0: 0x908202e8  lbu         $v0, 0x2E8($a0)
    ctx->pc = 0x1c5cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 744)));
    // 0x1c5cc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5cc8: 0xa08202e8  sb          $v0, 0x2E8($a0)
    ctx->pc = 0x1c5cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 744), (uint8_t)GPR_U32(ctx, 2));
label_1c5ccc:
    // 0x1c5ccc: 0x908302e8  lbu         $v1, 0x2E8($a0)
    ctx->pc = 0x1c5cccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 744)));
    // 0x1c5cd0: 0x908202ea  lbu         $v0, 0x2EA($a0)
    ctx->pc = 0x1c5cd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 746)));
    // 0x1c5cd4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1c5cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c5cd8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5CD8u;
    {
        const bool branch_taken_0x1c5cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CD8u;
        // 0x1c5cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5cd8) {
            ctx->pc = 0x1C5CECu;
            return;
        }
    }
    ctx->pc = 0x1C5CE0u;
    // 0x1c5ce0: 0x908302e9  lbu         $v1, 0x2E9($a0)
    ctx->pc = 0x1c5ce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 745)));
    // 0x1c5ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5ce8: 0xa08302e8  sb          $v1, 0x2E8($a0)
    ctx->pc = 0x1c5ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 744), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1c5cecu;
}
