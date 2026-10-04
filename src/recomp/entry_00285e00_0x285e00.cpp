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

// Function: entry_00285e00
// Address: 0x285e00 - 0x285e40
void entry_00285e00_0x285e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285e00_0x285e00");
#endif

    switch (ctx->pc) {
        case 0x285e14u: goto label_285e14;
        default: break;
    }

    ctx->pc = 0x285e00u;

    // 0x285e00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x285e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285e04: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x285e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x285e08: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x285e08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x285e0c: 0xc01d456  jal         func_075158
    ctx->pc = 0x285E0Cu;
    SET_GPR_U32(ctx, 31, 0x285E14u);
    ctx->pc = 0x285E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285E0Cu;
    // 0x285e10: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x75158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x75158u, 0x285E0Cu, 0x285E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285E14u;
label_285e14:
    // 0x285e14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x285e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285e18: 0x4a10009  bgez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x285E18u;
    {
        const bool branch_taken_0x285e18 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x285e18) {
            ctx->pc = 0x285E40u;
            return;
        }
    }
    ctx->pc = 0x285E20u;
    // 0x285e20: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x285E20u;
    {
        const bool branch_taken_0x285e20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E20u;
        // 0x285e24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e20) {
            ctx->pc = 0x285EE8u;
            return;
        }
    }
    ctx->pc = 0x285E28u;
    // 0x285e28: 0x40053000  mfc0        $a1, Wired
    ctx->pc = 0x285e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_wired);
    // 0x285e2c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x285e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x285e30: 0x40823000  mtc0        $v0, Wired
    ctx->pc = 0x285e30u;
    ctx->cop0_wired = GPR_U32(ctx, 2) & 0x3F; ctx->cop0_random = 47;
    // 0x285e34: 0x40f  sync.p
    ctx->pc = 0x285e34u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x285e38: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x285E38u;
    {
        const bool branch_taken_0x285e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285e38) {
            ctx->pc = 0x285E88u;
            return;
        }
    }
    ctx->pc = 0x285E40u;
}
