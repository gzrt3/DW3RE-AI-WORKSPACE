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

// Function: entry_001dfae0
// Address: 0x1dfae0 - 0x1dfae4
void entry_001dfae0_0x1dfae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfae0_0x1dfae0");
#endif

    ctx->pc = 0x1dfae0u;

    // 0x1dfae0: 0x1eb3823  subu        $a3, $t7, $t3
    ctx->pc = 0x1dfae0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    ctx->pc = 0x1dfae4u;
}
