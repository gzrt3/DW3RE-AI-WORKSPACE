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

// Function: entry_001b6894
// Address: 0x1b6894 - 0x1b68a0
void entry_001b6894_0x1b6894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6894_0x1b6894");
#endif

    ctx->pc = 0x1b6894u;

    // 0x1b6894: 0x73402  srl         $a2, $a3, 16
    ctx->pc = 0x1b6894u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1b6898: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1B6898u;
    {
        const bool branch_taken_0x1b6898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6898u;
        // 0x1b689c: 0x30e9ffff  andi        $t1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6898) {
            ctx->pc = 0x1B6A00u;
            return;
        }
    }
    ctx->pc = 0x1B68A0u;
}
