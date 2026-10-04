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

// Function: entry_00215434
// Address: 0x215434 - 0x215438
void entry_00215434_0x215434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215434_0x215434");
#endif

    ctx->pc = 0x215434u;

    // 0x215434: 0x24e40180  addiu       $a0, $a3, 0x180
    ctx->pc = 0x215434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 384));
    ctx->pc = 0x215438u;
}
