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

// Function: FUN_00181360
// Address: 0x181360 - 0x181378
void FUN_00181360_0x181360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00181360_0x181360");
#endif

    ctx->pc = 0x181360u;

    // 0x181360: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x181360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x181364: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x181364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x181368: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x181368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x18136c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18136cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x181370: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x181370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x181374: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x181374u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x181378u;
}
