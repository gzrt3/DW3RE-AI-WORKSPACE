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

// Function: entry_00136ac0
// Address: 0x136ac0 - 0x136acc
void entry_00136ac0_0x136ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136ac0_0x136ac0");
#endif

    ctx->pc = 0x136ac0u;

    // 0x136ac0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x136ac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x136ac4: 0x20420001  addi        $v0, $v0, 0x1
    ctx->pc = 0x136ac4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x136ac8: 0x2c410051  sltiu       $at, $v0, 0x51
    ctx->pc = 0x136ac8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
    ctx->pc = 0x136accu;
}
