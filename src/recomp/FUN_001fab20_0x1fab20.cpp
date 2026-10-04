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

// Function: FUN_001fab20
// Address: 0x1fab20 - 0x1fab38
void FUN_001fab20_0x1fab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fab20_0x1fab20");
#endif

    ctx->pc = 0x1fab20u;

    // 0x1fab20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1fab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1fab24: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1fab24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1fab28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fab28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fab2c: 0x2442c540  addiu       $v0, $v0, -0x3AC0
    ctx->pc = 0x1fab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952256));
    // 0x1fab30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fab30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fab34: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1fab34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1fab38u;
}
