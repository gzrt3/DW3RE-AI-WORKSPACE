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

// Function: FUN_001260b0
// Address: 0x1260b0 - 0x1260d0
void FUN_001260b0_0x1260b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001260b0_0x1260b0");
#endif

    ctx->pc = 0x1260b0u;

    // 0x1260b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1260b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1260b4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1260b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1260b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1260b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1260bc: 0x2442fa90  addiu       $v0, $v0, -0x570
    ctx->pc = 0x1260bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965904));
    // 0x1260c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1260c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1260c4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1260c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1260c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1260c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1260cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1260ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1260d0u;
}
