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

// Function: FUN_00137dd0
// Address: 0x137dd0 - 0x137e38
void FUN_00137dd0_0x137dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00137dd0_0x137dd0");
#endif

    switch (ctx->pc) {
        case 0x137e00u: goto label_137e00;
        case 0x137e20u: goto label_137e20;
        case 0x137e28u: goto label_137e28;
        default: break;
    }

    ctx->pc = 0x137dd0u;

    // 0x137dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137dd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x137dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x137dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x137ddc: 0x8f858590  lw          $a1, -0x7A70($gp)
    ctx->pc = 0x137ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x137de0: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x137de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x137de4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x137DE4u;
    {
        const bool branch_taken_0x137de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DE4u;
        // 0x137de8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137de4) {
            ctx->pc = 0x137E08u;
            goto label_137e08;
        }
    }
    ctx->pc = 0x137DECu;
    // 0x137dec: 0x30a30020  andi        $v1, $a1, 0x20
    ctx->pc = 0x137decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x137df0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137DF0u;
    {
        const bool branch_taken_0x137df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137df0) {
            ctx->pc = 0x137E08u;
            goto label_137e08;
        }
    }
    ctx->pc = 0x137DF8u;
    // 0x137df8: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x137DF8u;
    SET_GPR_U32(ctx, 31, 0x137E00u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x137DF8u, 0x137E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137E00u;
label_137e00:
    // 0x137e00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x137E00u;
    {
        const bool branch_taken_0x137e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E00u;
        // 0x137e04: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e00) {
            ctx->pc = 0x137E38u;
            return;
        }
    }
    ctx->pc = 0x137E08u;
label_137e08:
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
            goto label_137e30;
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
            goto label_137e34;
        }
    }
    ctx->pc = 0x137E30u;
label_137e30:
    // 0x137e30: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x137e30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
label_137e34:
    // 0x137e34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x137e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x137e38u;
}
