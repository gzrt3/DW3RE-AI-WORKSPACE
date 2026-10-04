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

// Function: FUN_00159b30
// Address: 0x159b30 - 0x159b3c
void FUN_00159b30_0x159b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00159b30_0x159b30");
#endif

    ctx->pc = 0x159b30u;

    // 0x159b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x159b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x159b34: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x159b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x159b38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x159b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    ctx->pc = 0x159b3cu;
}
