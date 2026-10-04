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

// Function: entry_0023fa04
// Address: 0x23fa04 - 0x23fa08
void entry_0023fa04_0x23fa04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fa04_0x23fa04");
#endif

    ctx->pc = 0x23fa04u;

    // 0x23fa04: 0x24a5ea18  addiu       $a1, $a1, -0x15E8
    ctx->pc = 0x23fa04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961688));
    ctx->pc = 0x23fa08u;
}
