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

// Function: FUN_002189c0
// Address: 0x2189c0 - 0x2189d4
void FUN_002189c0_0x2189c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002189c0_0x2189c0");
#endif

    ctx->pc = 0x2189c0u;

    // 0x2189c0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2189c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x2189c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2189c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2189c8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2189c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2189cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2189ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2189d0: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x2189d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    ctx->pc = 0x2189d4u;
}
