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

// Function: entry_00167d94
// Address: 0x167d94 - 0x167da0
void entry_00167d94_0x167d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167d94_0x167d94");
#endif

    ctx->pc = 0x167d94u;

    // 0x167d94: 0x0  nop
    ctx->pc = 0x167d94u;
    // NOP
    // 0x167d98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x167d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x167d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167da0u;
}
