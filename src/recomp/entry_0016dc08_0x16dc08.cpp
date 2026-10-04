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

// Function: entry_0016dc08
// Address: 0x16dc08 - 0x16dc10
void entry_0016dc08_0x16dc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dc08_0x16dc08");
#endif

    ctx->pc = 0x16dc08u;

    // 0x16dc08: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x16DC08u;
    {
        const bool branch_taken_0x16dc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC08u;
        // 0x16dc0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc08) {
            ctx->pc = 0x16E118u;
            return;
        }
    }
    ctx->pc = 0x16DC10u;
}
