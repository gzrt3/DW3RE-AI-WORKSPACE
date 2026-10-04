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

// Function: entry_00235d08
// Address: 0x235d08 - 0x235d18
void entry_00235d08_0x235d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235d08_0x235d08");
#endif

    switch (ctx->pc) {
        case 0x235d10u: goto label_235d10;
        default: break;
    }

    ctx->pc = 0x235d08u;

    // 0x235d08: 0xc069ea6  jal         func_1A7A98
    ctx->pc = 0x235D08u;
    SET_GPR_U32(ctx, 31, 0x235D10u);
    ctx->pc = 0x235D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D08u;
    // 0x235d0c: 0x2624b2c0  addiu       $a0, $s1, -0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7A98u, 0x235D08u, 0x235D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D10u;
label_235d10:
    // 0x235d10: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x235D10u;
    {
        const bool branch_taken_0x235d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D10u;
        // 0x235d14: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d10) {
            ctx->pc = 0x235D00u;
            return;
        }
    }
    ctx->pc = 0x235D18u;
}
