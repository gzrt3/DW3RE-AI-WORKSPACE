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

// Function: entry_001f6e54
// Address: 0x1f6e54 - 0x1f6e5c
void entry_001f6e54_0x1f6e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6e54_0x1f6e54");
#endif

    ctx->pc = 0x1f6e54u;

    // 0x1f6e54: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f6e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6e58: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x1f6e58u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1f6e5cu;
}
