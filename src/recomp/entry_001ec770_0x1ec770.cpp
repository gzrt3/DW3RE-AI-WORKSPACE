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

// Function: entry_001ec770
// Address: 0x1ec770 - 0x1ec778
void entry_001ec770_0x1ec770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec770_0x1ec770");
#endif

    ctx->pc = 0x1ec770u;

    // 0x1ec770: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec774: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ec774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x1ec778u;
}
