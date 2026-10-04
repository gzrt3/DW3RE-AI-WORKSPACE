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

// Function: FUN_001f5030
// Address: 0x1f5030 - 0x1f5040
void FUN_001f5030_0x1f5030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f5030_0x1f5030");
#endif

    ctx->pc = 0x1f5030u;

    // 0x1f5030: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f5030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1f5034: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f5034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1f5038: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f5038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1f503c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f503cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x1f5040u;
}
