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

// Function: entry_001b7d3c
// Address: 0x1b7d3c - 0x1b7d50
void entry_001b7d3c_0x1b7d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7d3c_0x1b7d3c");
#endif

    ctx->pc = 0x1b7d3cu;

    // 0x1b7d3c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b7d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1b7d40: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b7d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b7d44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b7d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b7d48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7D48u;
    {
        const bool branch_taken_0x1b7d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D48u;
        // 0x1b7d4c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d48) {
            ctx->pc = 0x1B7D70u;
            return;
        }
    }
    ctx->pc = 0x1B7D50u;
}
