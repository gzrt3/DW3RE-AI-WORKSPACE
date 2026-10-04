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

// Function: FUN_001617c0
// Address: 0x1617c0 - 0x1617d0
void FUN_001617c0_0x1617c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001617c0_0x1617c0");
#endif

    ctx->pc = 0x1617c0u;

    // 0x1617c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1617c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1617c4: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x1617c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x1617c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1617c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1617cc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1617ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    ctx->pc = 0x1617d0u;
}
