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

// Function: FUN_002149f0
// Address: 0x2149f0 - 0x214a04
void FUN_002149f0_0x2149f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002149f0_0x2149f0");
#endif

    ctx->pc = 0x2149f0u;

    // 0x2149f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2149f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2149f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2149f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2149f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2149f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2149fc: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2149fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x214a00: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x214a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    ctx->pc = 0x214a04u;
}
