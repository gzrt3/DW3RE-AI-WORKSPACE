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

// Function: FUN_00174cf0
// Address: 0x174cf0 - 0x174d04
void FUN_00174cf0_0x174cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00174cf0_0x174cf0");
#endif

    ctx->pc = 0x174cf0u;

    // 0x174cf0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x174cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x174cf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x174cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174cf8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x174cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x174cfc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x174cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x174d00: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x174d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x174d04u;
}
