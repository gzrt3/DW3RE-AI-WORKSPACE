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

// Function: entry_001653f8
// Address: 0x1653f8 - 0x165404
void entry_001653f8_0x1653f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001653f8_0x1653f8");
#endif

    ctx->pc = 0x1653f8u;

    // 0x1653f8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1653f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1653fc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1653fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x165400: 0xaf8286bc  sw          $v0, -0x7944($gp)
    ctx->pc = 0x165400u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936252), GPR_U32(ctx, 2));
    ctx->pc = 0x165404u;
}
