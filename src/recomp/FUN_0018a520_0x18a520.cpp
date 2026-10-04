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

// Function: FUN_0018a520
// Address: 0x18a520 - 0x18a52c
void FUN_0018a520_0x18a520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a520_0x18a520");
#endif

    ctx->pc = 0x18a520u;

    // 0x18a520: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18a524: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x18a524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x18a528: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18a528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    ctx->pc = 0x18a52cu;
}
