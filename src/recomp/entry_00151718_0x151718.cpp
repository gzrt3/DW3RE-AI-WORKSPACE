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

// Function: entry_00151718
// Address: 0x151718 - 0x151734
void entry_00151718_0x151718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151718_0x151718");
#endif

    ctx->pc = 0x151718u;

    // 0x151718: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x151718u;
    {
        const bool branch_taken_0x151718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151718u;
        // 0x15171c: 0x30850003  andi        $a1, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151718) {
            ctx->pc = 0x151768u;
            return;
        }
    }
    ctx->pc = 0x151720u;
    // 0x151720: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x151720u;
    {
        const bool branch_taken_0x151720 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x151724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151720u;
        // 0x151724: 0x28a10003  slti        $at, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151720) {
            ctx->pc = 0x151738u;
            return;
        }
    }
    ctx->pc = 0x151728u;
    // 0x151728: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x151728u;
    {
        const bool branch_taken_0x151728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x151728) {
            ctx->pc = 0x151734u;
            return;
        }
    }
    ctx->pc = 0x151730u;
    // 0x151730: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x151730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    ctx->pc = 0x151734u;
}
