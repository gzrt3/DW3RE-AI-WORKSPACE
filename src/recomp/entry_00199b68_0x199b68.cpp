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

// Function: entry_00199b68
// Address: 0x199b68 - 0x199b78
void entry_00199b68_0x199b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199b68_0x199b68");
#endif

    ctx->pc = 0x199b68u;

    // 0x199b68: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199b6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x199b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x199b70: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x199b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x199b74: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x199b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    ctx->pc = 0x199b78u;
}
