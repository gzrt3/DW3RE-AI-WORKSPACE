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

// Function: entry_001c896c
// Address: 0x1c896c - 0x1c897c
void entry_001c896c_0x1c896c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c896c_0x1c896c");
#endif

    ctx->pc = 0x1c896cu;

    // 0x1c896c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C896Cu;
    {
        const bool branch_taken_0x1c896c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C896Cu;
        // 0x1c8970: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c896c) {
            ctx->pc = 0x1C897Cu;
            return;
        }
    }
    ctx->pc = 0x1C8974u;
    // 0x1c8974: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8974u;
    {
        const bool branch_taken_0x1c8974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8974u;
        // 0x1c8978: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8974) {
            ctx->pc = 0x1C8990u;
            return;
        }
    }
    ctx->pc = 0x1C897Cu;
}
