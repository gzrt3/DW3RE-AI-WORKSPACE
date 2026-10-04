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

// Function: entry_001cf3d0
// Address: 0x1cf3d0 - 0x1cf3f8
void entry_001cf3d0_0x1cf3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf3d0_0x1cf3d0");
#endif

    ctx->pc = 0x1cf3d0u;

    // 0x1cf3d0: 0x24770040  addiu       $s7, $v1, 0x40
    ctx->pc = 0x1cf3d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1cf3d4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cf3d8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1cf3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cf3dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cf3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf3e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cf3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cf3e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1cf3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf3e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF3E8u;
    {
        const bool branch_taken_0x1cf3e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3E8u;
        // 0x1cf3ec: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3e8) {
            ctx->pc = 0x1CF3F8u;
            return;
        }
    }
    ctx->pc = 0x1CF3F0u;
    // 0x1cf3f0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cf3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1cf3f4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cf3f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    ctx->pc = 0x1cf3f8u;
}
