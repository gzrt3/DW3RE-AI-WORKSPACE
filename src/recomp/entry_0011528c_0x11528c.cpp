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

// Function: entry_0011528c
// Address: 0x11528c - 0x11529c
void entry_0011528c_0x11528c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011528c_0x11528c");
#endif

    ctx->pc = 0x11528cu;

    // 0x11528c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11528Cu;
    {
        const bool branch_taken_0x11528c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x115290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11528Cu;
        // 0x115290: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11528c) {
            ctx->pc = 0x11529Cu;
            return;
        }
    }
    ctx->pc = 0x115294u;
    // 0x115294: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x115294u;
    {
        const bool branch_taken_0x115294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115294u;
        // 0x115298: 0x24e7e7f0  addiu       $a3, $a3, -0x1810 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115294) {
            ctx->pc = 0x1152D8u;
            return;
        }
    }
    ctx->pc = 0x11529Cu;
}
