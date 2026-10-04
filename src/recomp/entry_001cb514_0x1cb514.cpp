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

// Function: entry_001cb514
// Address: 0x1cb514 - 0x1cb530
void entry_001cb514_0x1cb514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb514_0x1cb514");
#endif

    ctx->pc = 0x1cb514u;

    // 0x1cb514: 0x90a20241  lbu         $v0, 0x241($a1)
    ctx->pc = 0x1cb514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 577)));
    // 0x1cb518: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB518u;
    {
        const bool branch_taken_0x1cb518 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb518) {
            ctx->pc = 0x1CB530u;
            return;
        }
    }
    ctx->pc = 0x1CB520u;
    // 0x1cb520: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1cb520u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cb524: 0x29220014  slti        $v0, $t1, 0x14
    ctx->pc = 0x1cb524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1cb528: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1CB528u;
    {
        const bool branch_taken_0x1cb528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB528u;
        // 0x1cb52c: 0x1091021  addu        $v0, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb528) {
            ctx->pc = 0x1CB4E8u;
            return;
        }
    }
    ctx->pc = 0x1CB530u;
}
