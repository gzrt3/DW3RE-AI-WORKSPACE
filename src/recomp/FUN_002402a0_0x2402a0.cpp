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

// Function: FUN_002402a0
// Address: 0x2402a0 - 0x2403a8
void FUN_002402a0_0x2402a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002402a0_0x2402a0");
#endif

    switch (ctx->pc) {
        case 0x2402d8u: goto label_2402d8;
        default: break;
    }

    ctx->pc = 0x2402a0u;

    // 0x2402a0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2402a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2402a4: 0x240c0009  addiu       $t4, $zero, 0x9
    ctx->pc = 0x2402a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2402a8: 0x240d0048  addiu       $t5, $zero, 0x48
    ctx->pc = 0x2402a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2402ac: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x2402acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2402b0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2402b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2402b4: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x2402b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2402b8: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x2402b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
    // 0x2402bc: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2402bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2402c0: 0x24abfffd  addiu       $t3, $a1, -0x3
    ctx->pc = 0x2402c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x2402c4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2402c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2402c8: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x2402c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2402cc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2402ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2402d0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2402d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2402d4: 0x24670000  addiu       $a3, $v1, 0x0
    ctx->pc = 0x2402d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_2402d8:
    // 0x2402d8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2402D8u;
    {
        const bool branch_taken_0x2402d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2402DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402D8u;
        // 0x2402dc: 0x2d610002  sltiu       $at, $t3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402d8) {
            ctx->pc = 0x2402F0u;
            goto label_2402f0;
        }
    }
    ctx->pc = 0x2402E0u;
    // 0x2402e0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2402E0u;
    {
        const bool branch_taken_0x2402e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2402e0) {
            ctx->pc = 0x2402F0u;
            goto label_2402f0;
        }
    }
    ctx->pc = 0x2402E8u;
    // 0x2402e8: 0x14aa0006  bne         $a1, $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2402E8u;
    {
        const bool branch_taken_0x2402e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 10));
        if (branch_taken_0x2402e8) {
            ctx->pc = 0x240304u;
            goto label_240304;
        }
    }
    ctx->pc = 0x2402F0u;
label_2402f0:
    // 0x2402f0: 0xed1821  addu        $v1, $a3, $t5
    ctx->pc = 0x2402f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x2402f4: 0x8c630168  lw          $v1, 0x168($v1)
    ctx->pc = 0x2402f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 360)));
    // 0x2402f8: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x2402f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2402fc: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2402FCu;
    {
        const bool branch_taken_0x2402fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2402fc) {
            ctx->pc = 0x24032Cu;
            goto label_24032c;
        }
    }
    ctx->pc = 0x240304u;
label_240304:
    // 0x240304: 0x0  nop
    ctx->pc = 0x240304u;
    // NOP
    // 0x240308: 0x10a90003  beq         $a1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x240308u;
    {
        const bool branch_taken_0x240308 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        if (branch_taken_0x240308) {
            ctx->pc = 0x240318u;
            goto label_240318;
        }
    }
    ctx->pc = 0x240310u;
    // 0x240310: 0x14a80012  bne         $a1, $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x240310u;
    {
        const bool branch_taken_0x240310 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        if (branch_taken_0x240310) {
            ctx->pc = 0x24035Cu;
            goto label_24035c;
        }
    }
    ctx->pc = 0x240318u;
label_240318:
    // 0x240318: 0xed1821  addu        $v1, $a3, $t5
    ctx->pc = 0x240318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x24031c: 0x8c630168  lw          $v1, 0x168($v1)
    ctx->pc = 0x24031cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 360)));
    // 0x240320: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x240320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x240324: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x240324u;
    {
        const bool branch_taken_0x240324 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x240324) {
            ctx->pc = 0x24035Cu;
            goto label_24035c;
        }
    }
    ctx->pc = 0x24032Cu;
label_24032c:
    // 0x24032c: 0x0  nop
    ctx->pc = 0x24032cu;
    // NOP
    // 0x240330: 0x29810009  slti        $at, $t4, 0x9
    ctx->pc = 0x240330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x240334: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x240334u;
    {
        const bool branch_taken_0x240334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240334u;
        // 0x240338: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240334) {
            ctx->pc = 0x240350u;
            goto label_240350;
        }
    }
    ctx->pc = 0x24033Cu;
    // 0x24033c: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x24033cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x240340: 0x8dc30168  lw          $v1, 0x168($t6)
    ctx->pc = 0x240340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 360)));
    // 0x240344: 0xadc30170  sw          $v1, 0x170($t6)
    ctx->pc = 0x240344u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 368), GPR_U32(ctx, 3));
    // 0x240348: 0x8dc30164  lw          $v1, 0x164($t6)
    ctx->pc = 0x240348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 356)));
    // 0x24034c: 0xadc3016c  sw          $v1, 0x16C($t6)
    ctx->pc = 0x24034cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 364), GPR_U32(ctx, 3));
label_240350:
    // 0x240350: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x240350u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x240354: 0x581ffe0  bgez        $t4, . + 4 + (-0x20 << 2)
    ctx->pc = 0x240354u;
    {
        const bool branch_taken_0x240354 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x240358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240354u;
        // 0x240358: 0x25adfff8  addiu       $t5, $t5, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240354) {
            ctx->pc = 0x2402D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2402d8;
        }
    }
    ctx->pc = 0x24035Cu;
label_24035c:
    // 0x24035c: 0x0  nop
    ctx->pc = 0x24035cu;
    // NOP
    // 0x240360: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x240360u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x240364: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x240364u;
    {
        const bool branch_taken_0x240364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240364u;
        // 0x240368: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240364) {
            ctx->pc = 0x2403A8u;
            return;
        }
    }
    ctx->pc = 0x24036Cu;
    // 0x24036c: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x24036cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x240370: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x240370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x240374: 0x24e7caf8  addiu       $a3, $a3, -0x3508
    ctx->pc = 0x240374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953720));
    // 0x240378: 0x34900  sll         $t1, $v1, 4
    ctx->pc = 0x240378u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x24037c: 0x240c0  sll         $t0, $v0, 3
    ctx->pc = 0x24037cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x240380: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x240380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x240384: 0xe92821  addu        $a1, $a3, $t1
    ctx->pc = 0x240384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x240388: 0x2463caf4  addiu       $v1, $v1, -0x350C
    ctx->pc = 0x240388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953716));
    // 0x24038c: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x24038cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x240390: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x240390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x240394: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x240394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x240398: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x240398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x24039c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x24039cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x2403a0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2403a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2403a4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2403a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x2403a8u;
}
