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

// Function: entry_0013d4e0
// Address: 0x13d4e0 - 0x13d4f0
void entry_0013d4e0_0x13d4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d4e0_0x13d4e0");
#endif

    ctx->pc = 0x13d4e0u;

    // 0x13d4e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d4e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13d4e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4e8: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x13d4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x13d4ec: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x13d4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    ctx->pc = 0x13d4f0u;
}
