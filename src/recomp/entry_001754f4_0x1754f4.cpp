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

// Function: entry_001754f4
// Address: 0x1754f4 - 0x175508
void entry_001754f4_0x1754f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001754f4_0x1754f4");
#endif

    ctx->pc = 0x1754f4u;

    // 0x1754f4: 0x8c274afc  lw          $a3, 0x4AFC($at)
    ctx->pc = 0x1754f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
    // 0x1754f8: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1754F8u;
    {
        const bool branch_taken_0x1754f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1754f8) {
            ctx->pc = 0x175508u;
            return;
        }
    }
    ctx->pc = 0x175500u;
    // 0x175500: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x175500u;
    {
        const bool branch_taken_0x175500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175500u;
        // 0x175504: 0x24070578  addiu       $a3, $zero, 0x578 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175500) {
            ctx->pc = 0x1755E4u;
            return;
        }
    }
    ctx->pc = 0x175508u;
}
