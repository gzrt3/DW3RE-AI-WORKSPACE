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

// Function: FUN_0011a650
// Address: 0x11a650 - 0x11a658
void FUN_0011a650_0x11a650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011a650_0x11a650");
#endif

    ctx->pc = 0x11a650u;

    // 0x11a650: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11a650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11a654: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11a654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    ctx->pc = 0x11a658u;
}
