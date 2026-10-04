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

// Function: FUN_00189870
// Address: 0x189870 - 0x189880
void FUN_00189870_0x189870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00189870_0x189870");
#endif

    ctx->pc = 0x189870u;

    // 0x189870: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x189870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x189874: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x189874u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x189878: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x189878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18987c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x18987cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x189880u;
}
