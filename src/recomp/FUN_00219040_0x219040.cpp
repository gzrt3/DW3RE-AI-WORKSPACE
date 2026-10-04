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

// Function: FUN_00219040
// Address: 0x219040 - 0x219060
void FUN_00219040_0x219040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00219040_0x219040");
#endif

    ctx->pc = 0x219040u;

    // 0x219040: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x219040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x219044: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x219044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x219048: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x219048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x21904c: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x21904cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x219050: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x219050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x219054: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x219054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x219058: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x219058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x21905c: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x21905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    ctx->pc = 0x219060u;
}
