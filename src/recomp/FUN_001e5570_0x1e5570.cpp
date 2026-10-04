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

// Function: FUN_001e5570
// Address: 0x1e5570 - 0x1e5584
void FUN_001e5570_0x1e5570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e5570_0x1e5570");
#endif

    ctx->pc = 0x1e5570u;

    // 0x1e5570: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1e5570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1e5574: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e5574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e5578: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e5578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e557c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e557cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e5580: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e5580u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e5584u;
}
