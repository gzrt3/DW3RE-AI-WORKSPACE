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

// Function: FUN_001cc740
// Address: 0x1cc740 - 0x1cc750
void FUN_001cc740_0x1cc740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc740_0x1cc740");
#endif

    ctx->pc = 0x1cc740u;

    // 0x1cc740: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1cc740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1cc744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc748: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1cc748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1cc74c: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1cc74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    ctx->pc = 0x1cc750u;
}
