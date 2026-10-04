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

// Function: FUN_001f7d10
// Address: 0x1f7d10 - 0x1f7d30
void FUN_001f7d10_0x1f7d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f7d10_0x1f7d10");
#endif

    ctx->pc = 0x1f7d10u;

    // 0x1f7d10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f7d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f7d14: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1f7d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1f7d18: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f7d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1f7d1c: 0x34643ffc  ori         $a0, $v1, 0x3FFC
    ctx->pc = 0x1f7d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
    // 0x1f7d20: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f7d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1f7d24: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1f7d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1f7d28: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f7d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1f7d2c: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1f7d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
    ctx->pc = 0x1f7d30u;
}
