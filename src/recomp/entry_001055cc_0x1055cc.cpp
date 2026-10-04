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

// Function: entry_001055cc
// Address: 0x1055cc - 0x1055d4
void entry_001055cc_0x1055cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001055cc_0x1055cc");
#endif

    ctx->pc = 0x1055ccu;

    // 0x1055cc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1055CCu;
    {
        const bool branch_taken_0x1055cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1055D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1055CCu;
        // 0x1055d0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055cc) {
            ctx->pc = 0x105680u;
            return;
        }
    }
    ctx->pc = 0x1055D4u;
}
