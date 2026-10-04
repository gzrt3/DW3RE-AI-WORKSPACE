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

// Function: entry_0013488c
// Address: 0x13488c - 0x1348a4
void entry_0013488c_0x13488c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013488c_0x13488c");
#endif

    ctx->pc = 0x13488cu;

    // 0x13488c: 0x0  nop
    ctx->pc = 0x13488cu;
    // NOP
    // 0x134890: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134890u;
    {
        const bool branch_taken_0x134890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x134890) {
            ctx->pc = 0x1348A4u;
            return;
        }
    }
    ctx->pc = 0x134898u;
    // 0x134898: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x134898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13489c: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x13489Cu;
    {
        const bool branch_taken_0x13489c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1348A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13489Cu;
        // 0x1348a0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13489c) {
            ctx->pc = 0x1347FCu;
            return;
        }
    }
    ctx->pc = 0x1348A4u;
}
