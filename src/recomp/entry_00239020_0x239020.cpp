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

// Function: entry_00239020
// Address: 0x239020 - 0x239038
void entry_00239020_0x239020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239020_0x239020");
#endif

    switch (ctx->pc) {
        case 0x239028u: goto label_239028;
        default: break;
    }

    ctx->pc = 0x239020u;

    // 0x239020: 0xc08fcc6  jal         func_23F318
    ctx->pc = 0x239020u;
    SET_GPR_U32(ctx, 31, 0x239028u);
    ctx->pc = 0x23F318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F318u, 0x239020u, 0x239028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239028u;
label_239028:
    // 0x239028: 0x144000d4  bnez        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x239028u;
    {
        const bool branch_taken_0x239028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239028u;
        // 0x23902c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239028) {
            ctx->pc = 0x23937Cu;
            return;
        }
    }
    ctx->pc = 0x239030u;
    // 0x239030: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x239030u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x239034: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x239034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    ctx->pc = 0x239038u;
}
