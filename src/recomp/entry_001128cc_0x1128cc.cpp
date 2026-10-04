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

// Function: entry_001128cc
// Address: 0x1128cc - 0x1128d8
void entry_001128cc_0x1128cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001128cc_0x1128cc");
#endif

    ctx->pc = 0x1128ccu;

    // 0x1128cc: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1128ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1128d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1128d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1128d4: 0x26103ac0  addiu       $s0, $s0, 0x3AC0
    ctx->pc = 0x1128d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15040));
    ctx->pc = 0x1128d8u;
}
