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

// Function: FUN_0014b610
// Address: 0x14b610 - 0x14b618
void FUN_0014b610_0x14b610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014b610_0x14b610");
#endif

    ctx->pc = 0x14b610u;

    // 0x14b610: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x14b610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x14b614: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x14b614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    ctx->pc = 0x14b618u;
}
