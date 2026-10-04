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

// Function: FUN_001f1b10
// Address: 0x1f1b10 - 0x1f1b20
void FUN_001f1b10_0x1f1b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f1b10_0x1f1b10");
#endif

    ctx->pc = 0x1f1b10u;

    // 0x1f1b10: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f1b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1f1b14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1b18: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f1b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1f1b1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f1b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1f1b20u;
}
