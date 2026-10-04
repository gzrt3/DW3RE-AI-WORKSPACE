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

// Function: entry_00181848
// Address: 0x181848 - 0x18184c
void entry_00181848_0x181848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181848_0x181848");
#endif

    ctx->pc = 0x181848u;

    // 0x181848: 0x28c500b8  slti        $a1, $a2, 0xB8
    ctx->pc = 0x181848u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)184) ? 1 : 0);
    ctx->pc = 0x18184cu;
}
