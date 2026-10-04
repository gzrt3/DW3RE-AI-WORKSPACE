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

// Function: entry_0023fe60
// Address: 0x23fe60 - 0x23fe7c
void entry_0023fe60_0x23fe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fe60_0x23fe60");
#endif

    ctx->pc = 0x23fe60u;

    // 0x23fe60: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23fe64: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x23fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x23fe68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23fe68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x23fe6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23fe70: 0x240300ab  addiu       $v1, $zero, 0xAB
    ctx->pc = 0x23fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x23fe74: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x23fe74u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x23fe78: 0xa0233a1b  sb          $v1, 0x3A1B($at)
    ctx->pc = 0x23fe78u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14875), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x23fe7cu;
}
