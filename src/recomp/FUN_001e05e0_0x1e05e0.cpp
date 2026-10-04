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

// Function: FUN_001e05e0
// Address: 0x1e05e0 - 0x1e05f0
void FUN_001e05e0_0x1e05e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e05e0_0x1e05e0");
#endif

    ctx->pc = 0x1e05e0u;

    // 0x1e05e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e05e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e05e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e05e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1e05e8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1e05e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1e05ec: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1e05ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    ctx->pc = 0x1e05f0u;
}
