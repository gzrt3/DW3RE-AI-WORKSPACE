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

// Function: entry_0023a8c4
// Address: 0x23a8c4 - 0x23a8d0
void entry_0023a8c4_0x23a8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a8c4_0x23a8c4");
#endif

    ctx->pc = 0x23a8c4u;

    // 0x23a8c4: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x23a8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x23a8c8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x23a8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a8cc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x23a8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x23a8d0u;
}
