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

// Function: entry_00164894
// Address: 0x164894 - 0x1648a8
void entry_00164894_0x164894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164894_0x164894");
#endif

    ctx->pc = 0x164894u;

    // 0x164894: 0x14c70004  bne         $a2, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x164894u;
    {
        const bool branch_taken_0x164894 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x164894) {
            ctx->pc = 0x1648A8u;
            return;
        }
    }
    ctx->pc = 0x16489Cu;
    // 0x16489c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16489cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1648A0u;
    {
        const bool branch_taken_0x1648a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648A0u;
        // 0x1648a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648a0) {
            ctx->pc = 0x1648E8u;
            return;
        }
    }
    ctx->pc = 0x1648A8u;
}
