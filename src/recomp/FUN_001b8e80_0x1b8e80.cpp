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

// Function: FUN_001b8e80
// Address: 0x1b8e80 - 0x1b8ea0
void FUN_001b8e80_0x1b8e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b8e80_0x1b8e80");
#endif

    ctx->pc = 0x1b8e80u;

    // 0x1b8e80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b8e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b8e84: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x1b8e84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x1b8e88: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b8e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1b8e8c: 0x24e73520  addiu       $a3, $a3, 0x3520
    ctx->pc = 0x1b8e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13600));
    // 0x1b8e90: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b8e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1b8e94: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1b8e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b8e98: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b8e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b8e9c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1b8e9cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1b8ea0u;
}
