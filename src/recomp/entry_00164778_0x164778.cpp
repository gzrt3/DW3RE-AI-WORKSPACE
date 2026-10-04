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

// Function: entry_00164778
// Address: 0x164778 - 0x164784
void entry_00164778_0x164778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164778_0x164778");
#endif

    ctx->pc = 0x164778u;

    // 0x164778: 0xaf838698  sw          $v1, -0x7968($gp)
    ctx->pc = 0x164778u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936216), GPR_U32(ctx, 3));
    // 0x16477c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16477Cu;
    {
        const bool branch_taken_0x16477c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16477Cu;
        // 0x164780: 0xaf828694  sw          $v0, -0x796C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16477c) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x164784u;
}
