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

// Function: FUN_00109210
// Address: 0x109210 - 0x109218
void FUN_00109210_0x109210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00109210_0x109210");
#endif

    ctx->pc = 0x109210u;

    // 0x109210: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x109210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x109214: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x109214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    ctx->pc = 0x109218u;
}
