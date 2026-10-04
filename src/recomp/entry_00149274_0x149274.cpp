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

// Function: entry_00149274
// Address: 0x149274 - 0x14927c
void entry_00149274_0x149274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149274_0x149274");
#endif

    ctx->pc = 0x149274u;

    // 0x149274: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x149274u;
    {
        const bool branch_taken_0x149274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149274u;
        // 0x149278: 0xa620002c  sh          $zero, 0x2C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149274) {
            ctx->pc = 0x149364u;
            return;
        }
    }
    ctx->pc = 0x14927Cu;
}
