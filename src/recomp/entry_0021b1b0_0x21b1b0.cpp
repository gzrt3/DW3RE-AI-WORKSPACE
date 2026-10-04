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

// Function: entry_0021b1b0
// Address: 0x21b1b0 - 0x21b1b8
void entry_0021b1b0_0x21b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b1b0_0x21b1b0");
#endif

    ctx->pc = 0x21b1b0u;

    // 0x21b1b0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x21b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21b1b4: 0xaf8292a8  sw          $v0, -0x6D58($gp)
    ctx->pc = 0x21b1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
    ctx->pc = 0x21b1b8u;
}
