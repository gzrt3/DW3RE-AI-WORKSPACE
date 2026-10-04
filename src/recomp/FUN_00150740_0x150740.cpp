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

// Function: FUN_00150740
// Address: 0x150740 - 0x150750
void FUN_00150740_0x150740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00150740_0x150740");
#endif

    ctx->pc = 0x150740u;

    // 0x150740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x150740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x150744: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x150744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x150748: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x150748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15074c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15074cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x150750u;
}
