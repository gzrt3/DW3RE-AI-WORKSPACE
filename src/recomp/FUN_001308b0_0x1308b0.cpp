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

// Function: FUN_001308b0
// Address: 0x1308b0 - 0x1308c0
void FUN_001308b0_0x1308b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001308b0_0x1308b0");
#endif

    ctx->pc = 0x1308b0u;

    // 0x1308b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1308b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1308b4: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x1308b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x1308b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1308b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1308bc: 0x2463a43c  addiu       $v1, $v1, -0x5BC4
    ctx->pc = 0x1308bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943804));
    ctx->pc = 0x1308c0u;
}
