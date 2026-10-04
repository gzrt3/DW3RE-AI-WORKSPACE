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

// Function: FUN_001a3618
// Address: 0x1a3618 - 0x1a3778
void FUN_001a3618_0x1a3618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3618_0x1a3618");
#endif

    switch (ctx->pc) {
        case 0x1a3634u: goto label_1a3634;
        case 0x1a3664u: goto label_1a3664;
        case 0x1a3670u: goto label_1a3670;
        case 0x1a3694u: goto label_1a3694;
        case 0x1a36a4u: goto label_1a36a4;
        case 0x1a36b0u: goto label_1a36b0;
        case 0x1a36b8u: goto label_1a36b8;
        case 0x1a36d4u: goto label_1a36d4;
        case 0x1a36e0u: goto label_1a36e0;
        case 0x1a36f0u: goto label_1a36f0;
        case 0x1a36fcu: goto label_1a36fc;
        case 0x1a3704u: goto label_1a3704;
        case 0x1a3720u: goto label_1a3720;
        case 0x1a3728u: goto label_1a3728;
        default: break;
    }

    ctx->pc = 0x1a3618u;

    // 0x1a3618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a361c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1a361cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a3620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a3624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a362c: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A362Cu;
    SET_GPR_U32(ctx, 31, 0x1A3634u);
    ctx->pc = 0x1A3630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A362Cu;
    // 0x1a3630: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A362Cu, 0x1A3634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3634u;
label_1a3634:
    // 0x1a3634: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a3634u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3638: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x1a3638u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1a363c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1a363cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1a3640: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x1a3640u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
    // 0x1a3644: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x1a3644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
    // 0x1a3648: 0x28440af1  slti        $a0, $v0, 0xAF1
    ctx->pc = 0x1a3648u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2801) ? 1 : 0);
    // 0x1a364c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A364Cu;
    {
        const bool branch_taken_0x1a364c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A364Cu;
        // 0x1a3650: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a364c) {
            ctx->pc = 0x1A3664u;
            goto label_1a3664;
        }
    }
    ctx->pc = 0x1A3654u;
    // 0x1a3654: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a3654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x1a3658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a365c: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x1A365Cu;
    SET_GPR_U32(ctx, 31, 0x1A3664u);
    ctx->pc = 0x1A3660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A365Cu;
    // 0x1a3660: 0x24a5a3a8  addiu       $a1, $a1, -0x5C58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x1A365Cu, 0x1A3664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3664u;
label_1a3664:
    // 0x1a3664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3668: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A3668u;
    SET_GPR_U32(ctx, 31, 0x1A3670u);
    ctx->pc = 0x1A366Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3668u;
    // 0x1a366c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A3668u, 0x1A3670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3670u;
label_1a3670:
    // 0x1a3670: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a3670u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3678: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x1a3678u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1a367c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a367cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3680: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x1a3680u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x1a3684: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x1a3684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x1a3688: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x1a3688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    // 0x1a368c: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A368Cu;
    SET_GPR_U32(ctx, 31, 0x1A3694u);
    ctx->pc = 0x1A3690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A368Cu;
    // 0x1a3690: 0xae020138  sw          $v0, 0x138($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A368Cu, 0x1A3694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3694u;
label_1a3694:
    // 0x1a3694: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A3694u;
    {
        const bool branch_taken_0x1a3694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3694u;
        // 0x1a3698: 0xae020840  sw          $v0, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3694) {
            ctx->pc = 0x1A36C0u;
            goto label_1a36c0;
        }
    }
    ctx->pc = 0x1A369Cu;
    // 0x1a369c: 0xc067ca0  jal         func_19F280
    ctx->pc = 0x1A369Cu;
    SET_GPR_U32(ctx, 31, 0x1A36A4u);
    ctx->pc = 0x1A36A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A369Cu;
    // 0x1a36a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F280u, 0x1A369Cu, 0x1A36A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36A4u;
label_1a36a4:
    // 0x1a36a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a36a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36a8: 0xc067c94  jal         func_19F250
    ctx->pc = 0x1A36A8u;
    SET_GPR_U32(ctx, 31, 0x1A36B0u);
    ctx->pc = 0x1A36ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36A8u;
    // 0x1a36ac: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F250u, 0x1A36A8u, 0x1A36B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36B0u;
label_1a36b0:
    // 0x1a36b0: 0xc067ca0  jal         func_19F280
    ctx->pc = 0x1A36B0u;
    SET_GPR_U32(ctx, 31, 0x1A36B8u);
    ctx->pc = 0x1A36B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36B0u;
    // 0x1a36b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F280u, 0x1A36B0u, 0x1A36B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36B8u;
label_1a36b8:
    // 0x1a36b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A36B8u;
    {
        const bool branch_taken_0x1a36b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36B8u;
        // 0x1a36bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36b8) {
            ctx->pc = 0x1A36D8u;
            goto label_1a36d8;
        }
    }
    ctx->pc = 0x1A36C0u;
label_1a36c0:
    // 0x1a36c0: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x1a36c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x1a36c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a36c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36c8: 0x24c65a40  addiu       $a2, $a2, 0x5A40
    ctx->pc = 0x1a36c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23104));
    // 0x1a36cc: 0xc068eb2  jal         func_1A3AC8
    ctx->pc = 0x1A36CCu;
    SET_GPR_U32(ctx, 31, 0x1A36D4u);
    ctx->pc = 0x1A36D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36CCu;
    // 0x1a36d0: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3AC8u, 0x1A36CCu, 0x1A36D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36D4u;
label_1a36d4:
    // 0x1a36d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a36d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a36d8:
    // 0x1a36d8: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A36D8u;
    SET_GPR_U32(ctx, 31, 0x1A36E0u);
    ctx->pc = 0x1A36DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36D8u;
    // 0x1a36dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A36D8u, 0x1A36E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36E0u;
label_1a36e0:
    // 0x1a36e0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A36E0u;
    {
        const bool branch_taken_0x1a36e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36E0u;
        // 0x1a36e4: 0xae020844  sw          $v0, 0x844($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36e0) {
            ctx->pc = 0x1A370Cu;
            goto label_1a370c;
        }
    }
    ctx->pc = 0x1A36E8u;
    // 0x1a36e8: 0xc067ca0  jal         func_19F280
    ctx->pc = 0x1A36E8u;
    SET_GPR_U32(ctx, 31, 0x1A36F0u);
    ctx->pc = 0x1A36ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36E8u;
    // 0x1a36ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F280u, 0x1A36E8u, 0x1A36F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36F0u;
label_1a36f0:
    // 0x1a36f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a36f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36f4: 0xc067c94  jal         func_19F250
    ctx->pc = 0x1A36F4u;
    SET_GPR_U32(ctx, 31, 0x1A36FCu);
    ctx->pc = 0x1A36F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36F4u;
    // 0x1a36f8: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F250u, 0x1A36F4u, 0x1A36FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36FCu;
label_1a36fc:
    // 0x1a36fc: 0xc067ca0  jal         func_19F280
    ctx->pc = 0x1A36FCu;
    SET_GPR_U32(ctx, 31, 0x1A3704u);
    ctx->pc = 0x1A3700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36FCu;
    // 0x1a3700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F280u, 0x1A36FCu, 0x1A3704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3704u;
label_1a3704:
    // 0x1a3704: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3704u;
    {
        const bool branch_taken_0x1a3704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3704) {
            ctx->pc = 0x1A3720u;
            goto label_1a3720;
        }
    }
    ctx->pc = 0x1A370Cu;
label_1a370c:
    // 0x1a370c: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x1a370cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x1a3710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3714: 0x24c65a80  addiu       $a2, $a2, 0x5A80
    ctx->pc = 0x1a3714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23168));
    // 0x1a3718: 0xc068eb2  jal         func_1A3AC8
    ctx->pc = 0x1A3718u;
    SET_GPR_U32(ctx, 31, 0x1A3720u);
    ctx->pc = 0x1A371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3718u;
    // 0x1a371c: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3AC8u, 0x1A3718u, 0x1A3720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3720u;
label_1a3720:
    // 0x1a3720: 0xc067ed6  jal         func_19FB58
    ctx->pc = 0x1A3720u;
    SET_GPR_U32(ctx, 31, 0x1A3728u);
    ctx->pc = 0x1A3724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3720u;
    // 0x1a3724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FB58u, 0x1A3720u, 0x1A3728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3728u;
label_1a3728:
    // 0x1a3728: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x1a3728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x1a372c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a372cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3734: 0x8068dd0  j           func_1A3740
    ctx->pc = 0x1A3734u;
    ctx->pc = 0x1A3738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3734u;
    // 0x1a3738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3740u;
    goto label_1a3740;
    ctx->pc = 0x1A373Cu;
    // 0x1a373c: 0x0  nop
    ctx->pc = 0x1a373cu;
    // NOP
label_1a3740:
    // 0x1a3740: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1a3740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1a3744: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a3744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3748: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1a3748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1a374c: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x1a374cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x1a3750: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x1a3750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x1a3754: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x1a3754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x1a3758: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1a3758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x1a375c: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x1a375cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x1a3760: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1a3760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1a3764: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x1a3764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x1a3768: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1a3768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1a376c: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x1a376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x1a3770: 0x8cbe0040  lw          $fp, 0x40($a1)
    ctx->pc = 0x1a3770u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1a3774: 0x8fc60848  lw          $a2, 0x848($fp)
    ctx->pc = 0x1a3774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2120)));
    ctx->pc = 0x1a3778u;
}
