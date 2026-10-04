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

// Function: FUN_00163420
// Address: 0x163420 - 0x163430
void FUN_00163420_0x163420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00163420_0x163420");
#endif

    ctx->pc = 0x163420u;

    // 0x163420: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x163420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x163424: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x163424u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163428: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x163428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x16342c: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x16342cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163430u;
}
