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

// Function: entry_001ec82c
// Address: 0x1ec82c - 0x1ec838
void entry_001ec82c_0x1ec82c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec82c_0x1ec82c");
#endif

    ctx->pc = 0x1ec82cu;

    // 0x1ec82c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ec82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec830: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec834: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ec834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ec838u;
}
