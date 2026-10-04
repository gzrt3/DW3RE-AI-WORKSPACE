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

// Function: FUN_001e4560
// Address: 0x1e4560 - 0x1e4950
void FUN_001e4560_0x1e4560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e4560_0x1e4560");
#endif

    switch (ctx->pc) {
        case 0x1e45b4u: goto label_1e45b4;
        case 0x1e45c8u: goto label_1e45c8;
        case 0x1e4768u: goto label_1e4768;
        case 0x1e4798u: goto label_1e4798;
        case 0x1e47acu: goto label_1e47ac;
        default: break;
    }

    ctx->pc = 0x1e4560u;

    // 0x1e4560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e4564: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e4564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1e4568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e456c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e456cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e4570: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1e4570u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1e4574: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e4574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1e4578: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e4578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1e457c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e4580: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x1e4580u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1e4584: 0x1462007a  bne         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x1E4584u;
    {
        const bool branch_taken_0x1e4584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4584u;
        // 0x1e4588: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4584) {
            ctx->pc = 0x1E4770u;
            goto label_1e4770;
        }
    }
    ctx->pc = 0x1E458Cu;
    // 0x1e458c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1e458cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e4590: 0x27838d88  addiu       $v1, $gp, -0x7278
    ctx->pc = 0x1e4590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
    // 0x1e4594: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e4594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e4598: 0x3c08004b  lui         $t0, 0x4B
    ctx->pc = 0x1e4598u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)75 << 16));
    // 0x1e459c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e459cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e45a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e45a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e45a4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1e45a4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e45a8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e45a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e45ac: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1E45ACu;
    {
        const bool branch_taken_0x1e45ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45ACu;
        // 0x1e45b0: 0x250828a0  addiu       $t0, $t0, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45ac) {
            ctx->pc = 0x1E4650u;
            goto label_1e4650;
        }
    }
    ctx->pc = 0x1E45B4u;
label_1e45b4:
    // 0x1e45b4: 0x8f878db8  lw          $a3, -0x7248($gp)
    ctx->pc = 0x1e45b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e45b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e45b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e45bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e45bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e45c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E45C0u;
    {
        const bool branch_taken_0x1e45c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45C0u;
        // 0x1e45c4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45c0) {
            ctx->pc = 0x1E45E8u;
            goto label_1e45e8;
        }
    }
    ctx->pc = 0x1E45C8u;
label_1e45c8:
    // 0x1e45c8: 0x10c1821  addu        $v1, $t0, $t4
    ctx->pc = 0x1e45c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x1e45cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e45ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e45d0: 0x15430003  bne         $t2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E45D0u;
    {
        const bool branch_taken_0x1e45d0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e45d0) {
            ctx->pc = 0x1E45E0u;
            goto label_1e45e0;
        }
    }
    ctx->pc = 0x1E45D8u;
    // 0x1e45d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E45D8u;
    {
        const bool branch_taken_0x1e45d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45D8u;
        // 0x1e45dc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45d8) {
            ctx->pc = 0x1E45F4u;
            goto label_1e45f4;
        }
    }
    ctx->pc = 0x1E45E0u;
label_1e45e0:
    // 0x1e45e0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x1e45e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x1e45e4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1e45e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1e45e8:
    // 0x1e45e8: 0x167182a  slt         $v1, $t3, $a3
    ctx->pc = 0x1e45e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1e45ec: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E45ECu;
    {
        const bool branch_taken_0x1e45ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e45ec) {
            ctx->pc = 0x1E45C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e45c8;
        }
    }
    ctx->pc = 0x1E45F4u;
label_1e45f4:
    // 0x1e45f4: 0x0  nop
    ctx->pc = 0x1e45f4u;
    // NOP
    // 0x1e45f8: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E45F8u;
    {
        const bool branch_taken_0x1e45f8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45F8u;
        // 0x1e45fc: 0xad3821  addu        $a3, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45f8) {
            ctx->pc = 0x1E4638u;
            goto label_1e4638;
        }
    }
    ctx->pc = 0x1E4600u;
    // 0x1e4600: 0xa0e60083  sb          $a2, 0x83($a3)
    ctx->pc = 0x1e4600u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 131), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e4604: 0x8f838d84  lw          $v1, -0x727C($gp)
    ctx->pc = 0x1e4604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937988)));
    // 0x1e4608: 0x146a0004  bne         $v1, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E4608u;
    {
        const bool branch_taken_0x1e4608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x1E460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4608u;
        // 0x1e460c: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4608) {
            ctx->pc = 0x1E461Cu;
            goto label_1e461c;
        }
    }
    ctx->pc = 0x1E4610u;
    // 0x1e4610: 0xdc232920  ld          $v1, 0x2920($at)
    ctx->pc = 0x1e4610u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 10528)));
    // 0x1e4614: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E4614u;
    {
        const bool branch_taken_0x1e4614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4614u;
        // 0x1e4618: 0xfce30ed0  sd          $v1, 0xED0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 3792), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4614) {
            ctx->pc = 0x1E462Cu;
            goto label_1e462c;
        }
    }
    ctx->pc = 0x1E461Cu;
label_1e461c:
    // 0x1e461c: 0x0  nop
    ctx->pc = 0x1e461cu;
    // NOP
    // 0x1e4620: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e4620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e4624: 0xdc232928  ld          $v1, 0x2928($at)
    ctx->pc = 0x1e4624u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x4B2928u));
    // 0x1e4628: 0xfce30ed0  sd          $v1, 0xED0($a3)
    ctx->pc = 0x1e4628u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 3792), GPR_U64(ctx, 3));
label_1e462c:
    // 0x1e462c: 0x0  nop
    ctx->pc = 0x1e462cu;
    // NOP
    // 0x1e4630: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E4630u;
    {
        const bool branch_taken_0x1e4630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4630u;
        // 0x1e4634: 0xa0e60ee3  sb          $a2, 0xEE3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3811), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4630) {
            ctx->pc = 0x1E4644u;
            goto label_1e4644;
        }
    }
    ctx->pc = 0x1E4638u;
label_1e4638:
    // 0x1e4638: 0xad1821  addu        $v1, $a1, $t5
    ctx->pc = 0x1e4638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x1e463c: 0xa0600083  sb          $zero, 0x83($v1)
    ctx->pc = 0x1e463cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 131), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e4640: 0xa0600ee3  sb          $zero, 0xEE3($v1)
    ctx->pc = 0x1e4640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3811), (uint8_t)GPR_U32(ctx, 0));
label_1e4644:
    // 0x1e4644: 0x0  nop
    ctx->pc = 0x1e4644u;
    // NOP
    // 0x1e4648: 0x25ad00a0  addiu       $t5, $t5, 0xA0
    ctx->pc = 0x1e4648u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 160));
    // 0x1e464c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1e464cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1e4650:
    // 0x1e4650: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x1e4650u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1e4654: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4654u;
    {
        const bool branch_taken_0x1e4654 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4654u;
        // 0x1e4658: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4654) {
            ctx->pc = 0x1E4660u;
            goto label_1e4660;
        }
    }
    ctx->pc = 0x1E465Cu;
    // 0x1e465c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x1e465cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1e4660:
    // 0x1e4660: 0x143182a  slt         $v1, $t2, $v1
    ctx->pc = 0x1e4660u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e4664: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1E4664u;
    {
        const bool branch_taken_0x1e4664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4664) {
            ctx->pc = 0x1E45B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e45b4;
        }
    }
    ctx->pc = 0x1E466Cu;
    // 0x1e466c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e466cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e4670: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4670u;
    {
        const bool branch_taken_0x1e4670 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4670u;
        // 0x1e4674: 0x8f838d84  lw          $v1, -0x727C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4670) {
            ctx->pc = 0x1E4680u;
            goto label_1e4680;
        }
    }
    ctx->pc = 0x1E4678u;
    // 0x1e4678: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4678u;
    {
        const bool branch_taken_0x1e4678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4678u;
        // 0x1e467c: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4678) {
            ctx->pc = 0x1E4684u;
            goto label_1e4684;
        }
    }
    ctx->pc = 0x1E4680u;
label_1e4680:
    // 0x1e4680: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e4680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e4684:
    // 0x1e4684: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e4684u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e4688: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x1E4688u;
    {
        const bool branch_taken_0x1e4688 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4688) {
            ctx->pc = 0x1E4750u;
            goto label_1e4750;
        }
    }
    ctx->pc = 0x1E4690u;
    // 0x1e4690: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e4690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1e4694: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1e4694u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4698: 0x2442b7b0  addiu       $v0, $v0, -0x4850
    ctx->pc = 0x1e4698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948784));
    // 0x1e469c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1e469cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e46a0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1e46a4: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x1e46a4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e46a8: 0x2442b7b2  addiu       $v0, $v0, -0x484E
    ctx->pc = 0x1e46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948786));
    // 0x1e46ac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e46acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e46b0: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x1e46b0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e46b4: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x1e46b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e46b8: 0x24e3ffe0  addiu       $v1, $a3, -0x20
    ctx->pc = 0x1e46b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
    // 0x1e46bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e46c0: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x1e46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1e46c4: 0x24676c00  addiu       $a3, $v1, 0x6C00
    ctx->pc = 0x1e46c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x1e46c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e46cc: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1e46ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x1e46d0: 0xa4a71d50  sh          $a3, 0x1D50($a1)
    ctx->pc = 0x1e46d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7504), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e46d4: 0x2502ffe0  addiu       $v0, $t0, -0x20
    ctx->pc = 0x1e46d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
    // 0x1e46d8: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1e46d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e46dc: 0x24e77900  addiu       $a3, $a3, 0x7900
    ctx->pc = 0x1e46dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
    // 0x1e46e0: 0x25020020  addiu       $v0, $t0, 0x20
    ctx->pc = 0x1e46e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1e46e4: 0xa4a71d52  sh          $a3, 0x1D52($a1)
    ctx->pc = 0x1e46e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7506), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e46e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e46e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e46ec: 0xaca61d54  sw          $a2, 0x1D54($a1)
    ctx->pc = 0x1e46ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7508), GPR_U32(ctx, 6));
    // 0x1e46f0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1e46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1e46f4: 0xa4a31d60  sh          $v1, 0x1D60($a1)
    ctx->pc = 0x1e46f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7520), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e46f8: 0xa4a21d62  sh          $v0, 0x1D62($a1)
    ctx->pc = 0x1e46f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7522), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e46fc: 0xaca61d64  sw          $a2, 0x1D64($a1)
    ctx->pc = 0x1e46fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7524), GPR_U32(ctx, 6));
    // 0x1e4700: 0x8f838d80  lw          $v1, -0x7280($gp)
    ctx->pc = 0x1e4700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937984)));
    // 0x1e4704: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1e4704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1e4708: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E4708u;
    {
        const bool branch_taken_0x1e4708 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4708u;
        // 0x1e470c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4708) {
            ctx->pc = 0x1E472Cu;
            goto label_1e472c;
        }
    }
    ctx->pc = 0x1E4710u;
    // 0x1e4710: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1e4710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e4714: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4714u;
    {
        const bool branch_taken_0x1e4714 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4714u;
        // 0x1e4718: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4714) {
            ctx->pc = 0x1E4724u;
            goto label_1e4724;
        }
    }
    ctx->pc = 0x1E471Cu;
    // 0x1e471c: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e4720: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e4720u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1e4724:
    // 0x1e4724: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E4724u;
    {
        const bool branch_taken_0x1e4724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4724u;
        // 0x1e4728: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4724) {
            ctx->pc = 0x1E4748u;
            goto label_1e4748;
        }
    }
    ctx->pc = 0x1E472Cu;
label_1e472c:
    // 0x1e472c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e472cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e4730: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1e4730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e4734: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4734u;
    {
        const bool branch_taken_0x1e4734 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4734u;
        // 0x1e4738: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4734) {
            ctx->pc = 0x1E4744u;
            goto label_1e4744;
        }
    }
    ctx->pc = 0x1E473Cu;
    // 0x1e473c: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e473cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e4740: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e4740u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1e4744:
    // 0x1e4744: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1e4744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1e4748:
    // 0x1e4748: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4748u;
    {
        const bool branch_taken_0x1e4748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4748u;
        // 0x1e474c: 0xa0a21d43  sb          $v0, 0x1D43($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7491), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4748) {
            ctx->pc = 0x1E4754u;
            goto label_1e4754;
        }
    }
    ctx->pc = 0x1E4750u;
label_1e4750:
    // 0x1e4750: 0xa0a01d43  sb          $zero, 0x1D43($a1)
    ctx->pc = 0x1e4750u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7491), (uint8_t)GPR_U32(ctx, 0));
label_1e4754:
    // 0x1e4754: 0x240601d7  addiu       $a2, $zero, 0x1D7
    ctx->pc = 0x1e4754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 471));
    // 0x1e4758: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e4758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e475c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e475cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4760: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E4760u;
    SET_GPR_U32(ctx, 31, 0x1E4768u);
    ctx->pc = 0x1E4764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4760u;
    // 0x1e4764: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E4760u, 0x1E4768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4768u;
label_1e4768:
    // 0x1e4768: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1E4768u;
    {
        const bool branch_taken_0x1e4768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4768u;
        // 0x1e476c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4768) {
            ctx->pc = 0x1E4954u;
            return;
        }
    }
    ctx->pc = 0x1E4770u;
label_1e4770:
    // 0x1e4770: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1e4770u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e4774: 0x27838d88  addiu       $v1, $gp, -0x7278
    ctx->pc = 0x1e4774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
    // 0x1e4778: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e4778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e477c: 0x3c08004b  lui         $t0, 0x4B
    ctx->pc = 0x1e477cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)75 << 16));
    // 0x1e4780: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e4780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4784: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e4784u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4788: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e4788u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e478c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e478cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e4790: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1E4790u;
    {
        const bool branch_taken_0x1e4790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4790u;
        // 0x1e4794: 0x250828a0  addiu       $t0, $t0, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4790) {
            ctx->pc = 0x1E4838u;
            goto label_1e4838;
        }
    }
    ctx->pc = 0x1E4798u;
label_1e4798:
    // 0x1e4798: 0x8f878db8  lw          $a3, -0x7248($gp)
    ctx->pc = 0x1e4798u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e479c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1e479cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e47a0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1e47a0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e47a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E47A4u;
    {
        const bool branch_taken_0x1e47a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47A4u;
        // 0x1e47a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47a4) {
            ctx->pc = 0x1E47D0u;
            goto label_1e47d0;
        }
    }
    ctx->pc = 0x1E47ACu;
label_1e47ac:
    // 0x1e47ac: 0x0  nop
    ctx->pc = 0x1e47acu;
    // NOP
    // 0x1e47b0: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x1e47b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1e47b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e47b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e47b8: 0x15630003  bne         $t3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E47B8u;
    {
        const bool branch_taken_0x1e47b8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e47b8) {
            ctx->pc = 0x1E47C8u;
            goto label_1e47c8;
        }
    }
    ctx->pc = 0x1E47C0u;
    // 0x1e47c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E47C0u;
    {
        const bool branch_taken_0x1e47c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47C0u;
        // 0x1e47c4: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47c0) {
            ctx->pc = 0x1E47DCu;
            goto label_1e47dc;
        }
    }
    ctx->pc = 0x1E47C8u;
label_1e47c8:
    // 0x1e47c8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1e47c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1e47cc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1e47ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_1e47d0:
    // 0x1e47d0: 0x1a7182a  slt         $v1, $t5, $a3
    ctx->pc = 0x1e47d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1e47d4: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E47D4u;
    {
        const bool branch_taken_0x1e47d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e47d4) {
            ctx->pc = 0x1E47ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e47ac;
        }
    }
    ctx->pc = 0x1E47DCu;
label_1e47dc:
    // 0x1e47dc: 0x0  nop
    ctx->pc = 0x1e47dcu;
    // NOP
    // 0x1e47e0: 0x1180000f  beqz        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x1E47E0u;
    {
        const bool branch_taken_0x1e47e0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47E0u;
        // 0x1e47e4: 0xaa3821  addu        $a3, $a1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47e0) {
            ctx->pc = 0x1E4820u;
            goto label_1e4820;
        }
    }
    ctx->pc = 0x1E47E8u;
    // 0x1e47e8: 0xa0e60083  sb          $a2, 0x83($a3)
    ctx->pc = 0x1e47e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 131), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e47ec: 0x8f838d84  lw          $v1, -0x727C($gp)
    ctx->pc = 0x1e47ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937988)));
    // 0x1e47f0: 0x146b0004  bne         $v1, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E47F0u;
    {
        const bool branch_taken_0x1e47f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        ctx->pc = 0x1E47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47F0u;
        // 0x1e47f4: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47f0) {
            ctx->pc = 0x1E4804u;
            goto label_1e4804;
        }
    }
    ctx->pc = 0x1E47F8u;
    // 0x1e47f8: 0xdc232920  ld          $v1, 0x2920($at)
    ctx->pc = 0x1e47f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 10528)));
    // 0x1e47fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E47FCu;
    {
        const bool branch_taken_0x1e47fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47FCu;
        // 0x1e4800: 0xfce30cf0  sd          $v1, 0xCF0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 3312), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47fc) {
            ctx->pc = 0x1E4814u;
            goto label_1e4814;
        }
    }
    ctx->pc = 0x1E4804u;
label_1e4804:
    // 0x1e4804: 0x0  nop
    ctx->pc = 0x1e4804u;
    // NOP
    // 0x1e4808: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e4808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e480c: 0xdc232928  ld          $v1, 0x2928($at)
    ctx->pc = 0x1e480cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x4B2928u));
    // 0x1e4810: 0xfce30cf0  sd          $v1, 0xCF0($a3)
    ctx->pc = 0x1e4810u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 3312), GPR_U64(ctx, 3));
label_1e4814:
    // 0x1e4814: 0x0  nop
    ctx->pc = 0x1e4814u;
    // NOP
    // 0x1e4818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E4818u;
    {
        const bool branch_taken_0x1e4818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4818u;
        // 0x1e481c: 0xa0e60d03  sb          $a2, 0xD03($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3331), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4818) {
            ctx->pc = 0x1E482Cu;
            goto label_1e482c;
        }
    }
    ctx->pc = 0x1E4820u;
label_1e4820:
    // 0x1e4820: 0xaa1821  addu        $v1, $a1, $t2
    ctx->pc = 0x1e4820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1e4824: 0xa0600083  sb          $zero, 0x83($v1)
    ctx->pc = 0x1e4824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 131), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e4828: 0xa0600d03  sb          $zero, 0xD03($v1)
    ctx->pc = 0x1e4828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3331), (uint8_t)GPR_U32(ctx, 0));
label_1e482c:
    // 0x1e482c: 0x0  nop
    ctx->pc = 0x1e482cu;
    // NOP
    // 0x1e4830: 0x254a00a0  addiu       $t2, $t2, 0xA0
    ctx->pc = 0x1e4830u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
    // 0x1e4834: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1e4834u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1e4838:
    // 0x1e4838: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x1e4838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1e483c: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E483Cu;
    {
        const bool branch_taken_0x1e483c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E483Cu;
        // 0x1e4840: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e483c) {
            ctx->pc = 0x1E4848u;
            goto label_1e4848;
        }
    }
    ctx->pc = 0x1E4844u;
    // 0x1e4844: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x1e4844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1e4848:
    // 0x1e4848: 0x163182a  slt         $v1, $t3, $v1
    ctx->pc = 0x1e4848u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e484c: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1E484Cu;
    {
        const bool branch_taken_0x1e484c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e484c) {
            ctx->pc = 0x1E4798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4798;
        }
    }
    ctx->pc = 0x1E4854u;
    // 0x1e4854: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e4854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e4858: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4858u;
    {
        const bool branch_taken_0x1e4858 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4858u;
        // 0x1e485c: 0x8f838d84  lw          $v1, -0x727C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4858) {
            ctx->pc = 0x1E4868u;
            goto label_1e4868;
        }
    }
    ctx->pc = 0x1E4860u;
    // 0x1e4860: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4860u;
    {
        const bool branch_taken_0x1e4860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4860u;
        // 0x1e4864: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4860) {
            ctx->pc = 0x1E486Cu;
            goto label_1e486c;
        }
    }
    ctx->pc = 0x1E4868u;
label_1e4868:
    // 0x1e4868: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e4868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e486c:
    // 0x1e486c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e486cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e4870: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x1E4870u;
    {
        const bool branch_taken_0x1e4870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4870) {
            ctx->pc = 0x1E4938u;
            goto label_1e4938;
        }
    }
    ctx->pc = 0x1E4878u;
    // 0x1e4878: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e4878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1e487c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1e487cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4880: 0x2442b7b0  addiu       $v0, $v0, -0x4850
    ctx->pc = 0x1e4880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948784));
    // 0x1e4884: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1e4884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e4888: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e4888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1e488c: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x1e488cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4890: 0x2442b7b2  addiu       $v0, $v0, -0x484E
    ctx->pc = 0x1e4890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948786));
    // 0x1e4894: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e4894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e4898: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x1e4898u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e489c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x1e489cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e48a0: 0x24e3ffe0  addiu       $v1, $a3, -0x20
    ctx->pc = 0x1e48a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
    // 0x1e48a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e48a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e48a8: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x1e48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1e48ac: 0x24676c00  addiu       $a3, $v1, 0x6C00
    ctx->pc = 0x1e48acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x1e48b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e48b4: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1e48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x1e48b8: 0xa4a71990  sh          $a3, 0x1990($a1)
    ctx->pc = 0x1e48b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6544), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e48bc: 0x2502ffe0  addiu       $v0, $t0, -0x20
    ctx->pc = 0x1e48bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
    // 0x1e48c0: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1e48c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e48c4: 0x24e77900  addiu       $a3, $a3, 0x7900
    ctx->pc = 0x1e48c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
    // 0x1e48c8: 0x25020020  addiu       $v0, $t0, 0x20
    ctx->pc = 0x1e48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1e48cc: 0xa4a71992  sh          $a3, 0x1992($a1)
    ctx->pc = 0x1e48ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6546), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e48d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e48d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e48d4: 0xaca61994  sw          $a2, 0x1994($a1)
    ctx->pc = 0x1e48d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6548), GPR_U32(ctx, 6));
    // 0x1e48d8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1e48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1e48dc: 0xa4a319a0  sh          $v1, 0x19A0($a1)
    ctx->pc = 0x1e48dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6560), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e48e0: 0xa4a219a2  sh          $v0, 0x19A2($a1)
    ctx->pc = 0x1e48e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6562), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e48e4: 0xaca619a4  sw          $a2, 0x19A4($a1)
    ctx->pc = 0x1e48e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6564), GPR_U32(ctx, 6));
    // 0x1e48e8: 0x8f838d80  lw          $v1, -0x7280($gp)
    ctx->pc = 0x1e48e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937984)));
    // 0x1e48ec: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1e48ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1e48f0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E48F0u;
    {
        const bool branch_taken_0x1e48f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E48F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48F0u;
        // 0x1e48f4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48f0) {
            ctx->pc = 0x1E4914u;
            goto label_1e4914;
        }
    }
    ctx->pc = 0x1E48F8u;
    // 0x1e48f8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1e48f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e48fc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E48FCu;
    {
        const bool branch_taken_0x1e48fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48FCu;
        // 0x1e4900: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48fc) {
            ctx->pc = 0x1E490Cu;
            goto label_1e490c;
        }
    }
    ctx->pc = 0x1E4904u;
    // 0x1e4904: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e4904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e4908: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e4908u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1e490c:
    // 0x1e490c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E490Cu;
    {
        const bool branch_taken_0x1e490c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E490Cu;
        // 0x1e4910: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e490c) {
            ctx->pc = 0x1E4930u;
            goto label_1e4930;
        }
    }
    ctx->pc = 0x1E4914u;
label_1e4914:
    // 0x1e4914: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e4914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e4918: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1e4918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e491c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E491Cu;
    {
        const bool branch_taken_0x1e491c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E491Cu;
        // 0x1e4920: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e491c) {
            ctx->pc = 0x1E492Cu;
            goto label_1e492c;
        }
    }
    ctx->pc = 0x1E4924u;
    // 0x1e4924: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e4924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e4928: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e4928u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1e492c:
    // 0x1e492c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1e492cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1e4930:
    // 0x1e4930: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4930u;
    {
        const bool branch_taken_0x1e4930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4930u;
        // 0x1e4934: 0xa0a21983  sb          $v0, 0x1983($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6531), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4930) {
            ctx->pc = 0x1E493Cu;
            goto label_1e493c;
        }
    }
    ctx->pc = 0x1E4938u;
label_1e4938:
    // 0x1e4938: 0xa0a01983  sb          $zero, 0x1983($a1)
    ctx->pc = 0x1e4938u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6531), (uint8_t)GPR_U32(ctx, 0));
label_1e493c:
    // 0x1e493c: 0x2406019b  addiu       $a2, $zero, 0x19B
    ctx->pc = 0x1e493cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 411));
    // 0x1e4940: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e4940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4944: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e4944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4948: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E4948u;
    SET_GPR_U32(ctx, 31, 0x1E4950u);
    ctx->pc = 0x1E494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4948u;
    // 0x1e494c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E4948u, 0x1E4950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4950u;
}
