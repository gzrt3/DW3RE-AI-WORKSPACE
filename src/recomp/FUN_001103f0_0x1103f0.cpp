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

// Function: FUN_001103f0
// Address: 0x1103f0 - 0x110400
void FUN_001103f0_0x1103f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001103f0_0x1103f0");
#endif

    ctx->pc = 0x1103f0u;

    // 0x1103f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1103f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1103f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1103f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1103f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1103fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1103fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110400u;
}
