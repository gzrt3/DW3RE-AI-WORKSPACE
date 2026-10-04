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

// Function: entry_00287080
// Address: 0x287080 - 0x28708c
void entry_00287080_0x287080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00287080_0x287080");
#endif

    ctx->pc = 0x287080u;

    // 0x287080: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x287080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
    // 0x287084: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x287084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
    // 0x287088: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x287088u;
    runtime->Store32(rdram, ctx, 0xB0001810u, GPR_U32(ctx, 3));
    ctx->pc = 0x28708cu;
}
