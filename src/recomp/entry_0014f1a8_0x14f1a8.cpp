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

// Function: entry_0014f1a8
// Address: 0x14f1a8 - 0x14f1c0
void entry_0014f1a8_0x14f1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f1a8_0x14f1a8");
#endif

    ctx->pc = 0x14f1a8u;

    // 0x14f1a8: 0x8603019c  lh          $v1, 0x19C($s0)
    ctx->pc = 0x14f1a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x14f1ac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F1ACu;
    {
        const bool branch_taken_0x14f1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f1ac) {
            ctx->pc = 0x14F1C0u;
            return;
        }
    }
    ctx->pc = 0x14F1B4u;
    // 0x14f1b4: 0x8602019e  lh          $v0, 0x19E($s0)
    ctx->pc = 0x14f1b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 414)));
    // 0x14f1b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F1B8u;
    {
        const bool branch_taken_0x14f1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1B8u;
        // 0x14f1bc: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1b8) {
            ctx->pc = 0x14F1E0u;
            return;
        }
    }
    ctx->pc = 0x14F1C0u;
}
