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

// Function: entry_0021a7e0
// Address: 0x21a7e0 - 0x21a7e8
void entry_0021a7e0_0x21a7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a7e0_0x21a7e0");
#endif

    ctx->pc = 0x21a7e0u;

    // 0x21a7e0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x21a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21a7e4: 0xaf8292a8  sw          $v0, -0x6D58($gp)
    ctx->pc = 0x21a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
    ctx->pc = 0x21a7e8u;
}
