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

// Function: FUN_0023f570
// Address: 0x23f570 - 0x23f580
void FUN_0023f570_0x23f570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023f570_0x23f570");
#endif

    ctx->pc = 0x23f570u;

    // 0x23f570: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23f570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x23f574: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23f574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23f578: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x23f578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x23f57c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x23f580u;
}
