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

// Function: entry_0023b044
// Address: 0x23b044 - 0x23b060
void entry_0023b044_0x23b044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b044_0x23b044");
#endif

    switch (ctx->pc) {
        case 0x23b04cu: goto label_23b04c;
        default: break;
    }

    ctx->pc = 0x23b044u;

    // 0x23b044: 0xc08ea10  jal         func_23A840
    ctx->pc = 0x23B044u;
    SET_GPR_U32(ctx, 31, 0x23B04Cu);
    ctx->pc = 0x23B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B044u;
    // 0x23b048: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A840u, 0x23B044u, 0x23B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B04Cu;
label_23b04c:
    // 0x23b04c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23b04cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b050: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x23B050u;
    {
        const bool branch_taken_0x23b050 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x23B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B050u;
        // 0x23b054: 0x26870014  addiu       $a3, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b050) {
            ctx->pc = 0x23B07Cu;
            return;
        }
    }
    ctx->pc = 0x23B058u;
    // 0x23b058: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23b058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b05c: 0x0  nop
    ctx->pc = 0x23b05cu;
    // NOP
    ctx->pc = 0x23b060u;
}
