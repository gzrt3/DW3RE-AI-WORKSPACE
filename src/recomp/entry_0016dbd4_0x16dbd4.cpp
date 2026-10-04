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

// Function: entry_0016dbd4
// Address: 0x16dbd4 - 0x16dbd8
void entry_0016dbd4_0x16dbd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dbd4_0x16dbd4");
#endif

    ctx->pc = 0x16dbd4u;

    // 0x16dbd4: 0x25291ab0  addiu       $t1, $t1, 0x1AB0
    ctx->pc = 0x16dbd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6832));
    ctx->pc = 0x16dbd8u;
}
