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

// Function: FUN_0010d0c0
// Address: 0x10d0c0 - 0x10d0c8
void FUN_0010d0c0_0x10d0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010d0c0_0x10d0c0");
#endif

    ctx->pc = 0x10d0c0u;

    // 0x10d0c0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x10d0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x10d0c4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x10d0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    ctx->pc = 0x10d0c8u;
}
