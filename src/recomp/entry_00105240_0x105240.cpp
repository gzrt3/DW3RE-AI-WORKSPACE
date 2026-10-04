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

// Function: entry_00105240
// Address: 0x105240 - 0x105250
void entry_00105240_0x105240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105240_0x105240");
#endif

    ctx->pc = 0x105240u;

    // 0x105240: 0x3c10002d  lui         $s0, 0x2D
    ctx->pc = 0x105240u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)45 << 16));
    // 0x105244: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x105244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105248: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x105248u;
    {
        const bool branch_taken_0x105248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105248u;
        // 0x10524c: 0x26105150  addiu       $s0, $s0, 0x5150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105248) {
            ctx->pc = 0x105278u;
            return;
        }
    }
    ctx->pc = 0x105250u;
}
