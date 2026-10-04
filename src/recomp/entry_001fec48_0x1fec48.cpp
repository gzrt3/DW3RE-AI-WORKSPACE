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

// Function: entry_001fec48
// Address: 0x1fec48 - 0x1fec50
void entry_001fec48_0x1fec48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fec48_0x1fec48");
#endif

    ctx->pc = 0x1fec48u;

    // 0x1fec48: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1fec48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fec4c: 0xaf839090  sw          $v1, -0x6F70($gp)
    ctx->pc = 0x1fec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 3));
    ctx->pc = 0x1fec50u;
}
