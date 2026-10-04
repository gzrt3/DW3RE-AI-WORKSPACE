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

// Function: entry_00164944
// Address: 0x164944 - 0x164950
void entry_00164944_0x164944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164944_0x164944");
#endif

    ctx->pc = 0x164944u;

    // 0x164944: 0xaf86868c  sw          $a2, -0x7974($gp)
    ctx->pc = 0x164944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936204), GPR_U32(ctx, 6));
    // 0x164948: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x164948u;
    {
        const bool branch_taken_0x164948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164948u;
        // 0x16494c: 0xaf878688  sw          $a3, -0x7978($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164948) {
            ctx->pc = 0x164988u;
            return;
        }
    }
    ctx->pc = 0x164950u;
}
