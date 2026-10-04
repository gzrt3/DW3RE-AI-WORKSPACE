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

// Function: FUN_001ca0e0
// Address: 0x1ca0e0 - 0x1ca0fc
void FUN_001ca0e0_0x1ca0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ca0e0_0x1ca0e0");
#endif

    ctx->pc = 0x1ca0e0u;

    // 0x1ca0e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ca0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1ca0e4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ca0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1ca0e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ca0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1ca0ec: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1ca0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ca0f0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ca0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1ca0f4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ca0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ca0f8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1ca0f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ca0fcu;
}
