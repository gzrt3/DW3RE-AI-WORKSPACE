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

// Function: FUN_0015e910
// Address: 0x15e910 - 0x15e920
void FUN_0015e910_0x15e910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015e910_0x15e910");
#endif

    ctx->pc = 0x15e910u;

    // 0x15e910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15e910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15e914: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x15e914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x15e918: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15e918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15e91c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15e91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    ctx->pc = 0x15e920u;
}
