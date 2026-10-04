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

// Function: entry_0011f838
// Address: 0x11f838 - 0x11f840
void entry_0011f838_0x11f838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f838_0x11f838");
#endif

    ctx->pc = 0x11f838u;

    // 0x11f838: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x11f838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x11f83c: 0xa20202e3  sb          $v0, 0x2E3($s0)
    ctx->pc = 0x11f83cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x11f840u;
}
