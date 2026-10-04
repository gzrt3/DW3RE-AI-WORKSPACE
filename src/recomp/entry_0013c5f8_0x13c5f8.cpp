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

// Function: entry_0013c5f8
// Address: 0x13c5f8 - 0x13c604
void entry_0013c5f8_0x13c5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c5f8_0x13c5f8");
#endif

    ctx->pc = 0x13c5f8u;

    // 0x13c5f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13c5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13c5fc: 0xa48302e6  sh          $v1, 0x2E6($a0)
    ctx->pc = 0x13c5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 742), (uint16_t)GPR_U32(ctx, 3));
    // 0x13c600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13c604u;
}
