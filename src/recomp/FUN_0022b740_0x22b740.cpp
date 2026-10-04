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

// Function: FUN_0022b740
// Address: 0x22b740 - 0x22b758
void FUN_0022b740_0x22b740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022b740_0x22b740");
#endif

    ctx->pc = 0x22b740u;

    // 0x22b740: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x22b740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x22b744: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22b744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x22b748: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x22b748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x22b74c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22b750: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x22b750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x22b754: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x22b754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    ctx->pc = 0x22b758u;
}
