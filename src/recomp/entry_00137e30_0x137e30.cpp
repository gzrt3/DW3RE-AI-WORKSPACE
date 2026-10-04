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

// Function: entry_00137e30
// Address: 0x137e30 - 0x137e34
void entry_00137e30_0x137e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137e30_0x137e30");
#endif

    ctx->pc = 0x137e30u;

    // 0x137e30: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x137e30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x137e34u;
}
