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

// Function: entry_001817b0
// Address: 0x1817b0 - 0x1817c4
void entry_001817b0_0x1817b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001817b0_0x1817b0");
#endif

    ctx->pc = 0x1817b0u;

    // 0x1817b0: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x1817b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1817b4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1817b4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1817b8: 0x28c6000a  slti        $a2, $a2, 0xA
    ctx->pc = 0x1817b8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1817bc: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x1817BCu;
    {
        const bool branch_taken_0x1817bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1817C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817BCu;
        // 0x1817c0: 0xb343c  dsll32      $a2, $t3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817bc) {
            ctx->pc = 0x181788u;
            return;
        }
    }
    ctx->pc = 0x1817C4u;
}
