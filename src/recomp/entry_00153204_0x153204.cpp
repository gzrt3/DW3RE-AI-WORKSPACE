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

// Function: entry_00153204
// Address: 0x153204 - 0x153220
void entry_00153204_0x153204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153204_0x153204");
#endif

    ctx->pc = 0x153204u;

    // 0x153204: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x153204u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x153208: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x153208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x15320c: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15320Cu;
    {
        const bool branch_taken_0x15320c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x153210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15320Cu;
        // 0x153210: 0x30830007  andi        $v1, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15320c) {
            ctx->pc = 0x153220u;
            return;
        }
    }
    ctx->pc = 0x153214u;
    // 0x153214: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x153214u;
    {
        const bool branch_taken_0x153214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x153218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153214u;
        // 0x153218: 0x331c0  sll         $a2, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153214) {
            ctx->pc = 0x153224u;
            return;
        }
    }
    ctx->pc = 0x15321Cu;
    // 0x15321c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x15321cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    ctx->pc = 0x153220u;
}
