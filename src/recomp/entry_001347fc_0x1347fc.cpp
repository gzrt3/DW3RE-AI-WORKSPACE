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

// Function: entry_001347fc
// Address: 0x1347fc - 0x134808
void entry_001347fc_0x1347fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001347fc_0x1347fc");
#endif

    ctx->pc = 0x1347fcu;

    // 0x1347fc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1347fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134800: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x134800u;
    {
        const bool branch_taken_0x134800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134800u;
        // 0x134804: 0x9431a3e4  lhu         $s1, -0x5C1C($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134800) {
            ctx->pc = 0x134874u;
            return;
        }
    }
    ctx->pc = 0x134808u;
}
