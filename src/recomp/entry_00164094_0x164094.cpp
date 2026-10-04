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

// Function: entry_00164094
// Address: 0x164094 - 0x1640b4
void entry_00164094_0x164094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164094_0x164094");
#endif

    switch (ctx->pc) {
        case 0x1640acu: goto label_1640ac;
        default: break;
    }

    ctx->pc = 0x164094u;

    // 0x164094: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x164094u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164098: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x164098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16409c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16409Cu;
    {
        const bool branch_taken_0x16409c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16409c) {
            ctx->pc = 0x1640B4u;
            return;
        }
    }
    ctx->pc = 0x1640A4u;
    // 0x1640a4: 0xc0591f8  jal         func_1647E0
    ctx->pc = 0x1640A4u;
    SET_GPR_U32(ctx, 31, 0x1640ACu);
    ctx->pc = 0x1640A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1640A4u;
    // 0x1640a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647E0u, 0x1640A4u, 0x1640ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1640ACu;
label_1640ac:
    // 0x1640ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1640ACu;
    {
        const bool branch_taken_0x1640ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1640ac) {
            ctx->pc = 0x1640D8u;
            return;
        }
    }
    ctx->pc = 0x1640B4u;
}
