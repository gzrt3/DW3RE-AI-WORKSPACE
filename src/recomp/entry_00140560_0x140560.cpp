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

// Function: entry_00140560
// Address: 0x140560 - 0x140564
void entry_00140560_0x140560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140560_0x140560");
#endif

    ctx->pc = 0x140560u;

    // 0x140560: 0xa60001a8  sh          $zero, 0x1A8($s0)
    ctx->pc = 0x140560u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 424), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x140564u;
}
