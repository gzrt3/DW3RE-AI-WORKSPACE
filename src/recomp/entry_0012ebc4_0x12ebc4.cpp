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

// Function: entry_0012ebc4
// Address: 0x12ebc4 - 0x12ebcc
void entry_0012ebc4_0x12ebc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ebc4_0x12ebc4");
#endif

    ctx->pc = 0x12ebc4u;

    // 0x12ebc4: 0x2463ebe0  addiu       $v1, $v1, -0x1420
    ctx->pc = 0x12ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962144));
    // 0x12ebc8: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x12ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    ctx->pc = 0x12ebccu;
}
