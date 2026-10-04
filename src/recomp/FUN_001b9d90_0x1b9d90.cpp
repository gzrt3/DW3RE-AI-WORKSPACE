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

// Function: FUN_001b9d90
// Address: 0x1b9d90 - 0x1b9da8
void FUN_001b9d90_0x1b9d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b9d90_0x1b9d90");
#endif

    ctx->pc = 0x1b9d90u;

    // 0x1b9d90: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1b9d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1b9d94: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x1b9d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1b9d98: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b9d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1b9d9c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b9d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1b9da0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b9da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b9da4: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x1b9da4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b9da8u;
}
