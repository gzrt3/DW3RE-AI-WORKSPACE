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

// Function: entry_001ab900
// Address: 0x1ab900 - 0x1ab908
void entry_001ab900_0x1ab900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab900_0x1ab900");
#endif

    ctx->pc = 0x1ab900u;

    // 0x1ab900: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1ab900u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1ab904: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1ab904u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    ctx->pc = 0x1ab908u;
}
