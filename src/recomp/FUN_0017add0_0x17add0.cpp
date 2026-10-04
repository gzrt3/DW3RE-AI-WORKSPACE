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

// Function: FUN_0017add0
// Address: 0x17add0 - 0x17ade0
void FUN_0017add0_0x17add0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017add0_0x17add0");
#endif

    ctx->pc = 0x17add0u;

    // 0x17add0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17add0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17add4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x17add4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x17add8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17add8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17addc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x17addcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    ctx->pc = 0x17ade0u;
}
