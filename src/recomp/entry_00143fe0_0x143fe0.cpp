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

// Function: entry_00143fe0
// Address: 0x143fe0 - 0x143ff8
void entry_00143fe0_0x143fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143fe0_0x143fe0");
#endif

    ctx->pc = 0x143fe0u;

    // 0x143fe0: 0x8483021c  lh          $v1, 0x21C($a0)
    ctx->pc = 0x143fe0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 540)));
    // 0x143fe4: 0xa483021e  sh          $v1, 0x21E($a0)
    ctx->pc = 0x143fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 542), (uint16_t)GPR_U32(ctx, 3));
    // 0x143fe8: 0x8486021c  lh          $a2, 0x21C($a0)
    ctx->pc = 0x143fe8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 540)));
    // 0x143fec: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x143fecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x143ff0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x143ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x143ff4: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x143ff4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x143ff8u;
}
