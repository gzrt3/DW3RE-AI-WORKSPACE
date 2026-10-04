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

// Function: FUN_001bca90
// Address: 0x1bca90 - 0x1bcaa0
void FUN_001bca90_0x1bca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bca90_0x1bca90");
#endif

    ctx->pc = 0x1bca90u;

    // 0x1bca90: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1bca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1bca94: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1bca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1bca98: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1bca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1bca9c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1bca9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x1bcaa0u;
}
