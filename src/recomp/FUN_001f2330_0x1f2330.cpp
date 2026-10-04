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

// Function: FUN_001f2330
// Address: 0x1f2330 - 0x1f233c
void FUN_001f2330_0x1f2330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f2330_0x1f2330");
#endif

    ctx->pc = 0x1f2330u;

    // 0x1f2330: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f2330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1f2334: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f2334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x1f2338: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f2338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    ctx->pc = 0x1f233cu;
}
