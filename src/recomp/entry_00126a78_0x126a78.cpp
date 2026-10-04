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

// Function: entry_00126a78
// Address: 0x126a78 - 0x126a84
void entry_00126a78_0x126a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126a78_0x126a78");
#endif

    ctx->pc = 0x126a78u;

    // 0x126a78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x126a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x126a7c: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x126a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
    // 0x126a80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x126a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x126a84u;
}
