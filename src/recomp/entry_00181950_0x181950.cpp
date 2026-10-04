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

// Function: entry_00181950
// Address: 0x181950 - 0x181954
void entry_00181950_0x181950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181950_0x181950");
#endif

    ctx->pc = 0x181950u;

    // 0x181950: 0x28a200b8  slti        $v0, $a1, 0xB8
    ctx->pc = 0x181950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)184) ? 1 : 0);
    ctx->pc = 0x181954u;
}
