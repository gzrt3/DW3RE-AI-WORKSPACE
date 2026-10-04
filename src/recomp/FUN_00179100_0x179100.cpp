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

// Function: FUN_00179100
// Address: 0x179100 - 0x179110
void FUN_00179100_0x179100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00179100_0x179100");
#endif

    ctx->pc = 0x179100u;

    // 0x179100: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x179100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x179104: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x179108: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x179108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x17910c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17910cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    ctx->pc = 0x179110u;
}
