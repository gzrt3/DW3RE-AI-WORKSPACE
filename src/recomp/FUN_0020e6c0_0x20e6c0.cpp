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

// Function: FUN_0020e6c0
// Address: 0x20e6c0 - 0x20e6c8
void FUN_0020e6c0_0x20e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020e6c0_0x20e6c0");
#endif

    ctx->pc = 0x20e6c0u;

    // 0x20e6c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20e6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20e6c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20e6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    ctx->pc = 0x20e6c8u;
}
