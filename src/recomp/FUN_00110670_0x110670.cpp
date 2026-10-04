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

// Function: FUN_00110670
// Address: 0x110670 - 0x11067c
void FUN_00110670_0x110670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00110670_0x110670");
#endif

    ctx->pc = 0x110670u;

    // 0x110670: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x110670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x110674: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x110674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x110678: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x110678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x11067cu;
}
