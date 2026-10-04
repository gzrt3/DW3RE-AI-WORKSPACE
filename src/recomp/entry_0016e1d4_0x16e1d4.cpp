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

// Function: entry_0016e1d4
// Address: 0x16e1d4 - 0x16e1dc
void entry_0016e1d4_0x16e1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e1d4_0x16e1d4");
#endif

    ctx->pc = 0x16e1d4u;

    // 0x16e1d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e1d8: 0xaf828180  sw          $v0, -0x7E80($gp)
    ctx->pc = 0x16e1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934912), GPR_U32(ctx, 2));
    ctx->pc = 0x16e1dcu;
}
