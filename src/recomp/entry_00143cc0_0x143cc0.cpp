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

// Function: entry_00143cc0
// Address: 0x143cc0 - 0x143ce8
void entry_00143cc0_0x143cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143cc0_0x143cc0");
#endif

    ctx->pc = 0x143cc0u;

    // 0x143cc0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x143CC0u;
    {
        const bool branch_taken_0x143cc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x143cc0) {
            ctx->pc = 0x143CE8u;
            return;
        }
    }
    ctx->pc = 0x143CC8u;
    // 0x143cc8: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x143cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x143ccc: 0x90a601a1  lbu         $a2, 0x1A1($a1)
    ctx->pc = 0x143cccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 417)));
    // 0x143cd0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x143cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x143cd4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x143cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x143cd8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x143cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x143cdc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x143cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143ce0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x143CE0u;
    {
        const bool branch_taken_0x143ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143CE0u;
        // 0x143ce4: 0xaca30030  sw          $v1, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ce0) {
            ctx->pc = 0x143CF4u;
            return;
        }
    }
    ctx->pc = 0x143CE8u;
}
