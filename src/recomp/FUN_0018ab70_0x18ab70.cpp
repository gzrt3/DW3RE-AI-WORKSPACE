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

// Function: FUN_0018ab70
// Address: 0x18ab70 - 0x18ab7c
void FUN_0018ab70_0x18ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018ab70_0x18ab70");
#endif

    ctx->pc = 0x18ab70u;

    // 0x18ab70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18ab74: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18ab78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18ab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    ctx->pc = 0x18ab7cu;
}
