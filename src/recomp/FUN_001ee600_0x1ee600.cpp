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

// Function: FUN_001ee600
// Address: 0x1ee600 - 0x1ee60c
void FUN_001ee600_0x1ee600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ee600_0x1ee600");
#endif

    ctx->pc = 0x1ee600u;

    // 0x1ee600: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ee600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ee604: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
    // 0x1ee608: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1ee608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    ctx->pc = 0x1ee60cu;
}
