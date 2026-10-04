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

// Function: FUN_00153720
// Address: 0x153720 - 0x153730
void FUN_00153720_0x153720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00153720_0x153720");
#endif

    ctx->pc = 0x153720u;

    // 0x153720: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x153720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x153724: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x153724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x153728: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x153728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x15372c: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x15372cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    ctx->pc = 0x153730u;
}
