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

// Function: entry_001c8990
// Address: 0x1c8990 - 0x1c89a4
void entry_001c8990_0x1c8990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8990_0x1c8990");
#endif

    ctx->pc = 0x1c8990u;

    // 0x1c8990: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1c8990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x1c8994: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8994u;
    {
        const bool branch_taken_0x1c8994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8994u;
        // 0x1c8998: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8994) {
            ctx->pc = 0x1C89A4u;
            return;
        }
    }
    ctx->pc = 0x1C899Cu;
    // 0x1c899c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C899Cu;
    {
        const bool branch_taken_0x1c899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C899Cu;
        // 0x1c89a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c899c) {
            ctx->pc = 0x1C89B8u;
            return;
        }
    }
    ctx->pc = 0x1C89A4u;
}
