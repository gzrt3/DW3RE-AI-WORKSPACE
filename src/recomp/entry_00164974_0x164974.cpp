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

// Function: entry_00164974
// Address: 0x164974 - 0x164980
void entry_00164974_0x164974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164974_0x164974");
#endif

    ctx->pc = 0x164974u;

    // 0x164974: 0xaf868668  sw          $a2, -0x7998($gp)
    ctx->pc = 0x164974u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936168), GPR_U32(ctx, 6));
    // 0x164978: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164978u;
    {
        const bool branch_taken_0x164978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164978u;
        // 0x16497c: 0xaf878664  sw          $a3, -0x799C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936164), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164978) {
            ctx->pc = 0x164988u;
            return;
        }
    }
    ctx->pc = 0x164980u;
}
