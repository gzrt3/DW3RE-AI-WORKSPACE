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

// Function: FUN_00132fe0
// Address: 0x132fe0 - 0x132fec
void FUN_00132fe0_0x132fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00132fe0_0x132fe0");
#endif

    ctx->pc = 0x132fe0u;

    // 0x132fe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x132fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x132fe4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x132fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x132fe8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x132fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x132fecu;
}
