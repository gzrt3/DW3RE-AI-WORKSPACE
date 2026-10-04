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

// Function: FUN_001a51b0
// Address: 0x1a51b0 - 0x1a51c4
void FUN_001a51b0_0x1a51b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a51b0_0x1a51b0");
#endif

    ctx->pc = 0x1a51b0u;

    // 0x1a51b0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1a51b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x1a51b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a51b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a51b8: 0x34e7f000  ori         $a3, $a3, 0xF000
    ctx->pc = 0x1a51b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)61440);
    // 0x1a51bc: 0x0  nop
    ctx->pc = 0x1a51bcu;
    // NOP
    // 0x1a51c0: 0xf  sync
    ctx->pc = 0x1a51c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x1a51c4u;
}
