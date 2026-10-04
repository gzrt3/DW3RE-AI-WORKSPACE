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

// Function: FUN_00214bb0
// Address: 0x214bb0 - 0x214bc4
void FUN_00214bb0_0x214bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00214bb0_0x214bb0");
#endif

    ctx->pc = 0x214bb0u;

    // 0x214bb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x214bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x214bb4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x214bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x214bb8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x214bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x214bbc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x214bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x214bc0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x214bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x214bc4u;
}
