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

// Function: entry_001a1200
// Address: 0x1a1200 - 0x1a120c
void entry_001a1200_0x1a1200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1200_0x1a1200");
#endif

    ctx->pc = 0x1a1200u;

    // 0x1a1200: 0xf  sync
    ctx->pc = 0x1a1200u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a1204: 0x42000038  ei
    ctx->pc = 0x1a1204u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1a1208: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a120cu;
}
