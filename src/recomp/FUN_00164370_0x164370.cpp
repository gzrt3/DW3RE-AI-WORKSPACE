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

// Function: FUN_00164370
// Address: 0x164370 - 0x1647c8
void FUN_00164370_0x164370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00164370_0x164370");
#endif

    switch (ctx->pc) {
        case 0x1643d0u: goto label_1643d0;
        case 0x164444u: goto label_164444;
        case 0x1644bcu: goto label_1644bc;
        case 0x164534u: goto label_164534;
        case 0x1645a4u: goto label_1645a4;
        case 0x16461cu: goto label_16461c;
        case 0x164688u: goto label_164688;
        default: break;
    }

    ctx->pc = 0x164370u;

    // 0x164370: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x164370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x164374: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x164374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x164378: 0x106200c0  beq         $v1, $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x164378u;
    {
        const bool branch_taken_0x164378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164378u;
        // 0x16437c: 0xaf808648  sw          $zero, -0x79B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164378) {
            ctx->pc = 0x16467Cu;
            goto label_16467c;
        }
    }
    ctx->pc = 0x164380u;
    // 0x164380: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x164380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x164384: 0x106200a2  beq         $v1, $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x164384u;
    {
        const bool branch_taken_0x164384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164384u;
        // 0x164388: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164384) {
            ctx->pc = 0x164610u;
            goto label_164610;
        }
    }
    ctx->pc = 0x16438Cu;
    // 0x16438c: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x16438Cu;
    {
        const bool branch_taken_0x16438c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16438c) {
            ctx->pc = 0x164598u;
            goto label_164598;
        }
    }
    ctx->pc = 0x164394u;
    // 0x164394: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x164394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164398: 0x10620063  beq         $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x164398u;
    {
        const bool branch_taken_0x164398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164398u;
        // 0x16439c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164398) {
            ctx->pc = 0x164528u;
            goto label_164528;
        }
    }
    ctx->pc = 0x1643A0u;
    // 0x1643a0: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1643A0u;
    {
        const bool branch_taken_0x1643a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1643a0) {
            ctx->pc = 0x1644B0u;
            goto label_1644b0;
        }
    }
    ctx->pc = 0x1643A8u;
    // 0x1643a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1643a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1643ac: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1643ACu;
    {
        const bool branch_taken_0x1643ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1643ac) {
            ctx->pc = 0x164438u;
            goto label_164438;
        }
    }
    ctx->pc = 0x1643B4u;
    // 0x1643b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1643B4u;
    {
        const bool branch_taken_0x1643b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1643b4) {
            ctx->pc = 0x1643C4u;
            goto label_1643c4;
        }
    }
    ctx->pc = 0x1643BCu;
    // 0x1643bc: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1643BCu;
    {
        const bool branch_taken_0x1643bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1643C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643BCu;
        // 0x1643c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643bc) {
            ctx->pc = 0x1646E4u;
            goto label_1646e4;
        }
    }
    ctx->pc = 0x1643C4u;
label_1643c4:
    // 0x1643c4: 0x8f83869c  lw          $v1, -0x7964($gp)
    ctx->pc = 0x1643c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936220)));
    // 0x1643c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1643C8u;
    {
        const bool branch_taken_0x1643c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1643CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643C8u;
        // 0x1643cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643c8) {
            ctx->pc = 0x1643E0u;
            goto label_1643e0;
        }
    }
    ctx->pc = 0x1643D0u;
label_1643d0:
    // 0x1643d0: 0x8f828648  lw          $v0, -0x79B8($gp)
    ctx->pc = 0x1643d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x1643d4: 0x24a50370  addiu       $a1, $a1, 0x370
    ctx->pc = 0x1643d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 880));
    // 0x1643d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1643d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1643dc: 0xaf828648  sw          $v0, -0x79B8($gp)
    ctx->pc = 0x1643dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 2));
label_1643e0:
    // 0x1643e0: 0x8f878648  lw          $a3, -0x79B8($gp)
    ctx->pc = 0x1643e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x1643e4: 0x28e1001e  slti        $at, $a3, 0x1E
    ctx->pc = 0x1643e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1643e8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1643E8u;
    {
        const bool branch_taken_0x1643e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1643ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643E8u;
        // 0x1643ec: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643e8) {
            ctx->pc = 0x1643FCu;
            goto label_1643fc;
        }
    }
    ctx->pc = 0x1643F0u;
    // 0x1643f0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1643f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1643f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1643F4u;
    {
        const bool branch_taken_0x1643f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1643f4) {
            ctx->pc = 0x1643D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1643d0;
        }
    }
    ctx->pc = 0x1643FCu;
label_1643fc:
    // 0x1643fc: 0x0  nop
    ctx->pc = 0x1643fcu;
    // NOP
    // 0x164400: 0x28e2001e  slti        $v0, $a3, 0x1E
    ctx->pc = 0x164400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x164404: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164404u;
    {
        const bool branch_taken_0x164404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164404u;
        // 0x164408: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164404) {
            ctx->pc = 0x164414u;
            goto label_164414;
        }
    }
    ctx->pc = 0x16440Cu;
    // 0x16440c: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x16440Cu;
    {
        const bool branch_taken_0x16440c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16440Cu;
        // 0x164410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16440c) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x164414u;
label_164414:
    // 0x164414: 0x8f82869c  lw          $v0, -0x7964($gp)
    ctx->pc = 0x164414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936220)));
    // 0x164418: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x164418u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x16441c: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x16441cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x164420: 0x8f838698  lw          $v1, -0x7968($gp)
    ctx->pc = 0x164420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936216)));
    // 0x164424: 0x8f858694  lw          $a1, -0x796C($gp)
    ctx->pc = 0x164424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936212)));
    // 0x164428: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x164428u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x16442c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x16442cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x164430: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x164430u;
    {
        const bool branch_taken_0x164430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164430u;
        // 0x164434: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164430) {
            ctx->pc = 0x1646ECu;
            goto label_1646ec;
        }
    }
    ctx->pc = 0x164438u;
label_164438:
    // 0x164438: 0x8f838690  lw          $v1, -0x7970($gp)
    ctx->pc = 0x164438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936208)));
    // 0x16443c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16443Cu;
    {
        const bool branch_taken_0x16443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16443Cu;
        // 0x164440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16443c) {
            ctx->pc = 0x164454u;
            goto label_164454;
        }
    }
    ctx->pc = 0x164444u;
label_164444:
    // 0x164444: 0x8f828648  lw          $v0, -0x79B8($gp)
    ctx->pc = 0x164444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x164448: 0x24a50370  addiu       $a1, $a1, 0x370
    ctx->pc = 0x164448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 880));
    // 0x16444c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x164450: 0xaf828648  sw          $v0, -0x79B8($gp)
    ctx->pc = 0x164450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 2));
label_164454:
    // 0x164454: 0x0  nop
    ctx->pc = 0x164454u;
    // NOP
    // 0x164458: 0x8f878648  lw          $a3, -0x79B8($gp)
    ctx->pc = 0x164458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x16445c: 0x28e1012c  slti        $at, $a3, 0x12C
    ctx->pc = 0x16445cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x164460: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x164460u;
    {
        const bool branch_taken_0x164460 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x164464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164460u;
        // 0x164464: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164460) {
            ctx->pc = 0x164474u;
            goto label_164474;
        }
    }
    ctx->pc = 0x164468u;
    // 0x164468: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x164468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16446c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x16446Cu;
    {
        const bool branch_taken_0x16446c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16446c) {
            ctx->pc = 0x164444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164444;
        }
    }
    ctx->pc = 0x164474u;
label_164474:
    // 0x164474: 0x0  nop
    ctx->pc = 0x164474u;
    // NOP
    // 0x164478: 0x28e2012c  slti        $v0, $a3, 0x12C
    ctx->pc = 0x164478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x16447c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16447Cu;
    {
        const bool branch_taken_0x16447c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16447Cu;
        // 0x164480: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16447c) {
            ctx->pc = 0x16448Cu;
            goto label_16448c;
        }
    }
    ctx->pc = 0x164484u;
    // 0x164484: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x164484u;
    {
        const bool branch_taken_0x164484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164484u;
        // 0x164488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164484) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x16448Cu;
label_16448c:
    // 0x16448c: 0x8f828690  lw          $v0, -0x7970($gp)
    ctx->pc = 0x16448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936208)));
    // 0x164490: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x164490u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x164494: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x164494u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x164498: 0x8f83868c  lw          $v1, -0x7974($gp)
    ctx->pc = 0x164498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936204)));
    // 0x16449c: 0x8f858688  lw          $a1, -0x7978($gp)
    ctx->pc = 0x16449cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936200)));
    // 0x1644a0: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1644a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1644a4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1644a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1644a8: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1644A8u;
    {
        const bool branch_taken_0x1644a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1644ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644A8u;
        // 0x1644ac: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644a8) {
            ctx->pc = 0x1646ECu;
            goto label_1646ec;
        }
    }
    ctx->pc = 0x1644B0u;
label_1644b0:
    // 0x1644b0: 0x8f838678  lw          $v1, -0x7988($gp)
    ctx->pc = 0x1644b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
    // 0x1644b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1644B4u;
    {
        const bool branch_taken_0x1644b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1644B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644B4u;
        // 0x1644b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644b4) {
            ctx->pc = 0x1644CCu;
            goto label_1644cc;
        }
    }
    ctx->pc = 0x1644BCu;
label_1644bc:
    // 0x1644bc: 0x8f828648  lw          $v0, -0x79B8($gp)
    ctx->pc = 0x1644bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x1644c0: 0x24a50de0  addiu       $a1, $a1, 0xDE0
    ctx->pc = 0x1644c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3552));
    // 0x1644c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1644c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1644c8: 0xaf828648  sw          $v0, -0x79B8($gp)
    ctx->pc = 0x1644c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 2));
label_1644cc:
    // 0x1644cc: 0x0  nop
    ctx->pc = 0x1644ccu;
    // NOP
    // 0x1644d0: 0x8f878648  lw          $a3, -0x79B8($gp)
    ctx->pc = 0x1644d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x1644d4: 0x28e1001e  slti        $at, $a3, 0x1E
    ctx->pc = 0x1644d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1644d8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1644D8u;
    {
        const bool branch_taken_0x1644d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1644DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644D8u;
        // 0x1644dc: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644d8) {
            ctx->pc = 0x1644ECu;
            goto label_1644ec;
        }
    }
    ctx->pc = 0x1644E0u;
    // 0x1644e0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1644e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1644e4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1644E4u;
    {
        const bool branch_taken_0x1644e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1644e4) {
            ctx->pc = 0x1644BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1644bc;
        }
    }
    ctx->pc = 0x1644ECu;
label_1644ec:
    // 0x1644ec: 0x0  nop
    ctx->pc = 0x1644ecu;
    // NOP
    // 0x1644f0: 0x28e2001e  slti        $v0, $a3, 0x1E
    ctx->pc = 0x1644f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1644f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1644F4u;
    {
        const bool branch_taken_0x1644f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1644F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644F4u;
        // 0x1644f8: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644f4) {
            ctx->pc = 0x164504u;
            goto label_164504;
        }
    }
    ctx->pc = 0x1644FCu;
    // 0x1644fc: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x1644FCu;
    {
        const bool branch_taken_0x1644fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644FCu;
        // 0x164500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644fc) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x164504u;
label_164504:
    // 0x164504: 0x8f828678  lw          $v0, -0x7988($gp)
    ctx->pc = 0x164504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
    // 0x164508: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x164508u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x16450c: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x16450cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x164510: 0x8f838674  lw          $v1, -0x798C($gp)
    ctx->pc = 0x164510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x164514: 0x8f858670  lw          $a1, -0x7990($gp)
    ctx->pc = 0x164514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936176)));
    // 0x164518: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x164518u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x16451c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x16451cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x164520: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x164520u;
    {
        const bool branch_taken_0x164520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164520u;
        // 0x164524: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164520) {
            ctx->pc = 0x1646ECu;
            goto label_1646ec;
        }
    }
    ctx->pc = 0x164528u;
label_164528:
    // 0x164528: 0x8f838660  lw          $v1, -0x79A0($gp)
    ctx->pc = 0x164528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x16452c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16452Cu;
    {
        const bool branch_taken_0x16452c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16452Cu;
        // 0x164530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16452c) {
            ctx->pc = 0x164544u;
            goto label_164544;
        }
    }
    ctx->pc = 0x164534u;
label_164534:
    // 0x164534: 0x8f828648  lw          $v0, -0x79B8($gp)
    ctx->pc = 0x164534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x164538: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x164538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x16453c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x164540: 0xaf828648  sw          $v0, -0x79B8($gp)
    ctx->pc = 0x164540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 2));
label_164544:
    // 0x164544: 0x0  nop
    ctx->pc = 0x164544u;
    // NOP
    // 0x164548: 0x8f868648  lw          $a2, -0x79B8($gp)
    ctx->pc = 0x164548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x16454c: 0x28c100c8  slti        $at, $a2, 0xC8
    ctx->pc = 0x16454cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x164550: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x164550u;
    {
        const bool branch_taken_0x164550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x164554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164550u;
        // 0x164554: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164550) {
            ctx->pc = 0x164564u;
            goto label_164564;
        }
    }
    ctx->pc = 0x164558u;
    // 0x164558: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x164558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16455c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x16455Cu;
    {
        const bool branch_taken_0x16455c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16455c) {
            ctx->pc = 0x164534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164534;
        }
    }
    ctx->pc = 0x164564u;
label_164564:
    // 0x164564: 0x0  nop
    ctx->pc = 0x164564u;
    // NOP
    // 0x164568: 0x28c200c8  slti        $v0, $a2, 0xC8
    ctx->pc = 0x164568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x16456c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16456Cu;
    {
        const bool branch_taken_0x16456c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16456Cu;
        // 0x164570: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16456c) {
            ctx->pc = 0x16457Cu;
            goto label_16457c;
        }
    }
    ctx->pc = 0x164574u;
    // 0x164574: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x164574u;
    {
        const bool branch_taken_0x164574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164574u;
        // 0x164578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164574) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x16457Cu;
label_16457c:
    // 0x16457c: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x16457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x164580: 0x662823  subu        $a1, $v1, $a2
    ctx->pc = 0x164580u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x164584: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x164584u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x164588: 0x8f83865c  lw          $v1, -0x79A4($gp)
    ctx->pc = 0x164588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
    // 0x16458c: 0x8f858658  lw          $a1, -0x79A8($gp)
    ctx->pc = 0x16458cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936152)));
    // 0x164590: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x164590u;
    {
        const bool branch_taken_0x164590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164590u;
        // 0x164594: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164590) {
            ctx->pc = 0x1646ECu;
            goto label_1646ec;
        }
    }
    ctx->pc = 0x164598u;
label_164598:
    // 0x164598: 0x8f838684  lw          $v1, -0x797C($gp)
    ctx->pc = 0x164598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936196)));
    // 0x16459c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16459Cu;
    {
        const bool branch_taken_0x16459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1645A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16459Cu;
        // 0x1645a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16459c) {
            ctx->pc = 0x1645B4u;
            goto label_1645b4;
        }
    }
    ctx->pc = 0x1645A4u;
label_1645a4:
    // 0x1645a4: 0x8f828648  lw          $v0, -0x79B8($gp)
    ctx->pc = 0x1645a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x1645a8: 0x24a50370  addiu       $a1, $a1, 0x370
    ctx->pc = 0x1645a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 880));
    // 0x1645ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1645acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1645b0: 0xaf828648  sw          $v0, -0x79B8($gp)
    ctx->pc = 0x1645b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 2));
label_1645b4:
    // 0x1645b4: 0x0  nop
    ctx->pc = 0x1645b4u;
    // NOP
    // 0x1645b8: 0x8f878648  lw          $a3, -0x79B8($gp)
    ctx->pc = 0x1645b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x1645bc: 0x28e10258  slti        $at, $a3, 0x258
    ctx->pc = 0x1645bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1645c0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1645C0u;
    {
        const bool branch_taken_0x1645c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1645C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645C0u;
        // 0x1645c4: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645c0) {
            ctx->pc = 0x1645D4u;
            goto label_1645d4;
        }
    }
    ctx->pc = 0x1645C8u;
    // 0x1645c8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1645c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1645cc: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1645CCu;
    {
        const bool branch_taken_0x1645cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1645cc) {
            ctx->pc = 0x1645A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1645a4;
        }
    }
    ctx->pc = 0x1645D4u;
label_1645d4:
    // 0x1645d4: 0x0  nop
    ctx->pc = 0x1645d4u;
    // NOP
    // 0x1645d8: 0x28e20258  slti        $v0, $a3, 0x258
    ctx->pc = 0x1645d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1645dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1645DCu;
    {
        const bool branch_taken_0x1645dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1645E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645DCu;
        // 0x1645e0: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645dc) {
            ctx->pc = 0x1645ECu;
            goto label_1645ec;
        }
    }
    ctx->pc = 0x1645E4u;
    // 0x1645e4: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1645E4u;
    {
        const bool branch_taken_0x1645e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1645E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645E4u;
        // 0x1645e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645e4) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x1645ECu;
label_1645ec:
    // 0x1645ec: 0x8f828684  lw          $v0, -0x797C($gp)
    ctx->pc = 0x1645ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936196)));
    // 0x1645f0: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x1645f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1645f4: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x1645f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1645f8: 0x8f838680  lw          $v1, -0x7980($gp)
    ctx->pc = 0x1645f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936192)));
    // 0x1645fc: 0x8f85867c  lw          $a1, -0x7984($gp)
    ctx->pc = 0x1645fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936188)));
    // 0x164600: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x164600u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x164604: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x164604u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x164608: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x164608u;
    {
        const bool branch_taken_0x164608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164608u;
        // 0x16460c: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164608) {
            ctx->pc = 0x1646ECu;
            goto label_1646ec;
        }
    }
    ctx->pc = 0x164610u;
label_164610:
    // 0x164610: 0x8f83866c  lw          $v1, -0x7994($gp)
    ctx->pc = 0x164610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936172)));
    // 0x164614: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x164614u;
    {
        const bool branch_taken_0x164614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164614u;
        // 0x164618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164614) {
            ctx->pc = 0x16462Cu;
            goto label_16462c;
        }
    }
    ctx->pc = 0x16461Cu;
label_16461c:
    // 0x16461c: 0x8f828648  lw          $v0, -0x79B8($gp)
    ctx->pc = 0x16461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x164620: 0x24a519a0  addiu       $a1, $a1, 0x19A0
    ctx->pc = 0x164620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6560));
    // 0x164624: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x164624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x164628: 0xaf828648  sw          $v0, -0x79B8($gp)
    ctx->pc = 0x164628u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 2));
label_16462c:
    // 0x16462c: 0x0  nop
    ctx->pc = 0x16462cu;
    // NOP
    // 0x164630: 0x8f868648  lw          $a2, -0x79B8($gp)
    ctx->pc = 0x164630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x164634: 0x28c10032  slti        $at, $a2, 0x32
    ctx->pc = 0x164634u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x164638: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x164638u;
    {
        const bool branch_taken_0x164638 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164638u;
        // 0x16463c: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164638) {
            ctx->pc = 0x16464Cu;
            goto label_16464c;
        }
    }
    ctx->pc = 0x164640u;
    // 0x164640: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x164640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164644: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x164644u;
    {
        const bool branch_taken_0x164644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164644) {
            ctx->pc = 0x16461Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16461c;
        }
    }
    ctx->pc = 0x16464Cu;
label_16464c:
    // 0x16464c: 0x0  nop
    ctx->pc = 0x16464cu;
    // NOP
    // 0x164650: 0x28c20032  slti        $v0, $a2, 0x32
    ctx->pc = 0x164650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x164654: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164654u;
    {
        const bool branch_taken_0x164654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164654u;
        // 0x164658: 0x240319a0  addiu       $v1, $zero, 0x19A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164654) {
            ctx->pc = 0x164664u;
            goto label_164664;
        }
    }
    ctx->pc = 0x16465Cu;
    // 0x16465c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x16465Cu;
    {
        const bool branch_taken_0x16465c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16465Cu;
        // 0x164660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16465c) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x164664u;
label_164664:
    // 0x164664: 0x8f82866c  lw          $v0, -0x7994($gp)
    ctx->pc = 0x164664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936172)));
    // 0x164668: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x164668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x16466c: 0x8f858664  lw          $a1, -0x799C($gp)
    ctx->pc = 0x16466cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936164)));
    // 0x164670: 0x8f838668  lw          $v1, -0x7998($gp)
    ctx->pc = 0x164670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x164674: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x164674u;
    {
        const bool branch_taken_0x164674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164674u;
        // 0x164678: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164674) {
            ctx->pc = 0x1646ECu;
            goto label_1646ec;
        }
    }
    ctx->pc = 0x16467Cu;
label_16467c:
    // 0x16467c: 0x8f838654  lw          $v1, -0x79AC($gp)
    ctx->pc = 0x16467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936148)));
    // 0x164680: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x164680u;
    {
        const bool branch_taken_0x164680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164680u;
        // 0x164684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164680) {
            ctx->pc = 0x164698u;
            goto label_164698;
        }
    }
    ctx->pc = 0x164688u;
label_164688:
    // 0x164688: 0x8f828648  lw          $v0, -0x79B8($gp)
    ctx->pc = 0x164688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x16468c: 0x24a51560  addiu       $a1, $a1, 0x1560
    ctx->pc = 0x16468cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5472));
    // 0x164690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x164690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x164694: 0xaf828648  sw          $v0, -0x79B8($gp)
    ctx->pc = 0x164694u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 2));
label_164698:
    // 0x164698: 0x8f868648  lw          $a2, -0x79B8($gp)
    ctx->pc = 0x164698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x16469c: 0x28c10032  slti        $at, $a2, 0x32
    ctx->pc = 0x16469cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1646a0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1646A0u;
    {
        const bool branch_taken_0x1646a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1646A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646A0u;
        // 0x1646a4: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646a0) {
            ctx->pc = 0x1646B4u;
            goto label_1646b4;
        }
    }
    ctx->pc = 0x1646A8u;
    // 0x1646a8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1646a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1646ac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1646ACu;
    {
        const bool branch_taken_0x1646ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1646ac) {
            ctx->pc = 0x164688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164688;
        }
    }
    ctx->pc = 0x1646B4u;
label_1646b4:
    // 0x1646b4: 0x0  nop
    ctx->pc = 0x1646b4u;
    // NOP
    // 0x1646b8: 0x28c20032  slti        $v0, $a2, 0x32
    ctx->pc = 0x1646b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1646bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1646BCu;
    {
        const bool branch_taken_0x1646bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1646C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646BCu;
        // 0x1646c0: 0x24031560  addiu       $v1, $zero, 0x1560 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646bc) {
            ctx->pc = 0x1646CCu;
            goto label_1646cc;
        }
    }
    ctx->pc = 0x1646C4u;
    // 0x1646c4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1646C4u;
    {
        const bool branch_taken_0x1646c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1646C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646C4u;
        // 0x1646c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646c4) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x1646CCu;
label_1646cc:
    // 0x1646cc: 0x8f828654  lw          $v0, -0x79AC($gp)
    ctx->pc = 0x1646ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936148)));
    // 0x1646d0: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x1646d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1646d4: 0x8f85864c  lw          $a1, -0x79B4($gp)
    ctx->pc = 0x1646d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936140)));
    // 0x1646d8: 0x8f838650  lw          $v1, -0x79B0($gp)
    ctx->pc = 0x1646d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936144)));
    // 0x1646dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1646DCu;
    {
        const bool branch_taken_0x1646dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1646E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646DCu;
        // 0x1646e0: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646dc) {
            ctx->pc = 0x1646ECu;
            goto label_1646ec;
        }
    }
    ctx->pc = 0x1646E4u;
label_1646e4:
    // 0x1646e4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1646E4u;
    {
        const bool branch_taken_0x1646e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1646e4) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x1646ECu;
label_1646ec:
    // 0x1646ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1646ECu;
    {
        const bool branch_taken_0x1646ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1646F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646ECu;
        // 0x1646f0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646ec) {
            ctx->pc = 0x1646FCu;
            goto label_1646fc;
        }
    }
    ctx->pc = 0x1646F4u;
    // 0x1646f4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1646F4u;
    {
        const bool branch_taken_0x1646f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1646F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646F4u;
        // 0x1646f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646f4) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x1646FCu;
label_1646fc:
    // 0x1646fc: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x1646fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x164700: 0x87868648  lh          $a2, -0x79B8($gp)
    ctx->pc = 0x164700u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x164704: 0xa4460002  sh          $a2, 0x2($v0)
    ctx->pc = 0x164704u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x164708: 0xa4440004  sh          $a0, 0x4($v0)
    ctx->pc = 0x164708u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x16470c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16470Cu;
    {
        const bool branch_taken_0x16470c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x164710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16470Cu;
        // 0x164710: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16470c) {
            ctx->pc = 0x164720u;
            goto label_164720;
        }
    }
    ctx->pc = 0x164714u;
    // 0x164714: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x164714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x164718: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164718u;
    {
        const bool branch_taken_0x164718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164718u;
        // 0x16471c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164718) {
            ctx->pc = 0x164728u;
            goto label_164728;
        }
    }
    ctx->pc = 0x164720u;
label_164720:
    // 0x164720: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x164720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x164724: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x164724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_164728:
    // 0x164728: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x164728u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16472c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x16472cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x164730: 0x10a40023  beq         $a1, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x164730u;
    {
        const bool branch_taken_0x164730 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x164734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164730u;
        // 0x164734: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164730) {
            ctx->pc = 0x1647C0u;
            goto label_1647c0;
        }
    }
    ctx->pc = 0x164738u;
    // 0x164738: 0x10a4001e  beq         $a1, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x164738u;
    {
        const bool branch_taken_0x164738 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x164738) {
            ctx->pc = 0x1647B4u;
            goto label_1647b4;
        }
    }
    ctx->pc = 0x164740u;
    // 0x164740: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x164740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x164744: 0x10a40018  beq         $a1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x164744u;
    {
        const bool branch_taken_0x164744 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x164748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164744u;
        // 0x164748: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164744) {
            ctx->pc = 0x1647A8u;
            goto label_1647a8;
        }
    }
    ctx->pc = 0x16474Cu;
    // 0x16474c: 0x10a40013  beq         $a1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16474Cu;
    {
        const bool branch_taken_0x16474c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x16474c) {
            ctx->pc = 0x16479Cu;
            goto label_16479c;
        }
    }
    ctx->pc = 0x164754u;
    // 0x164754: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x164754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164758: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x164758u;
    {
        const bool branch_taken_0x164758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x16475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164758u;
        // 0x16475c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164758) {
            ctx->pc = 0x164790u;
            goto label_164790;
        }
    }
    ctx->pc = 0x164760u;
    // 0x164760: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x164760u;
    {
        const bool branch_taken_0x164760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x164760) {
            ctx->pc = 0x164784u;
            goto label_164784;
        }
    }
    ctx->pc = 0x164768u;
    // 0x164768: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x164768u;
    {
        const bool branch_taken_0x164768 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x164768) {
            ctx->pc = 0x164778u;
            goto label_164778;
        }
    }
    ctx->pc = 0x164770u;
    // 0x164770: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x164770u;
    {
        const bool branch_taken_0x164770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164770) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x164778u;
label_164778:
    // 0x164778: 0xaf838698  sw          $v1, -0x7968($gp)
    ctx->pc = 0x164778u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936216), GPR_U32(ctx, 3));
    // 0x16477c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16477Cu;
    {
        const bool branch_taken_0x16477c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16477Cu;
        // 0x164780: 0xaf828694  sw          $v0, -0x796C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16477c) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x164784u;
label_164784:
    // 0x164784: 0xaf83868c  sw          $v1, -0x7974($gp)
    ctx->pc = 0x164784u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936204), GPR_U32(ctx, 3));
    // 0x164788: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x164788u;
    {
        const bool branch_taken_0x164788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164788u;
        // 0x16478c: 0xaf828688  sw          $v0, -0x7978($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164788) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x164790u;
label_164790:
    // 0x164790: 0xaf838674  sw          $v1, -0x798C($gp)
    ctx->pc = 0x164790u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936180), GPR_U32(ctx, 3));
    // 0x164794: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x164794u;
    {
        const bool branch_taken_0x164794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164794u;
        // 0x164798: 0xaf828670  sw          $v0, -0x7990($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164794) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x16479Cu;
label_16479c:
    // 0x16479c: 0xaf83865c  sw          $v1, -0x79A4($gp)
    ctx->pc = 0x16479cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 3));
    // 0x1647a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1647A0u;
    {
        const bool branch_taken_0x1647a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647A0u;
        // 0x1647a4: 0xaf828658  sw          $v0, -0x79A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647a0) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x1647A8u;
label_1647a8:
    // 0x1647a8: 0xaf838680  sw          $v1, -0x7980($gp)
    ctx->pc = 0x1647a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936192), GPR_U32(ctx, 3));
    // 0x1647ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1647ACu;
    {
        const bool branch_taken_0x1647ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647ACu;
        // 0x1647b0: 0xaf82867c  sw          $v0, -0x7984($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647ac) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x1647B4u;
label_1647b4:
    // 0x1647b4: 0xaf838668  sw          $v1, -0x7998($gp)
    ctx->pc = 0x1647b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936168), GPR_U32(ctx, 3));
    // 0x1647b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1647B8u;
    {
        const bool branch_taken_0x1647b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647B8u;
        // 0x1647bc: 0xaf828664  sw          $v0, -0x799C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647b8) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x1647C0u;
label_1647c0:
    // 0x1647c0: 0xaf838650  sw          $v1, -0x79B0($gp)
    ctx->pc = 0x1647c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936144), GPR_U32(ctx, 3));
    // 0x1647c4: 0xaf82864c  sw          $v0, -0x79B4($gp)
    ctx->pc = 0x1647c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936140), GPR_U32(ctx, 2));
    ctx->pc = 0x1647c8u;
}
