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

// Function: entry_001b1a08
// Address: 0x1b1a08 - 0x1b1a30
void entry_001b1a08_0x1b1a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1a08_0x1b1a08");
#endif

    switch (ctx->pc) {
        case 0x1b1a14u: goto label_1b1a14;
        default: break;
    }

    ctx->pc = 0x1b1a08u;

    // 0x1b1a08: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1b1a08u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x1b1a0c: 0xc069ea6  jal         func_1A7A98
    ctx->pc = 0x1B1A0Cu;
    SET_GPR_U32(ctx, 31, 0x1B1A14u);
    ctx->pc = 0x1B1A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A0Cu;
    // 0x1b1a10: 0x26246200  addiu       $a0, $s1, 0x6200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 25088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7A98u, 0x1B1A0Cu, 0x1B1A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A14u;
label_1b1a14:
    // 0x1b1a14: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1B1A14u;
    {
        const bool branch_taken_0x1b1a14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A14u;
        // 0x1b1a18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a14) {
            ctx->pc = 0x1B1A48u;
            return;
        }
    }
    ctx->pc = 0x1B1A1Cu;
    // 0x1b1a1c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1A1Cu;
    {
        const bool branch_taken_0x1b1a1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a1c) {
            ctx->pc = 0x1B1A48u;
            return;
        }
    }
    ctx->pc = 0x1B1A24u;
    // 0x1b1a24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1A24u;
    {
        const bool branch_taken_0x1b1a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a24) {
            ctx->pc = 0x1B1A38u;
            return;
        }
    }
    ctx->pc = 0x1B1A2Cu;
    // 0x1b1a2c: 0x0  nop
    ctx->pc = 0x1b1a2cu;
    // NOP
    ctx->pc = 0x1b1a30u;
}
