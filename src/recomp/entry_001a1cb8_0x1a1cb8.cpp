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

// Function: entry_001a1cb8
// Address: 0x1a1cb8 - 0x1a1cc4
void entry_001a1cb8_0x1a1cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1cb8_0x1a1cb8");
#endif

    ctx->pc = 0x1a1cb8u;

    // 0x1a1cb8: 0x10b0c0  sll         $s6, $s0, 3
    ctx->pc = 0x1a1cb8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a1cbc: 0x0  nop
    ctx->pc = 0x1a1cbcu;
    // NOP
    // 0x1a1cc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a1cc4u;
}
