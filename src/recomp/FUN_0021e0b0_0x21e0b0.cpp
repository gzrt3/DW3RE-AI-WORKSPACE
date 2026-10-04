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

// Function: FUN_0021e0b0
// Address: 0x21e0b0 - 0x21e0c4
void FUN_0021e0b0_0x21e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021e0b0_0x21e0b0");
#endif

    ctx->pc = 0x21e0b0u;

    // 0x21e0b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x21e0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x21e0b4: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x21e0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x21e0b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x21e0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x21e0bc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x21e0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x21e0c0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21e0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x21e0c4u;
}
