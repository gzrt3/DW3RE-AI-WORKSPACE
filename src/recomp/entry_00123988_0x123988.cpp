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

// Function: entry_00123988
// Address: 0x123988 - 0x1239a0
void entry_00123988_0x123988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123988_0x123988");
#endif

    ctx->pc = 0x123988u;

    // 0x123988: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x123988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x12398c: 0xa08302e3  sb          $v1, 0x2E3($a0)
    ctx->pc = 0x12398cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 3));
    // 0x123990: 0x948302e6  lhu         $v1, 0x2E6($a0)
    ctx->pc = 0x123990u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
    // 0x123994: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x123994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x123998: 0xa48302e6  sh          $v1, 0x2E6($a0)
    ctx->pc = 0x123998u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 742), (uint16_t)GPR_U32(ctx, 3));
    // 0x12399c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12399cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1239a0u;
}
