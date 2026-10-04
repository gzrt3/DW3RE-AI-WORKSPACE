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

// Function: FUN_00192120
// Address: 0x192120 - 0x19212c
void FUN_00192120_0x192120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192120_0x192120");
#endif

    ctx->pc = 0x192120u;

    // 0x192120: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x192120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x192124: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x192124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x192128: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x192128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x19212cu;
}
