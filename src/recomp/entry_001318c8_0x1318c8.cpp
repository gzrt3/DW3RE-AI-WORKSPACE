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

// Function: entry_001318c8
// Address: 0x1318c8 - 0x1318cc
void entry_001318c8_0x1318c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001318c8_0x1318c8");
#endif

    ctx->pc = 0x1318c8u;

    // 0x1318c8: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x1318c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1318ccu;
}
