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

// Function: FUN_00165e30
// Address: 0x165e30 - 0x165e3c
void FUN_00165e30_0x165e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00165e30_0x165e30");
#endif

    ctx->pc = 0x165e30u;

    // 0x165e30: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x165e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x165e34: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x165e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x165e38: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x165e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    ctx->pc = 0x165e3cu;
}
