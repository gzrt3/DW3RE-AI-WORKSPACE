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

// Function: FUN_0013c660
// Address: 0x13c660 - 0x13c668
void FUN_0013c660_0x13c660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013c660_0x13c660");
#endif

    ctx->pc = 0x13c660u;

    // 0x13c660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13c660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13c664: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13c664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    ctx->pc = 0x13c668u;
}
