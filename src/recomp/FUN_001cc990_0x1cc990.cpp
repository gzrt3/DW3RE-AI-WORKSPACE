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

// Function: FUN_001cc990
// Address: 0x1cc990 - 0x1cc9a0
void FUN_001cc990_0x1cc990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc990_0x1cc990");
#endif

    ctx->pc = 0x1cc990u;

    // 0x1cc990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cc990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cc994: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1cc994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1cc998: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cc998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cc99c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cc99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1cc9a0u;
}
