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

// Function: entry_00151738
// Address: 0x151738 - 0x151754
void entry_00151738_0x151738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151738_0x151738");
#endif

    ctx->pc = 0x151738u;

    // 0x151738: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x151738u;
    {
        const bool branch_taken_0x151738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151738u;
        // 0x15173c: 0x618c3  sra         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151738) {
            ctx->pc = 0x151768u;
            return;
        }
    }
    ctx->pc = 0x151740u;
    // 0x151740: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x151740u;
    {
        const bool branch_taken_0x151740 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x151744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151740u;
        // 0x151744: 0xa3082a  slt         $at, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151740) {
            ctx->pc = 0x151754u;
            return;
        }
    }
    ctx->pc = 0x151748u;
    // 0x151748: 0x24c30007  addiu       $v1, $a2, 0x7
    ctx->pc = 0x151748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x15174c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x15174cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x151750: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x151750u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x151754u;
}
