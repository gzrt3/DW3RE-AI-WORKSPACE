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

// Function: FUN_00193e00
// Address: 0x193e00 - 0x193e10
void FUN_00193e00_0x193e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00193e00_0x193e00");
#endif

    ctx->pc = 0x193e00u;

    // 0x193e00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x193e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x193e04: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x193e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x193e08: 0x24632fb0  addiu       $v1, $v1, 0x2FB0
    ctx->pc = 0x193e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12208));
    // 0x193e0c: 0x27a40000  addiu       $a0, $sp, 0x0
    ctx->pc = 0x193e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    ctx->pc = 0x193e10u;
}
