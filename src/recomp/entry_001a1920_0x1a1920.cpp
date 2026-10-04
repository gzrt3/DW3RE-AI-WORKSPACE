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

// Function: entry_001a1920
// Address: 0x1a1920 - 0x1a1930
void entry_001a1920_0x1a1920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1920_0x1a1920");
#endif

    ctx->pc = 0x1a1920u;

    // 0x1a1920: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1a1920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1924: 0x80685ea  j           func_1A17A8
    ctx->pc = 0x1A1924u;
    ctx->pc = 0x1A1928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1924u;
    // 0x1a1928: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A17A8u;
    FUN_001a17a8_0x1a17a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1A192Cu;
    // 0x1a192c: 0x0  nop
    ctx->pc = 0x1a192cu;
    // NOP
    ctx->pc = 0x1a1930u;
}
