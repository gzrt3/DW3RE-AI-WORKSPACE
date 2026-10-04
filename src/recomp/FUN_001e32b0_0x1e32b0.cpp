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

// Function: FUN_001e32b0
// Address: 0x1e32b0 - 0x1e3540
void FUN_001e32b0_0x1e32b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e32b0_0x1e32b0");
#endif

    switch (ctx->pc) {
        case 0x1e32f4u: goto label_1e32f4;
        case 0x1e3354u: goto label_1e3354;
        case 0x1e338cu: goto label_1e338c;
        case 0x1e33ecu: goto label_1e33ec;
        case 0x1e353cu: goto label_1e353c;
        default: break;
    }

    ctx->pc = 0x1e32b0u;

    // 0x1e32b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e32b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e32b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e32b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e32b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e32b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e32bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e32bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e32c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e32c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e32c4: 0x8f848d3c  lw          $a0, -0x72C4($gp)
    ctx->pc = 0x1e32c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x1e32c8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E32C8u;
    {
        const bool branch_taken_0x1e32c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E32CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32C8u;
        // 0x1e32cc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e32c8) {
            ctx->pc = 0x1E32D8u;
            goto label_1e32d8;
        }
    }
    ctx->pc = 0x1E32D0u;
    // 0x1e32d0: 0x1483009a  bne         $a0, $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x1E32D0u;
    {
        const bool branch_taken_0x1e32d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e32d0) {
            ctx->pc = 0x1E353Cu;
            goto label_1e353c;
        }
    }
    ctx->pc = 0x1E32D8u;
label_1e32d8:
    // 0x1e32d8: 0x8f858d6c  lw          $a1, -0x7294($gp)
    ctx->pc = 0x1e32d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937964)));
    // 0x1e32dc: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1e32dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x1e32e0: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e32e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e32e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e32e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e32e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e32e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e32ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E32ECu;
    {
        const bool branch_taken_0x1e32ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32ECu;
        // 0x1e32f0: 0x248428a0  addiu       $a0, $a0, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e32ec) {
            ctx->pc = 0x1E3308u;
            goto label_1e3308;
        }
    }
    ctx->pc = 0x1E32F4u;
label_1e32f4:
    // 0x1e32f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e32f8: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E32F8u;
    {
        const bool branch_taken_0x1e32f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e32f8) {
            ctx->pc = 0x1E3314u;
            goto label_1e3314;
        }
    }
    ctx->pc = 0x1E3300u;
    // 0x1e3300: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1e3300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1e3304: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e3304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1e3308:
    // 0x1e3308: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x1e3308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e330c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E330Cu;
    {
        const bool branch_taken_0x1e330c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E330Cu;
        // 0x1e3310: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e330c) {
            ctx->pc = 0x1E32F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e32f4;
        }
    }
    ctx->pc = 0x1E3314u;
label_1e3314:
    // 0x1e3314: 0x0  nop
    ctx->pc = 0x1e3314u;
    // NOP
    // 0x1e3318: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x1e3318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1e331c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e3320: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E3320u;
    {
        const bool branch_taken_0x1e3320 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3320u;
        // 0x1e3324: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3320) {
            ctx->pc = 0x1E335Cu;
            goto label_1e335c;
        }
    }
    ctx->pc = 0x1E3328u;
    // 0x1e3328: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e3328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1e332c: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x1e332cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1e3330: 0x244226d0  addiu       $v0, $v0, 0x26D0
    ctx->pc = 0x1e3330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9936));
    // 0x1e3334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e3338: 0x8f838d34  lw          $v1, -0x72CC($gp)
    ctx->pc = 0x1e3338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x1e333c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1e3340: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e3340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e3344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e3348: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e3348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e334c: 0xc056fc8  jal         func_15BF20
    ctx->pc = 0x1E334Cu;
    SET_GPR_U32(ctx, 31, 0x1E3354u);
    ctx->pc = 0x1E3350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E334Cu;
    // 0x1e3350: 0x8f848d6c  lw          $a0, -0x7294($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF20u, 0x1E334Cu, 0x1E3354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3354u;
label_1e3354:
    // 0x1e3354: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E3354u;
    {
        const bool branch_taken_0x1e3354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3354) {
            ctx->pc = 0x1E338Cu;
            goto label_1e338c;
        }
    }
    ctx->pc = 0x1E335Cu;
label_1e335c:
    // 0x1e335c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e335cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1e3360: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x1e3360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1e3364: 0x244226d0  addiu       $v0, $v0, 0x26D0
    ctx->pc = 0x1e3364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9936));
    // 0x1e3368: 0x8f838d34  lw          $v1, -0x72CC($gp)
    ctx->pc = 0x1e3368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x1e336c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1e336cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e3370: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1e3370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e3374: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e3374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1e3378: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e3378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e337c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e337cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e3380: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e3380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3384: 0xc056fc8  jal         func_15BF20
    ctx->pc = 0x1E3384u;
    SET_GPR_U32(ctx, 31, 0x1E338Cu);
    ctx->pc = 0x1E3388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3384u;
    // 0x1e3388: 0x8f848d6c  lw          $a0, -0x7294($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF20u, 0x1E3384u, 0x1E338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E338Cu;
label_1e338c:
    // 0x1e338c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1e338cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1e3390: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e3390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e3394: 0x246354c0  addiu       $v1, $v1, 0x54C0
    ctx->pc = 0x1e3394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21696));
    // 0x1e3398: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1e3398u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1e339c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e339cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e33a0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e33a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1e33a4: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x1e33a4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e33a8: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e33a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1e33ac: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x1e33acu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e33b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e33b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e33b4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e33b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e33b8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1e33b8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e33bc: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x1e33bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1e33c0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1e33c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e33c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e33c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e33c8: 0x27828d40  addiu       $v0, $gp, -0x72C0
    ctx->pc = 0x1e33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937920));
    // 0x1e33cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e33ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e33d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e33d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e33d4: 0x0  nop
    ctx->pc = 0x1e33d4u;
    // NOP
    // 0x1e33d8: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1e33d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e33dc: 0x240701c8  addiu       $a3, $zero, 0x1C8
    ctx->pc = 0x1e33dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 456));
    // 0x1e33e0: 0x24060188  addiu       $a2, $zero, 0x188
    ctx->pc = 0x1e33e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
    // 0x1e33e4: 0x340384c0  ori         $v1, $zero, 0x84C0
    ctx->pc = 0x1e33e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33984);
    // 0x1e33e8: 0x34028580  ori         $v0, $zero, 0x8580
    ctx->pc = 0x1e33e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34176);
label_1e33ec:
    // 0x1e33ec: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e33ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e33f0: 0xa96821  addu        $t5, $a1, $t1
    ctx->pc = 0x1e33f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1e33f4: 0xdc2e2a28  ld          $t6, 0x2A28($at)
    ctx->pc = 0x1e33f4u;
    SET_GPR_U64(ctx, 14, FAST_READ64(0x4B2A28u));
    // 0x1e33f8: 0x119082a  slt         $at, $t0, $t9
    ctx->pc = 0x1e33f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x1e33fc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E33FCu;
    {
        const bool branch_taken_0x1e33fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33FCu;
        // 0x1e3400: 0xfdae0070  sd          $t6, 0x70($t5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 13), 112), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33fc) {
            ctx->pc = 0x1E340Cu;
            goto label_1e340c;
        }
    }
    ctx->pc = 0x1E3404u;
    // 0x1e3404: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3404u;
    {
        const bool branch_taken_0x1e3404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3404u;
        // 0x1e3408: 0x240e0080  addiu       $t6, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3404) {
            ctx->pc = 0x1E3410u;
            goto label_1e3410;
        }
    }
    ctx->pc = 0x1E340Cu;
label_1e340c:
    // 0x1e340c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1e340cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3410:
    // 0x1e3410: 0xa1ae0083  sb          $t6, 0x83($t5)
    ctx->pc = 0x1e3410u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 131), (uint8_t)GPR_U32(ctx, 14));
    // 0x1e3414: 0x257001e4  addiu       $s0, $t3, 0x1E4
    ctx->pc = 0x1e3414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), 484));
    // 0x1e3418: 0xa5aa0088  sh          $t2, 0x88($t5)
    ctx->pc = 0x1e3418u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 136), (uint16_t)GPR_U32(ctx, 10));
    // 0x1e341c: 0x256e01c8  addiu       $t6, $t3, 0x1C8
    ctx->pc = 0x1e341cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 456));
    // 0x1e3420: 0xa5aa008a  sh          $t2, 0x8A($t5)
    ctx->pc = 0x1e3420u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 138), (uint16_t)GPR_U32(ctx, 10));
    // 0x1e3424: 0xe7100  sll         $t6, $t6, 4
    ctx->pc = 0x1e3424u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x1e3428: 0xa5a70098  sh          $a3, 0x98($t5)
    ctx->pc = 0x1e3428u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 152), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e342c: 0x25cf6c00  addiu       $t7, $t6, 0x6C00
    ctx->pc = 0x1e342cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 27648));
    // 0x1e3430: 0xa5a6009a  sh          $a2, 0x9A($t5)
    ctx->pc = 0x1e3430u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 154), (uint16_t)GPR_U32(ctx, 6));
    // 0x1e3434: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1e3434u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e3438: 0xa5af0090  sh          $t7, 0x90($t5)
    ctx->pc = 0x1e3438u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 144), (uint16_t)GPR_U32(ctx, 15));
    // 0x1e343c: 0x272e03b6  addiu       $t6, $t9, 0x3B6
    ctx->pc = 0x1e343cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 25), 950));
    // 0x1e3440: 0xa5a30092  sh          $v1, 0x92($t5)
    ctx->pc = 0x1e3440u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 146), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e3444: 0x26186c00  addiu       $t8, $s0, 0x6C00
    ctx->pc = 0x1e3444u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 16), 27648));
    // 0x1e3448: 0xadae0094  sw          $t6, 0x94($t5)
    ctx->pc = 0x1e3448u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 148), GPR_U32(ctx, 14));
    // 0x1e344c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e344cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e3450: 0xa5b800a0  sh          $t8, 0xA0($t5)
    ctx->pc = 0x1e3450u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 160), (uint16_t)GPR_U32(ctx, 24));
    // 0x1e3454: 0xa5a200a2  sh          $v0, 0xA2($t5)
    ctx->pc = 0x1e3454u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e3458: 0xadae00a4  sw          $t6, 0xA4($t5)
    ctx->pc = 0x1e3458u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 164), GPR_U32(ctx, 14));
    // 0x1e345c: 0xdc302a30  ld          $s0, 0x2A30($at)
    ctx->pc = 0x1e345cu;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x4B2A30u));
    // 0x1e3460: 0x119082a  slt         $at, $t0, $t9
    ctx->pc = 0x1e3460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x1e3464: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3464u;
    {
        const bool branch_taken_0x1e3464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3464u;
        // 0x1e3468: 0xfdb004d0  sd          $s0, 0x4D0($t5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 13), 1232), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3464) {
            ctx->pc = 0x1E3474u;
            goto label_1e3474;
        }
    }
    ctx->pc = 0x1E346Cu;
    // 0x1e346c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E346Cu;
    {
        const bool branch_taken_0x1e346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E346Cu;
        // 0x1e3470: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e346c) {
            ctx->pc = 0x1E3478u;
            goto label_1e3478;
        }
    }
    ctx->pc = 0x1E3474u;
label_1e3474:
    // 0x1e3474: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x1e3474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e3478:
    // 0x1e3478: 0xa1b004e3  sb          $s0, 0x4E3($t5)
    ctx->pc = 0x1e3478u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1251), (uint8_t)GPR_U32(ctx, 16));
    // 0x1e347c: 0x27310001  addiu       $s1, $t9, 0x1
    ctx->pc = 0x1e347cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1e3480: 0xc8100  sll         $s0, $t4, 4
    ctx->pc = 0x1e3480u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x1e3484: 0xa5aa04e8  sh          $t2, 0x4E8($t5)
    ctx->pc = 0x1e3484u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1256), (uint16_t)GPR_U32(ctx, 10));
    // 0x1e3488: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1e3488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1e348c: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1e348cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1e3490: 0xa5b004ea  sh          $s0, 0x4EA($t5)
    ctx->pc = 0x1e3490u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1258), (uint16_t)GPR_U32(ctx, 16));
    // 0x1e3494: 0x252900a0  addiu       $t1, $t1, 0xA0
    ctx->pc = 0x1e3494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 160));
    // 0x1e3498: 0x118040  sll         $s0, $s1, 1
    ctx->pc = 0x1e3498u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e349c: 0xa5a704f8  sh          $a3, 0x4F8($t5)
    ctx->pc = 0x1e349cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1272), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e34a0: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1e34a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1e34a4: 0x256b0016  addiu       $t3, $t3, 0x16
    ctx->pc = 0x1e34a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 22));
    // 0x1e34a8: 0x1081c0  sll         $s0, $s0, 7
    ctx->pc = 0x1e34a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x1e34ac: 0x258c0018  addiu       $t4, $t4, 0x18
    ctx->pc = 0x1e34acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
    // 0x1e34b0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1e34b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1e34b4: 0xa5b004fa  sh          $s0, 0x4FA($t5)
    ctx->pc = 0x1e34b4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1274), (uint16_t)GPR_U32(ctx, 16));
    // 0x1e34b8: 0xa5af04f0  sh          $t7, 0x4F0($t5)
    ctx->pc = 0x1e34b8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1264), (uint16_t)GPR_U32(ctx, 15));
    // 0x1e34bc: 0xa5a304f2  sh          $v1, 0x4F2($t5)
    ctx->pc = 0x1e34bcu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1266), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e34c0: 0x2b2f0007  slti        $t7, $t9, 0x7
    ctx->pc = 0x1e34c0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1e34c4: 0xadae04f4  sw          $t6, 0x4F4($t5)
    ctx->pc = 0x1e34c4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 1268), GPR_U32(ctx, 14));
    // 0x1e34c8: 0xa5b80500  sh          $t8, 0x500($t5)
    ctx->pc = 0x1e34c8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1280), (uint16_t)GPR_U32(ctx, 24));
    // 0x1e34cc: 0xa5a20502  sh          $v0, 0x502($t5)
    ctx->pc = 0x1e34ccu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1282), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e34d0: 0x15e0ffc6  bnez        $t7, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1E34D0u;
    {
        const bool branch_taken_0x1e34d0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34D0u;
        // 0x1e34d4: 0xadae0504  sw          $t6, 0x504($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 1284), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34d0) {
            ctx->pc = 0x1E33ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e33ec;
        }
    }
    ctx->pc = 0x1E34D8u;
    // 0x1e34d8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e34d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e34dc: 0x24180080  addiu       $t8, $zero, 0x80
    ctx->pc = 0x1e34dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e34e0: 0xdc392a38  ld          $t9, 0x2A38($at)
    ctx->pc = 0x1e34e0u;
    SET_GPR_U64(ctx, 25, FAST_READ64(0x4B2A38u));
    // 0x1e34e4: 0x240f0808  addiu       $t7, $zero, 0x808
    ctx->pc = 0x1e34e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1e34e8: 0x240e0188  addiu       $t6, $zero, 0x188
    ctx->pc = 0x1e34e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
    // 0x1e34ec: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x1e34ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e34f0: 0x240c03b6  addiu       $t4, $zero, 0x3B6
    ctx->pc = 0x1e34f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 950));
    // 0x1e34f4: 0x340b8800  ori         $t3, $zero, 0x8800
    ctx->pc = 0x1e34f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1e34f8: 0x24060097  addiu       $a2, $zero, 0x97
    ctx->pc = 0x1e34f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x1e34fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e34fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3500: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e3500u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3504: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e3504u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3508: 0xfcb90930  sd          $t9, 0x930($a1)
    ctx->pc = 0x1e3508u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 2352), GPR_U64(ctx, 25));
    // 0x1e350c: 0xa0b80943  sb          $t8, 0x943($a1)
    ctx->pc = 0x1e350cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2371), (uint8_t)GPR_U32(ctx, 24));
    // 0x1e3510: 0xa4aa0948  sh          $t2, 0x948($a1)
    ctx->pc = 0x1e3510u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2376), (uint16_t)GPR_U32(ctx, 10));
    // 0x1e3514: 0xa4aa094a  sh          $t2, 0x94A($a1)
    ctx->pc = 0x1e3514u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2378), (uint16_t)GPR_U32(ctx, 10));
    // 0x1e3518: 0xa4af0958  sh          $t7, 0x958($a1)
    ctx->pc = 0x1e3518u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2392), (uint16_t)GPR_U32(ctx, 15));
    // 0x1e351c: 0xa4ae095a  sh          $t6, 0x95A($a1)
    ctx->pc = 0x1e351cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2394), (uint16_t)GPR_U32(ctx, 14));
    // 0x1e3520: 0xa4ad0950  sh          $t5, 0x950($a1)
    ctx->pc = 0x1e3520u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2384), (uint16_t)GPR_U32(ctx, 13));
    // 0x1e3524: 0xa4a30952  sh          $v1, 0x952($a1)
    ctx->pc = 0x1e3524u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2386), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e3528: 0xacac0954  sw          $t4, 0x954($a1)
    ctx->pc = 0x1e3528u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2388), GPR_U32(ctx, 12));
    // 0x1e352c: 0xa4ab0960  sh          $t3, 0x960($a1)
    ctx->pc = 0x1e352cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2400), (uint16_t)GPR_U32(ctx, 11));
    // 0x1e3530: 0xa4a20962  sh          $v0, 0x962($a1)
    ctx->pc = 0x1e3530u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2402), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e3534: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E3534u;
    SET_GPR_U32(ctx, 31, 0x1E353Cu);
    ctx->pc = 0x1E3538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3534u;
    // 0x1e3538: 0xacac0964  sw          $t4, 0x964($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 2404), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E3534u, 0x1E353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E353Cu;
label_1e353c:
    // 0x1e353c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e353cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1e3540u;
}
