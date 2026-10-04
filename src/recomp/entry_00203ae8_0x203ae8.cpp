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

// Function: entry_00203ae8
// Address: 0x203ae8 - 0x203af0
void entry_00203ae8_0x203ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203ae8_0x203ae8");
#endif

    ctx->pc = 0x203ae8u;

    // 0x203ae8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x203AE8u;
    {
        const bool branch_taken_0x203ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AE8u;
        // 0x203aec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ae8) {
            ctx->pc = 0x203C18u;
            return;
        }
    }
    ctx->pc = 0x203AF0u;
}
