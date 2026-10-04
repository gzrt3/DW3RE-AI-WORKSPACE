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

// Function: entry_001e4638
// Address: 0x1e4638 - 0x1e4644
void entry_001e4638_0x1e4638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4638_0x1e4638");
#endif

    ctx->pc = 0x1e4638u;

    // 0x1e4638: 0xad1821  addu        $v1, $a1, $t5
    ctx->pc = 0x1e4638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x1e463c: 0xa0600083  sb          $zero, 0x83($v1)
    ctx->pc = 0x1e463cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 131), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e4640: 0xa0600ee3  sb          $zero, 0xEE3($v1)
    ctx->pc = 0x1e4640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3811), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1e4644u;
}
