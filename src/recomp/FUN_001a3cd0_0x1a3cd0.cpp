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

// Function: FUN_001a3cd0
// Address: 0x1a3cd0 - 0x1a3d54
void FUN_001a3cd0_0x1a3cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3cd0_0x1a3cd0");
#endif

    switch (ctx->pc) {
        case 0x1a3ce8u: goto label_1a3ce8;
        case 0x1a3cf4u: goto label_1a3cf4;
        case 0x1a3d04u: goto label_1a3d04;
        case 0x1a3d10u: goto label_1a3d10;
        case 0x1a3d1cu: goto label_1a3d1c;
        case 0x1a3d2cu: goto label_1a3d2c;
        case 0x1a3d3cu: goto label_1a3d3c;
        case 0x1a3d48u: goto label_1a3d48;
        default: break;
    }

    ctx->pc = 0x1a3cd0u;

    // 0x1a3cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a3cd4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a3cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a3cd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a3cdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a3ce0: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A3CE0u;
    SET_GPR_U32(ctx, 31, 0x1A3CE8u);
    ctx->pc = 0x1A3CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CE0u;
    // 0x1a3ce4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A3CE0u, 0x1A3CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CE8u;
label_1a3ce8:
    // 0x1a3ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3cec: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A3CECu;
    SET_GPR_U32(ctx, 31, 0x1A3CF4u);
    ctx->pc = 0x1A3CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CECu;
    // 0x1a3cf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A3CECu, 0x1A3CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CF4u;
label_1a3cf4:
    // 0x1a3cf4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A3CF4u;
    {
        const bool branch_taken_0x1a3cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CF4u;
        // 0x1a3cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3cf4) {
            ctx->pc = 0x1A3D20u;
            goto label_1a3d20;
        }
    }
    ctx->pc = 0x1A3CFCu;
    // 0x1a3cfc: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A3CFCu;
    SET_GPR_U32(ctx, 31, 0x1A3D04u);
    ctx->pc = 0x1A3D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CFCu;
    // 0x1a3d00: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A3CFCu, 0x1A3D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D04u;
label_1a3d04:
    // 0x1a3d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3d08: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A3D08u;
    SET_GPR_U32(ctx, 31, 0x1A3D10u);
    ctx->pc = 0x1A3D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D08u;
    // 0x1a3d0c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A3D08u, 0x1A3D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D10u;
label_1a3d10:
    // 0x1a3d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3d14: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A3D14u;
    SET_GPR_U32(ctx, 31, 0x1A3D1Cu);
    ctx->pc = 0x1A3D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D14u;
    // 0x1a3d18: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A3D14u, 0x1A3D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D1Cu;
label_1a3d1c:
    // 0x1a3d1c: 0xae020144  sw          $v0, 0x144($s0)
    ctx->pc = 0x1a3d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
label_1a3d20:
    // 0x1a3d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3d24: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A3D24u;
    SET_GPR_U32(ctx, 31, 0x1A3D2Cu);
    ctx->pc = 0x1A3D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D24u;
    // 0x1a3d28: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A3D24u, 0x1A3D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D2Cu;
label_1a3d2c:
    // 0x1a3d2c: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x1a3d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x1a3d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3d34: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A3D34u;
    SET_GPR_U32(ctx, 31, 0x1A3D3Cu);
    ctx->pc = 0x1A3D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D34u;
    // 0x1a3d38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A3D34u, 0x1A3D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D3Cu;
label_1a3d3c:
    // 0x1a3d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3d40: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A3D40u;
    SET_GPR_U32(ctx, 31, 0x1A3D48u);
    ctx->pc = 0x1A3D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D40u;
    // 0x1a3d44: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A3D40u, 0x1A3D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D48u;
label_1a3d48:
    // 0x1a3d48: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x1a3d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x1a3d4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a3d54u;
}
