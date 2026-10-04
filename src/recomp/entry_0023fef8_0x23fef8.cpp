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

// Function: entry_0023fef8
// Address: 0x23fef8 - 0x23ff14
void entry_0023fef8_0x23fef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fef8_0x23fef8");
#endif

    ctx->pc = 0x23fef8u;

    // 0x23fef8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23fefc: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x23fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x23ff00: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23ff00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x23ff04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23ff08: 0x240300ab  addiu       $v1, $zero, 0xAB
    ctx->pc = 0x23ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x23ff0c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x23ff0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x23ff10: 0xa0234a3b  sb          $v1, 0x4A3B($at)
    ctx->pc = 0x23ff10u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19003), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x23ff14u;
}
