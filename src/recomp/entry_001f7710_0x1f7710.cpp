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

// Function: entry_001f7710
// Address: 0x1f7710 - 0x1f772c
void entry_001f7710_0x1f7710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7710_0x1f7710");
#endif

    ctx->pc = 0x1f7710u;

    // 0x1f7710: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7710u;
    {
        const bool branch_taken_0x1f7710 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7710u;
        // 0x1f7714: 0xa81821  addu        $v1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7710) {
            ctx->pc = 0x1F772Cu;
            return;
        }
    }
    ctx->pc = 0x1F7718u;
    // 0x1f7718: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f7718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f771c: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F771Cu;
    {
        const bool branch_taken_0x1f771c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1f771c) {
            ctx->pc = 0x1F7748u;
            return;
        }
    }
    ctx->pc = 0x1F7724u;
    // 0x1f7724: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F7724u;
    {
        const bool branch_taken_0x1f7724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7724u;
        // 0x1f7728: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7724) {
            ctx->pc = 0x1F7758u;
            return;
        }
    }
    ctx->pc = 0x1F772Cu;
}
