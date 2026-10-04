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

// Function: entry_00137e08
// Address: 0x137e08 - 0x137e30
void entry_00137e08_0x137e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137e08_0x137e08");
#endif

    switch (ctx->pc) {
        case 0x137e20u: goto label_137e20;
        case 0x137e28u: goto label_137e28;
        default: break;
    }

    ctx->pc = 0x137e08u;

    // 0x137e08: 0x96040012  lhu         $a0, 0x12($s0)
    ctx->pc = 0x137e08u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x137e0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137e10: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x137E10u;
    {
        const bool branch_taken_0x137e10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x137E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E10u;
        // 0x137e14: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e10) {
            ctx->pc = 0x137E30u;
            return;
        }
    }
    ctx->pc = 0x137E18u;
    // 0x137e18: 0xc04c430  jal         func_1310C0
    ctx->pc = 0x137E18u;
    SET_GPR_U32(ctx, 31, 0x137E20u);
    ctx->pc = 0x137E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137E18u;
    // 0x137e1c: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1310C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1310C0u, 0x137E18u, 0x137E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137E20u;
label_137e20:
    // 0x137e20: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x137E20u;
    SET_GPR_U32(ctx, 31, 0x137E28u);
    ctx->pc = 0x137E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137E20u;
    // 0x137e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x137E20u, 0x137E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137E28u;
label_137e28:
    // 0x137e28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x137E28u;
    {
        const bool branch_taken_0x137e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137e28) {
            ctx->pc = 0x137E34u;
            return;
        }
    }
    ctx->pc = 0x137E30u;
}
