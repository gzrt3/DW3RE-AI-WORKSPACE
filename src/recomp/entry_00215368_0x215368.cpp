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

// Function: entry_00215368
// Address: 0x215368 - 0x215388
void entry_00215368_0x215368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215368_0x215368");
#endif

    ctx->pc = 0x215368u;

    // 0x215368: 0x8f8491d4  lw          $a0, -0x6E2C($gp)
    ctx->pc = 0x215368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939092)));
    // 0x21536c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21536cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215370: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215370u;
    {
        const bool branch_taken_0x215370 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x215374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215370u;
        // 0x215374: 0xac2578ec  sw          $a1, 0x78EC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 30956), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215370) {
            ctx->pc = 0x215388u;
            return;
        }
    }
    ctx->pc = 0x215378u;
    // 0x215378: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x215378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x21537c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x21537cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215380: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x215380u;
    {
        const bool branch_taken_0x215380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215380u;
        // 0x215384: 0x833021  addu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215380) {
            ctx->pc = 0x215390u;
            return;
        }
    }
    ctx->pc = 0x215388u;
}
