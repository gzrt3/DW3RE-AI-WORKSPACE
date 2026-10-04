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

// Function: entry_00239ab8
// Address: 0x239ab8 - 0x239ad0
void entry_00239ab8_0x239ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239ab8_0x239ab8");
#endif

    ctx->pc = 0x239ab8u;

    // 0x239ab8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x239ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x239abc: 0x14550004  bne         $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x239ABCu;
    {
        const bool branch_taken_0x239abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x239AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239ABCu;
        // 0x239ac0: 0x2301023  subu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239abc) {
            ctx->pc = 0x239AD0u;
            return;
        }
    }
    ctx->pc = 0x239AC4u;
    // 0x239ac4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x239AC4u;
    {
        const bool branch_taken_0x239ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AC4u;
        // 0x239ac8: 0xaed10000  sw          $s1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ac4) {
            ctx->pc = 0x239AD8u;
            return;
        }
    }
    ctx->pc = 0x239ACCu;
    // 0x239acc: 0x0  nop
    ctx->pc = 0x239accu;
    // NOP
    ctx->pc = 0x239ad0u;
}
