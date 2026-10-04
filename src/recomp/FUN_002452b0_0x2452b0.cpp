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

// Function: FUN_002452b0
// Address: 0x2452b0 - 0x2452c0
void FUN_002452b0_0x2452b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002452b0_0x2452b0");
#endif

    ctx->pc = 0x2452b0u;

    // 0x2452b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2452b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2452b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2452b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2452b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2452bc: 0x29010013  slti        $at, $t0, 0x13
    ctx->pc = 0x2452bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)19) ? 1 : 0);
    ctx->pc = 0x2452c0u;
}
