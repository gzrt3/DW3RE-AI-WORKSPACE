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

// Function: entry_0014dac8
// Address: 0x14dac8 - 0x14dad0
void entry_0014dac8_0x14dac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dac8_0x14dac8");
#endif

    ctx->pc = 0x14dac8u;

    // 0x14dac8: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x14dac8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x14dacc: 0x24c60ee0  addiu       $a2, $a2, 0xEE0
    ctx->pc = 0x14daccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3808));
    ctx->pc = 0x14dad0u;
}
