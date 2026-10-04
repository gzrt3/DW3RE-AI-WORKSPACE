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

// Function: FUN_00130b50
// Address: 0x130b50 - 0x130b60
void FUN_00130b50_0x130b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130b50_0x130b50");
#endif

    ctx->pc = 0x130b50u;

    // 0x130b50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x130b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x130b54: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x130b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x130b58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x130b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x130b5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x130b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130b60u;
}
