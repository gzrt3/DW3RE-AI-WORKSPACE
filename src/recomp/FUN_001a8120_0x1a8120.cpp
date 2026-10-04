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

// Function: FUN_001a8120
// Address: 0x1a8120 - 0x1a8138
void FUN_001a8120_0x1a8120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a8120_0x1a8120");
#endif

    ctx->pc = 0x1a8120u;

    // 0x1a8120: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a8120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a8124: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a8128: 0x24463ec0  addiu       $a2, $v0, 0x3EC0
    ctx->pc = 0x1a8128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16064));
    // 0x1a812c: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x1a812cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x1a8130: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a8130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a8134: 0xc72825  or          $a1, $a2, $a3
    ctx->pc = 0x1a8134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->pc = 0x1a8138u;
}
