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

// Function: entry_00134e0c
// Address: 0x134e0c - 0x134e20
void entry_00134e0c_0x134e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134e0c_0x134e0c");
#endif

    ctx->pc = 0x134e0cu;

    // 0x134e0c: 0x0  nop
    ctx->pc = 0x134e0cu;
    // NOP
    // 0x134e10: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x134e10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x134e14: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x134e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x134e18: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x134E18u;
    {
        const bool branch_taken_0x134e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E18u;
        // 0x134e1c: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e18) {
            ctx->pc = 0x134E40u;
            return;
        }
    }
    ctx->pc = 0x134E20u;
}
