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

// Function: entry_0013d738
// Address: 0x13d738 - 0x13d758
void entry_0013d738_0x13d738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d738_0x13d738");
#endif

    ctx->pc = 0x13d738u;

    // 0x13d738: 0x31030004  andi        $v1, $t0, 0x4
    ctx->pc = 0x13d738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x13d73c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D73Cu;
    {
        const bool branch_taken_0x13d73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D73Cu;
        // 0x13d740: 0x31030008  andi        $v1, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d73c) {
            ctx->pc = 0x13D758u;
            return;
        }
    }
    ctx->pc = 0x13D744u;
    // 0x13d744: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D744u;
    {
        const bool branch_taken_0x13d744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d744) {
            ctx->pc = 0x13D758u;
            return;
        }
    }
    ctx->pc = 0x13D74Cu;
    // 0x13d74c: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d74cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d750: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x13d750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x13d754: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d754u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x13d758u;
}
