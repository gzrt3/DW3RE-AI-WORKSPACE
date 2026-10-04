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

// Function: entry_001a2738
// Address: 0x1a2738 - 0x1a273c
void entry_001a2738_0x1a2738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2738_0x1a2738");
#endif

    ctx->pc = 0x1a2738u;

    // 0x1a2738: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1a2738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    ctx->pc = 0x1a273cu;
}
