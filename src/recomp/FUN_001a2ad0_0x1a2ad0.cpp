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

// Function: FUN_001a2ad0
// Address: 0x1a2ad0 - 0x1a2adc
void FUN_001a2ad0_0x1a2ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2ad0_0x1a2ad0");
#endif

    ctx->pc = 0x1a2ad0u;

    // 0x1a2ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2ad4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1a2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1a2ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    ctx->pc = 0x1a2adcu;
}
