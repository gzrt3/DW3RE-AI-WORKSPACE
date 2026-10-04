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

// Function: entry_0014da08
// Address: 0x14da08 - 0x14da28
void entry_0014da08_0x14da08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014da08_0x14da08");
#endif

    switch (ctx->pc) {
        case 0x14da20u: goto label_14da20;
        default: break;
    }

    ctx->pc = 0x14da08u;

    // 0x14da08: 0x32230004  andi        $v1, $s1, 0x4
    ctx->pc = 0x14da08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x14da0c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14DA0Cu;
    {
        const bool branch_taken_0x14da0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA0Cu;
        // 0x14da10: 0x3223000c  andi        $v1, $s1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da0c) {
            ctx->pc = 0x14DA28u;
            return;
        }
    }
    ctx->pc = 0x14DA14u;
    // 0x14da14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14da14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da18: 0xc07b064  jal         func_1EC190
    ctx->pc = 0x14DA18u;
    SET_GPR_U32(ctx, 31, 0x14DA20u);
    ctx->pc = 0x14DA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA18u;
    // 0x14da1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC190u, 0x14DA18u, 0x14DA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA20u;
label_14da20:
    // 0x14da20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14DA20u;
    {
        const bool branch_taken_0x14da20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da20) {
            ctx->pc = 0x14DA38u;
            return;
        }
    }
    ctx->pc = 0x14DA28u;
}
