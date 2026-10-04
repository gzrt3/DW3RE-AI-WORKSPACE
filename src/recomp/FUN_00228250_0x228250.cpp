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

// Function: FUN_00228250
// Address: 0x228250 - 0x228258
void FUN_00228250_0x228250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00228250_0x228250");
#endif

    ctx->pc = 0x228250u;

    // 0x228250: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x228250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x228254: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x228254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    ctx->pc = 0x228258u;
}
