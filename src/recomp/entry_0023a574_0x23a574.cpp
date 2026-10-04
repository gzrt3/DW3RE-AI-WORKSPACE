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

// Function: entry_0023a574
// Address: 0x23a574 - 0x23a584
void entry_0023a574_0x23a574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a574_0x23a574");
#endif

    ctx->pc = 0x23a574u;

    // 0x23a574: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23a578: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23a578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23a57c: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23A57Cu;
    {
        const bool branch_taken_0x23a57c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A57Cu;
        // 0x23a580: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a57c) {
            ctx->pc = 0x23A5A0u;
            return;
        }
    }
    ctx->pc = 0x23A584u;
}
