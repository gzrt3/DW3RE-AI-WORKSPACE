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

// Function: FUN_00181070
// Address: 0x181070 - 0x181088
void FUN_00181070_0x181070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00181070_0x181070");
#endif

    ctx->pc = 0x181070u;

    // 0x181070: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x181070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x181074: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x181074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x181078: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x181078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x18107c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18107cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x181080: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x181080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x181084: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x181084u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x181088u;
}
