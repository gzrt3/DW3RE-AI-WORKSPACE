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

// Function: entry_001e4820
// Address: 0x1e4820 - 0x1e482c
void entry_001e4820_0x1e4820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4820_0x1e4820");
#endif

    ctx->pc = 0x1e4820u;

    // 0x1e4820: 0xaa1821  addu        $v1, $a1, $t2
    ctx->pc = 0x1e4820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1e4824: 0xa0600083  sb          $zero, 0x83($v1)
    ctx->pc = 0x1e4824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 131), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e4828: 0xa0600d03  sb          $zero, 0xD03($v1)
    ctx->pc = 0x1e4828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3331), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1e482cu;
}
