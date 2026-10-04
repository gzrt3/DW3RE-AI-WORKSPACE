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

// Function: FUN_0015ce00
// Address: 0x15ce00 - 0x15ce14
void FUN_0015ce00_0x15ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015ce00_0x15ce00");
#endif

    ctx->pc = 0x15ce00u;

    // 0x15ce00: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x15ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x15ce04: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ce04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15ce08: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15ce08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x15ce0c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15ce0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15ce10: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15ce10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x15ce14u;
}
