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

// Function: entry_00199d0c
// Address: 0x199d0c - 0x199d1c
void entry_00199d0c_0x199d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199d0c_0x199d0c");
#endif

    ctx->pc = 0x199d0cu;

    // 0x199d0c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199d10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x199d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x199d14: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x199d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x199d18: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x199d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    ctx->pc = 0x199d1cu;
}
