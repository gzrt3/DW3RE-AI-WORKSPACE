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

// Function: entry_00133198
// Address: 0x133198 - 0x1331a0
void entry_00133198_0x133198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133198_0x133198");
#endif

    ctx->pc = 0x133198u;

    // 0x133198: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x133198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13319c: 0x24842150  addiu       $a0, $a0, 0x2150
    ctx->pc = 0x13319cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8528));
    ctx->pc = 0x1331a0u;
}
