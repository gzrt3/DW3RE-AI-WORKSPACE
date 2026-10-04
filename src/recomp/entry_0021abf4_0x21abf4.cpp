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

// Function: entry_0021abf4
// Address: 0x21abf4 - 0x21abfc
void entry_0021abf4_0x21abf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021abf4_0x21abf4");
#endif

    ctx->pc = 0x21abf4u;

    // 0x21abf4: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x21abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x21abf8: 0xaf82928c  sw          $v0, -0x6D74($gp)
    ctx->pc = 0x21abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
    ctx->pc = 0x21abfcu;
}
