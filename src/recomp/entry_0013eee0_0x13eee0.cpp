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

// Function: entry_0013eee0
// Address: 0x13eee0 - 0x13eef0
void entry_0013eee0_0x13eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eee0_0x13eee0");
#endif

    ctx->pc = 0x13eee0u;

    // 0x13eee0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13eee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eee4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13eee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eee8: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x13eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x13eeec: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x13eeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    ctx->pc = 0x13eef0u;
}
