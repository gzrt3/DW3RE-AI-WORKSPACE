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

// Function: entry_00198d3c
// Address: 0x198d3c - 0x198d4c
void entry_00198d3c_0x198d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198d3c_0x198d3c");
#endif

    ctx->pc = 0x198d3cu;

    // 0x198d3c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x198d40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x198d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x198d44: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x198d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x198d48: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x198d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    ctx->pc = 0x198d4cu;
}
