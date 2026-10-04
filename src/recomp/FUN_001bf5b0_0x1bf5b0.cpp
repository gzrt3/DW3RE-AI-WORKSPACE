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

// Function: FUN_001bf5b0
// Address: 0x1bf5b0 - 0x1bf5c8
void FUN_001bf5b0_0x1bf5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bf5b0_0x1bf5b0");
#endif

    ctx->pc = 0x1bf5b0u;

    // 0x1bf5b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1bf5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1bf5b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bf5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf5b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1bf5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1bf5bc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1bf5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1bf5c0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1bf5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1bf5c4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1bf5c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bf5c8u;
}
