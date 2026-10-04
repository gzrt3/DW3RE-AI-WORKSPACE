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

// Function: FUN_00114d00
// Address: 0x114d00 - 0x114d0c
void FUN_00114d00_0x114d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00114d00_0x114d00");
#endif

    ctx->pc = 0x114d00u;

    // 0x114d00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x114d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x114d04: 0x278380d0  addiu       $v1, $gp, -0x7F30
    ctx->pc = 0x114d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934736));
    // 0x114d08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x114d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    ctx->pc = 0x114d0cu;
}
