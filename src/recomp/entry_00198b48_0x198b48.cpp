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

// Function: entry_00198b48
// Address: 0x198b48 - 0x198b4c
void entry_00198b48_0x198b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198b48_0x198b48");
#endif

    ctx->pc = 0x198b48u;

    // 0x198b48: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x198b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    ctx->pc = 0x198b4cu;
}
