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

// Function: entry_0019fb00
// Address: 0x19fb00 - 0x19fb28
void entry_0019fb00_0x19fb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fb00_0x19fb00");
#endif

    switch (ctx->pc) {
        case 0x19fb14u: goto label_19fb14;
        case 0x19fb24u: goto label_19fb24;
        default: break;
    }

    ctx->pc = 0x19fb00u;

    // 0x19fb00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19fb04: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19FB04u;
    {
        const bool branch_taken_0x19fb04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19FB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB04u;
        // 0x19fb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb04) {
            ctx->pc = 0x19FB28u;
            return;
        }
    }
    ctx->pc = 0x19FB0Cu;
    // 0x19fb0c: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FB0Cu;
    SET_GPR_U32(ctx, 31, 0x19FB14u);
    ctx->pc = 0x19FB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB0Cu;
    // 0x19fb10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FB0Cu, 0x19FB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB14u;
label_19fb14:
    // 0x19fb14: 0xae02015c  sw          $v0, 0x15C($s0)
    ctx->pc = 0x19fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    // 0x19fb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb1c: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FB1Cu;
    SET_GPR_U32(ctx, 31, 0x19FB24u);
    ctx->pc = 0x19FB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB1Cu;
    // 0x19fb20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FB1Cu, 0x19FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB24u;
label_19fb24:
    // 0x19fb24: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x19fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    ctx->pc = 0x19fb28u;
}
