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

// Function: entry_00248b04
// Address: 0x248b04 - 0x248b08
void entry_00248b04_0x248b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248b04_0x248b04");
#endif

    ctx->pc = 0x248b04u;

    // 0x248b04: 0x9487a  dsrl        $t1, $t1, 1
    ctx->pc = 0x248b04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
    ctx->pc = 0x248b08u;
}
