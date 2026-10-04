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

// Function: FUN_001f7240
// Address: 0x1f7240 - 0x1f724c
void FUN_001f7240_0x1f7240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f7240_0x1f7240");
#endif

    ctx->pc = 0x1f7240u;

    // 0x1f7240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f7240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f7244: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f7244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7248: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f7248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    ctx->pc = 0x1f724cu;
}
