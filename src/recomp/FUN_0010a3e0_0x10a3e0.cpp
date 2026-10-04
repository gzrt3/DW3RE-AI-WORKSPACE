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

// Function: FUN_0010a3e0
// Address: 0x10a3e0 - 0x10a3f8
void FUN_0010a3e0_0x10a3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010a3e0_0x10a3e0");
#endif

    ctx->pc = 0x10a3e0u;

    // 0x10a3e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x10a3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10a3e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10a3e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a3e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x10a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10a3ec: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x10a3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x10a3f0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x10a3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x10a3f4: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x10a3f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10a3f8u;
}
