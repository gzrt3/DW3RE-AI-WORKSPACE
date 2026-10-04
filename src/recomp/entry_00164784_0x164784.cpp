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

// Function: entry_00164784
// Address: 0x164784 - 0x164790
void entry_00164784_0x164784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164784_0x164784");
#endif

    ctx->pc = 0x164784u;

    // 0x164784: 0xaf83868c  sw          $v1, -0x7974($gp)
    ctx->pc = 0x164784u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936204), GPR_U32(ctx, 3));
    // 0x164788: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x164788u;
    {
        const bool branch_taken_0x164788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164788u;
        // 0x16478c: 0xaf828688  sw          $v0, -0x7978($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164788) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x164790u;
}
