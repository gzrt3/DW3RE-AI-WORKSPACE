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

// Function: entry_00169970
// Address: 0x169970 - 0x169978
void entry_00169970_0x169970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169970_0x169970");
#endif

    ctx->pc = 0x169970u;

    // 0x169970: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x169970u;
    {
        const bool branch_taken_0x169970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169970u;
        // 0x169974: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169970) {
            ctx->pc = 0x1699D8u;
            return;
        }
    }
    ctx->pc = 0x169978u;
}
