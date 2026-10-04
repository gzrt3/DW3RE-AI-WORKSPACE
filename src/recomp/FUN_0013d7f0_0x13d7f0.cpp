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

// Function: FUN_0013d7f0
// Address: 0x13d7f0 - 0x13d804
void FUN_0013d7f0_0x13d7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013d7f0_0x13d7f0");
#endif

    ctx->pc = 0x13d7f0u;

    // 0x13d7f0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x13d7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x13d7f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x13d7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x13d7f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13d7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x13d7fc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13d7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13d800: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13d800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x13d804u;
}
