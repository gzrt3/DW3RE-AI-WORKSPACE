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

// Function: FUN_001a72d8
// Address: 0x1a72d8 - 0x1a72ec
void FUN_001a72d8_0x1a72d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a72d8_0x1a72d8");
#endif

    ctx->pc = 0x1a72d8u;

    // 0x1a72d8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1a72d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a72dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a72dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a72e0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1a72e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1a72e4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1a72e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1a72e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a72e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    ctx->pc = 0x1a72ecu;
}
