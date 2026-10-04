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

// Function: entry_001981cc
// Address: 0x1981cc - 0x1981f0
void entry_001981cc_0x1981cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001981cc_0x1981cc");
#endif

    ctx->pc = 0x1981ccu;

    // 0x1981cc: 0x0  nop
    ctx->pc = 0x1981ccu;
    // NOP
    // 0x1981d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1981D0u;
    {
        const bool branch_taken_0x1981d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1981D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981D0u;
        // 0x1981d4: 0x86900  sll         $t5, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981d0) {
            ctx->pc = 0x1981F0u;
            return;
        }
    }
    ctx->pc = 0x1981D8u;
    // 0x1981d8: 0x78ec0000  lq          $t4, 0x0($a3)
    ctx->pc = 0x1981d8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1981dc: 0x8d5821  addu        $t3, $a0, $t5
    ctx->pc = 0x1981dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x1981e0: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x1981e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x1981e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1981e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1981e8: 0x7d6c0120  sq          $t4, 0x120($t3)
    ctx->pc = 0x1981e8u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 288), GPR_VEC(ctx, 12));
    // 0x1981ec: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1981ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    ctx->pc = 0x1981f0u;
}
