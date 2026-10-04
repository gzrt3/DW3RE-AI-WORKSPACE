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

// Function: entry_002013c0
// Address: 0x2013c0 - 0x2013d0
void entry_002013c0_0x2013c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002013c0_0x2013c0");
#endif

    ctx->pc = 0x2013c0u;

    // 0x2013c0: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2013C0u;
    {
        const bool branch_taken_0x2013c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2013c0) {
            ctx->pc = 0x2013D0u;
            return;
        }
    }
    ctx->pc = 0x2013C8u;
    // 0x2013c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2013C8u;
    {
        const bool branch_taken_0x2013c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013C8u;
        // 0x2013cc: 0x2921000a  slti        $at, $t1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013c8) {
            ctx->pc = 0x2013DCu;
            return;
        }
    }
    ctx->pc = 0x2013D0u;
}
