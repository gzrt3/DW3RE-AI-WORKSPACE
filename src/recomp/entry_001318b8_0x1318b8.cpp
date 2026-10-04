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

// Function: entry_001318b8
// Address: 0x1318b8 - 0x1318c0
void entry_001318b8_0x1318b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001318b8_0x1318b8");
#endif

    ctx->pc = 0x1318b8u;

    // 0x1318b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1318B8u;
    {
        const bool branch_taken_0x1318b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1318BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318B8u;
        // 0x1318bc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1318b8) {
            ctx->pc = 0x1318CCu;
            return;
        }
    }
    ctx->pc = 0x1318C0u;
}
