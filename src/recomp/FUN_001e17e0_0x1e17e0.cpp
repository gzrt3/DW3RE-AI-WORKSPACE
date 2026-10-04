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

// Function: FUN_001e17e0
// Address: 0x1e17e0 - 0x1e17ec
void FUN_001e17e0_0x1e17e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e17e0_0x1e17e0");
#endif

    ctx->pc = 0x1e17e0u;

    // 0x1e17e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e17e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e17e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e17e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e17e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e17e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    ctx->pc = 0x1e17ecu;
}
