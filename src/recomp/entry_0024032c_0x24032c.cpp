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

// Function: entry_0024032c
// Address: 0x24032c - 0x240350
void entry_0024032c_0x24032c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024032c_0x24032c");
#endif

    ctx->pc = 0x24032cu;

    // 0x24032c: 0x0  nop
    ctx->pc = 0x24032cu;
    // NOP
    // 0x240330: 0x29810009  slti        $at, $t4, 0x9
    ctx->pc = 0x240330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x240334: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x240334u;
    {
        const bool branch_taken_0x240334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240334u;
        // 0x240338: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240334) {
            ctx->pc = 0x240350u;
            return;
        }
    }
    ctx->pc = 0x24033Cu;
    // 0x24033c: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x24033cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x240340: 0x8dc30168  lw          $v1, 0x168($t6)
    ctx->pc = 0x240340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 360)));
    // 0x240344: 0xadc30170  sw          $v1, 0x170($t6)
    ctx->pc = 0x240344u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 368), GPR_U32(ctx, 3));
    // 0x240348: 0x8dc30164  lw          $v1, 0x164($t6)
    ctx->pc = 0x240348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 356)));
    // 0x24034c: 0xadc3016c  sw          $v1, 0x16C($t6)
    ctx->pc = 0x24034cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 364), GPR_U32(ctx, 3));
    ctx->pc = 0x240350u;
}
