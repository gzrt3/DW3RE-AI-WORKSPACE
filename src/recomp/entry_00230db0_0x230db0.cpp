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

// Function: entry_00230db0
// Address: 0x230db0 - 0x230df0
void entry_00230db0_0x230db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230db0_0x230db0");
#endif

    switch (ctx->pc) {
        case 0x230dc8u: goto label_230dc8;
        case 0x230de8u: goto label_230de8;
        default: break;
    }

    ctx->pc = 0x230db0u;

    // 0x230db0: 0x16a0000f  bnez        $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x230DB0u;
    {
        const bool branch_taken_0x230db0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x230DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DB0u;
        // 0x230db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230db0) {
            ctx->pc = 0x230DF0u;
            return;
        }
    }
    ctx->pc = 0x230DB8u;
    // 0x230db8: 0x12e0000d  beqz        $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x230DB8u;
    {
        const bool branch_taken_0x230db8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x230db8) {
            ctx->pc = 0x230DF0u;
            return;
        }
    }
    ctx->pc = 0x230DC0u;
    // 0x230dc0: 0xc08c34a  jal         func_230D28
    ctx->pc = 0x230DC0u;
    SET_GPR_U32(ctx, 31, 0x230DC8u);
    ctx->pc = 0x230D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D28u, 0x230DC0u, 0x230DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DC8u;
label_230dc8:
    // 0x230dc8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x230dc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230dcc: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x230DCCu;
    {
        const bool branch_taken_0x230dcc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DCCu;
        // 0x230dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230dcc) {
            ctx->pc = 0x230DF0u;
            return;
        }
    }
    ctx->pc = 0x230DD4u;
    // 0x230dd4: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x230dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x230dd8: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x230ddc: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x230ddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
    // 0x230de0: 0xc08cd30  jal         func_2334C0
    ctx->pc = 0x230DE0u;
    SET_GPR_U32(ctx, 31, 0x230DE8u);
    ctx->pc = 0x230DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DE0u;
    // 0x230de4: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334C0u, 0x230DE0u, 0x230DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DE8u;
label_230de8:
    // 0x230de8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x230DE8u;
    {
        const bool branch_taken_0x230de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230de8) {
            ctx->pc = 0x231028u;
            return;
        }
    }
    ctx->pc = 0x230DF0u;
}
