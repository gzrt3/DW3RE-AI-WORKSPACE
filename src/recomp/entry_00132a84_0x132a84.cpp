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

// Function: entry_00132a84
// Address: 0x132a84 - 0x132a88
void entry_00132a84_0x132a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132a84_0x132a84");
#endif

    ctx->pc = 0x132a84u;

    // 0x132a84: 0xac642124  sw          $a0, 0x2124($v1)
    ctx->pc = 0x132a84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8484), GPR_U32(ctx, 4));
    ctx->pc = 0x132a88u;
}
