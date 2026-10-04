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

// Function: entry_001cf1f4
// Address: 0x1cf1f4 - 0x1cf204
void entry_001cf1f4_0x1cf1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf1f4_0x1cf1f4");
#endif

    ctx->pc = 0x1cf1f4u;

    // 0x1cf1f4: 0x14e50003  bne         $a3, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF1F4u;
    {
        const bool branch_taken_0x1cf1f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x1CF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1F4u;
        // 0x1cf1f8: 0x240d000a  addiu       $t5, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1f4) {
            ctx->pc = 0x1CF204u;
            return;
        }
    }
    ctx->pc = 0x1CF1FCu;
    // 0x1cf1fc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1CF1FCu;
    {
        const bool branch_taken_0x1cf1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1FCu;
        // 0x1cf200: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1fc) {
            ctx->pc = 0x1CF204u;
            return;
        }
    }
    ctx->pc = 0x1CF204u;
}
