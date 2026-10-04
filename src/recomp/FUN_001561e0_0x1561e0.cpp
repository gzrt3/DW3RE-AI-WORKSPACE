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

// Function: FUN_001561e0
// Address: 0x1561e0 - 0x1561ec
void FUN_001561e0_0x1561e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001561e0_0x1561e0");
#endif

    ctx->pc = 0x1561e0u;

    // 0x1561e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1561e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1561e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1561e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1561e8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1561e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    ctx->pc = 0x1561ecu;
}
