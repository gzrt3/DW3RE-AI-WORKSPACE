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

// Function: entry_00248dd4
// Address: 0x248dd4 - 0x248dd8
void entry_00248dd4_0x248dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248dd4_0x248dd4");
#endif

    ctx->pc = 0x248dd4u;

    // 0x248dd4: 0x9487a  dsrl        $t1, $t1, 1
    ctx->pc = 0x248dd4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
    ctx->pc = 0x248dd8u;
}
