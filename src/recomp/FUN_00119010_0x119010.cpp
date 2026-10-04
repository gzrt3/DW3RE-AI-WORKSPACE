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

// Function: FUN_00119010
// Address: 0x119010 - 0x119020
void FUN_00119010_0x119010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119010_0x119010");
#endif

    ctx->pc = 0x119010u;

    // 0x119010: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x119010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x119014: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x119014u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x119018: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x119018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x11901c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x11901cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    ctx->pc = 0x119020u;
}
