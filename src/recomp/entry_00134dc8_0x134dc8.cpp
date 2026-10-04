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

// Function: entry_00134dc8
// Address: 0x134dc8 - 0x134dd4
void entry_00134dc8_0x134dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134dc8_0x134dc8");
#endif

    ctx->pc = 0x134dc8u;

    // 0x134dc8: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x134dc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x134dcc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x134dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x134dd0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x134dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->pc = 0x134dd4u;
}
