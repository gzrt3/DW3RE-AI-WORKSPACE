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

// Function: entry_00219f40
// Address: 0x219f40 - 0x219f58
void entry_00219f40_0x219f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219f40_0x219f40");
#endif

    ctx->pc = 0x219f40u;

    // 0x219f40: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x219F40u;
    {
        const bool branch_taken_0x219f40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x219F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F40u;
        // 0x219f44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f40) {
            ctx->pc = 0x219F58u;
            return;
        }
    }
    ctx->pc = 0x219F48u;
    // 0x219f48: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x219f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x219f4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x219f50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x219F50u;
    {
        const bool branch_taken_0x219f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F50u;
        // 0x219f54: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f50) {
            ctx->pc = 0x219F90u;
            return;
        }
    }
    ctx->pc = 0x219F58u;
}
