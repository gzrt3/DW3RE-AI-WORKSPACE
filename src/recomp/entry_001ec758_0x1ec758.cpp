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

// Function: entry_001ec758
// Address: 0x1ec758 - 0x1ec76c
void entry_001ec758_0x1ec758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec758_0x1ec758");
#endif

    ctx->pc = 0x1ec758u;

    // 0x1ec758: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC758u;
    {
        const bool branch_taken_0x1ec758 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC758u;
        // 0x1ec75c: 0x30470003  andi        $a3, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec758) {
            ctx->pc = 0x1EC76Cu;
            return;
        }
    }
    ctx->pc = 0x1EC760u;
    // 0x1ec760: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC760u;
    {
        const bool branch_taken_0x1ec760 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC760u;
        // 0x1ec764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec760) {
            ctx->pc = 0x1EC770u;
            return;
        }
    }
    ctx->pc = 0x1EC768u;
    // 0x1ec768: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x1ec768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    ctx->pc = 0x1ec76cu;
}
