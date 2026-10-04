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

// Function: entry_00164154
// Address: 0x164154 - 0x164174
void entry_00164154_0x164154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164154_0x164154");
#endif

    switch (ctx->pc) {
        case 0x16416cu: goto label_16416c;
        default: break;
    }

    ctx->pc = 0x164154u;

    // 0x164154: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x164154u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164158: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x164158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16415c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16415Cu;
    {
        const bool branch_taken_0x16415c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16415c) {
            ctx->pc = 0x164174u;
            return;
        }
    }
    ctx->pc = 0x164164u;
    // 0x164164: 0xc0591f8  jal         func_1647E0
    ctx->pc = 0x164164u;
    SET_GPR_U32(ctx, 31, 0x16416Cu);
    ctx->pc = 0x164168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164164u;
    // 0x164168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647E0u, 0x164164u, 0x16416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16416Cu;
label_16416c:
    // 0x16416c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16416Cu;
    {
        const bool branch_taken_0x16416c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16416c) {
            ctx->pc = 0x164198u;
            return;
        }
    }
    ctx->pc = 0x164174u;
}
