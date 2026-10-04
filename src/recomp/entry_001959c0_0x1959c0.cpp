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

// Function: entry_001959c0
// Address: 0x1959c0 - 0x1959cc
void entry_001959c0_0x1959c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001959c0_0x1959c0");
#endif

    ctx->pc = 0x1959c0u;

    // 0x1959c0: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1959c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1959c4: 0x2610a4c0  addiu       $s0, $s0, -0x5B40
    ctx->pc = 0x1959c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943936));
    // 0x1959c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1959c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1959ccu;
}
