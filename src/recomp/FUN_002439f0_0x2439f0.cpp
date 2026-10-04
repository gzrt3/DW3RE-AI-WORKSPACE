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

// Function: FUN_002439f0
// Address: 0x2439f0 - 0x243a04
void FUN_002439f0_0x2439f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002439f0_0x2439f0");
#endif

    ctx->pc = 0x2439f0u;

    // 0x2439f0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2439f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x2439f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2439f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2439f8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2439f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2439fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2439fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243a00: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x243a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    ctx->pc = 0x243a04u;
}
