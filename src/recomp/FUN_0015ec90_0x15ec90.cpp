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

// Function: FUN_0015ec90
// Address: 0x15ec90 - 0x15eca4
void FUN_0015ec90_0x15ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015ec90_0x15ec90");
#endif

    ctx->pc = 0x15ec90u;

    // 0x15ec90: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15ec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x15ec94: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ec94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15ec98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15ec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x15ec9c: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x15ec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x15eca0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15eca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x15eca4u;
}
