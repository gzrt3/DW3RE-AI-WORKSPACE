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

// Function: entry_0014053c
// Address: 0x14053c - 0x140560
void entry_0014053c_0x14053c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014053c_0x14053c");
#endif

    ctx->pc = 0x14053cu;

    // 0x14053c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x14053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x140540: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140544: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x140544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x140548: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x140548u;
    {
        const bool branch_taken_0x140548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140548) {
            ctx->pc = 0x140560u;
            return;
        }
    }
    ctx->pc = 0x140550u;
    // 0x140550: 0x860201a8  lh          $v0, 0x1A8($s0)
    ctx->pc = 0x140550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x140554: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140558: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x140558u;
    {
        const bool branch_taken_0x140558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140558u;
        // 0x14055c: 0xa60201a8  sh          $v0, 0x1A8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 424), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140558) {
            ctx->pc = 0x140564u;
            return;
        }
    }
    ctx->pc = 0x140560u;
}
