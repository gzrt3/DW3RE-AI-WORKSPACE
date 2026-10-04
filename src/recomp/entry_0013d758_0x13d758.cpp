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

// Function: entry_0013d758
// Address: 0x13d758 - 0x13d760
void entry_0013d758_0x13d758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d758_0x13d758");
#endif

    ctx->pc = 0x13d758u;

    // 0x13d758: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13d758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13d75c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x13d75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    ctx->pc = 0x13d760u;
}
