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

// Function: entry_0020fc70
// Address: 0x20fc70 - 0x20fc7c
void entry_0020fc70_0x20fc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fc70_0x20fc70");
#endif

    ctx->pc = 0x20fc70u;

    // 0x20fc70: 0xa0c4000b  sb          $a0, 0xB($a2)
    ctx->pc = 0x20fc70u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 4));
    // 0x20fc74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20fc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20fc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20fc7cu;
}
