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

// Function: entry_001cf3b8
// Address: 0x1cf3b8 - 0x1cf3d0
void entry_001cf3b8_0x1cf3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf3b8_0x1cf3b8");
#endif

    ctx->pc = 0x1cf3b8u;

    // 0x1cf3b8: 0x2475007c  addiu       $s5, $v1, 0x7C
    ctx->pc = 0x1cf3b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 124));
    // 0x1cf3bc: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x1cf3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1cf3c0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF3C0u;
    {
        const bool branch_taken_0x1cf3c0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3C0u;
        // 0x1cf3c4: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3c0) {
            ctx->pc = 0x1CF3D0u;
            return;
        }
    }
    ctx->pc = 0x1CF3C8u;
    // 0x1cf3c8: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1cf3cc: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf3ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    ctx->pc = 0x1cf3d0u;
}
