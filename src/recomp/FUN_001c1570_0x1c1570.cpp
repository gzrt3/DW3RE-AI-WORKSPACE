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

// Function: FUN_001c1570
// Address: 0x1c1570 - 0x1c1584
void FUN_001c1570_0x1c1570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c1570_0x1c1570");
#endif

    ctx->pc = 0x1c1570u;

    // 0x1c1570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c1570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c1574: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c1574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c1578: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c1578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c157c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c157cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c1580: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c1580u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c1584u;
}
