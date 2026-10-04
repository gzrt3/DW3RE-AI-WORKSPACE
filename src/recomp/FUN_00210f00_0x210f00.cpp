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

// Function: FUN_00210f00
// Address: 0x210f00 - 0x210f14
void FUN_00210f00_0x210f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00210f00_0x210f00");
#endif

    ctx->pc = 0x210f00u;

    // 0x210f00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x210f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x210f04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x210f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x210f08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x210f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x210f0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x210f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x210f10: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x210f10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x210f14u;
}
