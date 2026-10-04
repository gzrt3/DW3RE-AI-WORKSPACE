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

// Function: entry_0016b0b0
// Address: 0x16b0b0 - 0x16b0b4
void entry_0016b0b0_0x16b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b0b0_0x16b0b0");
#endif

    ctx->pc = 0x16b0b0u;

    // 0x16b0b0: 0xa620000c  sh          $zero, 0xC($s1)
    ctx->pc = 0x16b0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x16b0b4u;
}
