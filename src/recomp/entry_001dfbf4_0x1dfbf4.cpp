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

// Function: entry_001dfbf4
// Address: 0x1dfbf4 - 0x1dfbf8
void entry_001dfbf4_0x1dfbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfbf4_0x1dfbf4");
#endif

    ctx->pc = 0x1dfbf4u;

    // 0x1dfbf4: 0x6d3823  subu        $a3, $v1, $t5
    ctx->pc = 0x1dfbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    ctx->pc = 0x1dfbf8u;
}
