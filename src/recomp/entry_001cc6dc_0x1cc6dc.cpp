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

// Function: entry_001cc6dc
// Address: 0x1cc6dc - 0x1cc70c
void entry_001cc6dc_0x1cc6dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc6dc_0x1cc6dc");
#endif

    switch (ctx->pc) {
        case 0x1cc6f4u: goto label_1cc6f4;
        default: break;
    }

    ctx->pc = 0x1cc6dcu;

label_1cc6dc:
    // 0x1cc6dc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1cc6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1cc6e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cc6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6e4: 0x244251c0  addiu       $v0, $v0, 0x51C0
    ctx->pc = 0x1cc6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20928));
    // 0x1cc6e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cc6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc6ec: 0xc0731d0  jal         func_1CC740
    ctx->pc = 0x1CC6ECu;
    SET_GPR_U32(ctx, 31, 0x1CC6F4u);
    ctx->pc = 0x1CC6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6ECu;
    // 0x1cc6f0: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC740u, 0x1CC6ECu, 0x1CC6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6F4u;
label_1cc6f4:
    // 0x1cc6f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cc6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cc6f8: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1cc6f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cc6fc: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CC6FCu;
    {
        const bool branch_taken_0x1cc6fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6FCu;
        // 0x1cc700: 0x26311430  addiu       $s1, $s1, 0x1430 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6fc) {
            ctx->pc = 0x1CC6DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc6dc;
        }
    }
    ctx->pc = 0x1CC704u;
    // 0x1cc704: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC704u;
    {
        const bool branch_taken_0x1cc704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC704u;
        // 0x1cc708: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc704) {
            ctx->pc = 0x1CC724u;
            return;
        }
    }
    ctx->pc = 0x1CC70Cu;
}
