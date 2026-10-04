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

// Function: entry_0021aac8
// Address: 0x21aac8 - 0x21aacc
void entry_0021aac8_0x21aac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021aac8_0x21aac8");
#endif

    ctx->pc = 0x21aac8u;

    // 0x21aac8: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x21aac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    ctx->pc = 0x21aaccu;
}
