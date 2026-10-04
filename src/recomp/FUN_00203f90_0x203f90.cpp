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

// Function: FUN_00203f90
// Address: 0x203f90 - 0x204120
void FUN_00203f90_0x203f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203f90_0x203f90");
#endif

    switch (ctx->pc) {
        case 0x203fd4u: goto label_203fd4;
        case 0x203ffcu: goto label_203ffc;
        case 0x204024u: goto label_204024;
        case 0x204048u: goto label_204048;
        case 0x204068u: goto label_204068;
        case 0x204088u: goto label_204088;
        case 0x2040b0u: goto label_2040b0;
        case 0x2040d8u: goto label_2040d8;
        case 0x2040fcu: goto label_2040fc;
        case 0x20411cu: goto label_20411c;
        default: break;
    }

    ctx->pc = 0x203f90u;

    // 0x203f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x203f94: 0x2c81000a  sltiu       $at, $a0, 0xA
    ctx->pc = 0x203f94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x203f98: 0x10200060  beqz        $at, . + 4 + (0x60 << 2)
    ctx->pc = 0x203F98u;
    {
        const bool branch_taken_0x203f98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F98u;
        // 0x203f9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f98) {
            ctx->pc = 0x20411Cu;
            goto label_20411c;
        }
    }
    ctx->pc = 0x203FA0u;
    // 0x203fa0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x203fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x203fa4: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x203fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x203fa8: 0x2484dfc0  addiu       $a0, $a0, -0x2040
    ctx->pc = 0x203fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959040));
    // 0x203fac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x203facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x203fb0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x203fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203fb4: 0x600008  jr          $v1
    ctx->pc = 0x203FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203FBCu: goto label_203fbc;
            case 0x203FDCu: goto label_203fdc;
            case 0x204004u: goto label_204004;
            case 0x20402Cu: goto label_20402c;
            case 0x204050u: goto label_204050;
            case 0x204070u: goto label_204070;
            case 0x204090u: goto label_204090;
            case 0x2040B8u: goto label_2040b8;
            case 0x2040E0u: goto label_2040e0;
            case 0x204104u: goto label_204104;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203FB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x203FBCu;
label_203fbc:
    // 0x203fbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203fc0: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x203fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x203fc4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x203fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x203fc8: 0x24c6df50  addiu       $a2, $a2, -0x20B0
    ctx->pc = 0x203fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958928));
    // 0x203fcc: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x203FCCu;
    SET_GPR_U32(ctx, 31, 0x203FD4u);
    ctx->pc = 0x203FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203FCCu;
    // 0x203fd0: 0x24a5df40  addiu       $a1, $a1, -0x20C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x203FCCu, 0x203FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FD4u;
label_203fd4:
    // 0x203fd4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x203FD4u;
    {
        const bool branch_taken_0x203fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FD4u;
        // 0x203fd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203fd4) {
            ctx->pc = 0x204120u;
            return;
        }
    }
    ctx->pc = 0x203FDCu;
label_203fdc:
    // 0x203fdc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203fe0: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x203fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x203fe4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x203fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x203fe8: 0x3c07002d  lui         $a3, 0x2D
    ctx->pc = 0x203fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
    // 0x203fec: 0x24c6df50  addiu       $a2, $a2, -0x20B0
    ctx->pc = 0x203fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958928));
    // 0x203ff0: 0x24a5df68  addiu       $a1, $a1, -0x2098
    ctx->pc = 0x203ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958952));
    // 0x203ff4: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x203FF4u;
    SET_GPR_U32(ctx, 31, 0x203FFCu);
    ctx->pc = 0x203FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203FF4u;
    // 0x203ff8: 0x24e7df70  addiu       $a3, $a3, -0x2090 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x203FF4u, 0x203FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FFCu;
label_203ffc:
    // 0x203ffc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x203FFCu;
    {
        const bool branch_taken_0x203ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203ffc) {
            ctx->pc = 0x20411Cu;
            goto label_20411c;
        }
    }
    ctx->pc = 0x204004u;
label_204004:
    // 0x204004: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x204004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204008: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x204008u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x20400c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x20400cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x204010: 0x3c07002d  lui         $a3, 0x2D
    ctx->pc = 0x204010u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
    // 0x204014: 0x24c6df50  addiu       $a2, $a2, -0x20B0
    ctx->pc = 0x204014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958928));
    // 0x204018: 0x24a5df68  addiu       $a1, $a1, -0x2098
    ctx->pc = 0x204018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958952));
    // 0x20401c: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x20401Cu;
    SET_GPR_U32(ctx, 31, 0x204024u);
    ctx->pc = 0x204020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20401Cu;
    // 0x204020: 0x24e7df80  addiu       $a3, $a3, -0x2080 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x20401Cu, 0x204024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204024u;
label_204024:
    // 0x204024: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x204024u;
    {
        const bool branch_taken_0x204024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204024) {
            ctx->pc = 0x20411Cu;
            goto label_20411c;
        }
    }
    ctx->pc = 0x20402Cu;
label_20402c:
    // 0x20402c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20402cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204030: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x204030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x204034: 0x24c6df50  addiu       $a2, $a2, -0x20B0
    ctx->pc = 0x204034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958928));
    // 0x204038: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x204038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x20403c: 0x24a5df68  addiu       $a1, $a1, -0x2098
    ctx->pc = 0x20403cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958952));
    // 0x204040: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x204040u;
    SET_GPR_U32(ctx, 31, 0x204048u);
    ctx->pc = 0x204044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204040u;
    // 0x204044: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x204040u, 0x204048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204048u;
label_204048:
    // 0x204048: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x204048u;
    {
        const bool branch_taken_0x204048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204048) {
            ctx->pc = 0x20411Cu;
            goto label_20411c;
        }
    }
    ctx->pc = 0x204050u;
label_204050:
    // 0x204050: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x204050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204054: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x204054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x204058: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x204058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x20405c: 0x24c6df50  addiu       $a2, $a2, -0x20B0
    ctx->pc = 0x20405cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958928));
    // 0x204060: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x204060u;
    SET_GPR_U32(ctx, 31, 0x204068u);
    ctx->pc = 0x204064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204060u;
    // 0x204064: 0x24a5df90  addiu       $a1, $a1, -0x2070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x204060u, 0x204068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204068u;
label_204068:
    // 0x204068: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x204068u;
    {
        const bool branch_taken_0x204068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204068) {
            ctx->pc = 0x20411Cu;
            goto label_20411c;
        }
    }
    ctx->pc = 0x204070u;
label_204070:
    // 0x204070: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x204070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204074: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x204074u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x204078: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x204078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x20407c: 0x24c6dfa0  addiu       $a2, $a2, -0x2060
    ctx->pc = 0x20407cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959008));
    // 0x204080: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x204080u;
    SET_GPR_U32(ctx, 31, 0x204088u);
    ctx->pc = 0x204084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204080u;
    // 0x204084: 0x24a5df40  addiu       $a1, $a1, -0x20C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x204080u, 0x204088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204088u;
label_204088:
    // 0x204088: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x204088u;
    {
        const bool branch_taken_0x204088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204088) {
            ctx->pc = 0x20411Cu;
            goto label_20411c;
        }
    }
    ctx->pc = 0x204090u;
label_204090:
    // 0x204090: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x204090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204094: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x204094u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x204098: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x204098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x20409c: 0x3c07002d  lui         $a3, 0x2D
    ctx->pc = 0x20409cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
    // 0x2040a0: 0x24c6dfa0  addiu       $a2, $a2, -0x2060
    ctx->pc = 0x2040a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959008));
    // 0x2040a4: 0x24a5df68  addiu       $a1, $a1, -0x2098
    ctx->pc = 0x2040a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958952));
    // 0x2040a8: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x2040A8u;
    SET_GPR_U32(ctx, 31, 0x2040B0u);
    ctx->pc = 0x2040ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2040A8u;
    // 0x2040ac: 0x24e7df70  addiu       $a3, $a3, -0x2090 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x2040A8u, 0x2040B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2040B0u;
label_2040b0:
    // 0x2040b0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2040B0u;
    {
        const bool branch_taken_0x2040b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2040b0) {
            ctx->pc = 0x20411Cu;
            goto label_20411c;
        }
    }
    ctx->pc = 0x2040B8u;
label_2040b8:
    // 0x2040b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2040b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2040bc: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2040bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2040c0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2040c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2040c4: 0x3c07002d  lui         $a3, 0x2D
    ctx->pc = 0x2040c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
    // 0x2040c8: 0x24c6dfa0  addiu       $a2, $a2, -0x2060
    ctx->pc = 0x2040c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959008));
    // 0x2040cc: 0x24a5df68  addiu       $a1, $a1, -0x2098
    ctx->pc = 0x2040ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958952));
    // 0x2040d0: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x2040D0u;
    SET_GPR_U32(ctx, 31, 0x2040D8u);
    ctx->pc = 0x2040D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2040D0u;
    // 0x2040d4: 0x24e7df80  addiu       $a3, $a3, -0x2080 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x2040D0u, 0x2040D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2040D8u;
label_2040d8:
    // 0x2040d8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2040D8u;
    {
        const bool branch_taken_0x2040d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2040d8) {
            ctx->pc = 0x20411Cu;
            goto label_20411c;
        }
    }
    ctx->pc = 0x2040E0u;
label_2040e0:
    // 0x2040e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2040e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2040e4: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2040e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2040e8: 0x24c6dfa0  addiu       $a2, $a2, -0x2060
    ctx->pc = 0x2040e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959008));
    // 0x2040ec: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2040ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2040f0: 0x24a5df68  addiu       $a1, $a1, -0x2098
    ctx->pc = 0x2040f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958952));
    // 0x2040f4: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x2040F4u;
    SET_GPR_U32(ctx, 31, 0x2040FCu);
    ctx->pc = 0x2040F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2040F4u;
    // 0x2040f8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x2040F4u, 0x2040FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2040FCu;
label_2040fc:
    // 0x2040fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2040FCu;
    {
        const bool branch_taken_0x2040fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2040fc) {
            ctx->pc = 0x20411Cu;
            goto label_20411c;
        }
    }
    ctx->pc = 0x204104u;
label_204104:
    // 0x204104: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x204104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204108: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x204108u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x20410c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x20410cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x204110: 0x24c6dfa0  addiu       $a2, $a2, -0x2060
    ctx->pc = 0x204110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959008));
    // 0x204114: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x204114u;
    SET_GPR_U32(ctx, 31, 0x20411Cu);
    ctx->pc = 0x204118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204114u;
    // 0x204118: 0x24a5df90  addiu       $a1, $a1, -0x2070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x204114u, 0x20411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20411Cu;
label_20411c:
    // 0x20411c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20411cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x204120u;
}
