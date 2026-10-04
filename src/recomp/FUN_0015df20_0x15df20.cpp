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

// Function: FUN_0015df20
// Address: 0x15df20 - 0x15df30
void FUN_0015df20_0x15df20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015df20_0x15df20");
#endif

    ctx->pc = 0x15df20u;

    // 0x15df20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x15df20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x15df24: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x15df24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x15df28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15df28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x15df2c: 0x34423ffc  ori         $v0, $v0, 0x3FFC
    ctx->pc = 0x15df2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    ctx->pc = 0x15df30u;
}
