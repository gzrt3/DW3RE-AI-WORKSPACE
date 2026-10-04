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

// Function: entry_0016dbec
// Address: 0x16dbec - 0x16dbf0
void entry_0016dbec_0x16dbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dbec_0x16dbec");
#endif

    ctx->pc = 0x16dbecu;

    // 0x16dbec: 0x254a1a90  addiu       $t2, $t2, 0x1A90
    ctx->pc = 0x16dbecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6800));
    ctx->pc = 0x16dbf0u;
}
