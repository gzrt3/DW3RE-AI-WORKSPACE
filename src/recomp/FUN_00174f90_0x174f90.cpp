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

// Function: FUN_00174f90
// Address: 0x174f90 - 0x174fa0
void FUN_00174f90_0x174f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00174f90_0x174f90");
#endif

    ctx->pc = 0x174f90u;

    // 0x174f90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x174f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x174f94: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x174f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x174f98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x174f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x174f9c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x174f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x174fa0u;
}
