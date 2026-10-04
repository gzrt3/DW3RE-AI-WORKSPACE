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

// Function: FUN_001ec6f0
// Address: 0x1ec6f0 - 0x1ec8b8
void FUN_001ec6f0_0x1ec6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec6f0_0x1ec6f0");
#endif

    switch (ctx->pc) {
        case 0x1ec778u: goto label_1ec778;
        case 0x1ec838u: goto label_1ec838;
        case 0x1ec880u: goto label_1ec880;
        case 0x1ec8b4u: goto label_1ec8b4;
        default: break;
    }

    ctx->pc = 0x1ec6f0u;

    // 0x1ec6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ec6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ec6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec6f8: 0x8f838f20  lw          $v1, -0x70E0($gp)
    ctx->pc = 0x1ec6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938400)));
    // 0x1ec6fc: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x1EC6FCu;
    {
        const bool branch_taken_0x1ec6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6FCu;
        // 0x1ec700: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6fc) {
            ctx->pc = 0x1EC8B4u;
            goto label_1ec8b4;
        }
    }
    ctx->pc = 0x1EC704u;
    // 0x1ec704: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1ec704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1ec708: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1ec708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x1ec70c: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1ec70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
    // 0x1ec710: 0x8f828f24  lw          $v0, -0x70DC($gp)
    ctx->pc = 0x1ec710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938404)));
    // 0x1ec714: 0x62140  sll         $a0, $a2, 5
    ctx->pc = 0x1ec714u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1ec718: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1EC718u;
    {
        const bool branch_taken_0x1ec718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC718u;
        // 0x1ec71c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec718) {
            ctx->pc = 0x1EC7B0u;
            goto label_1ec7b0;
        }
    }
    ctx->pc = 0x1EC720u;
    // 0x1ec720: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1ec720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1ec724: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1ec724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x1ec728: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1ec728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ec72c: 0x24420920  addiu       $v0, $v0, 0x920
    ctx->pc = 0x1ec72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2336));
    // 0x1ec730: 0x8f838f28  lw          $v1, -0x70D8($gp)
    ctx->pc = 0x1ec730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
    // 0x1ec734: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1ec734u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ec738: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1ec738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ec73c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1ec73cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ec740: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ec740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ec744: 0x24451060  addiu       $a1, $v0, 0x1060
    ctx->pc = 0x1ec744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4192));
    // 0x1ec748: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC748u;
    {
        const bool branch_taken_0x1ec748 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC748u;
        // 0x1ec74c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec748) {
            ctx->pc = 0x1EC758u;
            goto label_1ec758;
        }
    }
    ctx->pc = 0x1EC750u;
    // 0x1ec750: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1ec750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ec754: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ec754u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ec758:
    // 0x1ec758: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC758u;
    {
        const bool branch_taken_0x1ec758 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC758u;
        // 0x1ec75c: 0x30470003  andi        $a3, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec758) {
            ctx->pc = 0x1EC76Cu;
            goto label_1ec76c;
        }
    }
    ctx->pc = 0x1EC760u;
    // 0x1ec760: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC760u;
    {
        const bool branch_taken_0x1ec760 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC760u;
        // 0x1ec764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec760) {
            ctx->pc = 0x1EC770u;
            goto label_1ec770;
        }
    }
    ctx->pc = 0x1EC768u;
    // 0x1ec768: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x1ec768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_1ec76c:
    // 0x1ec76c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ec76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec770:
    // 0x1ec770: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec774: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ec774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ec778:
    // 0x1ec778: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x1ec778u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1ec77c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC77Cu;
    {
        const bool branch_taken_0x1ec77c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC77Cu;
        // 0x1ec780: 0xa81021  addu        $v0, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec77c) {
            ctx->pc = 0x1EC78Cu;
            goto label_1ec78c;
        }
    }
    ctx->pc = 0x1EC784u;
    // 0x1ec784: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC784u;
    {
        const bool branch_taken_0x1ec784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC784u;
        // 0x1ec788: 0xa04306c3  sb          $v1, 0x6C3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1731), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec784) {
            ctx->pc = 0x1EC798u;
            goto label_1ec798;
        }
    }
    ctx->pc = 0x1EC78Cu;
label_1ec78c:
    // 0x1ec78c: 0x0  nop
    ctx->pc = 0x1ec78cu;
    // NOP
    // 0x1ec790: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x1ec790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1ec794: 0xa04006c3  sb          $zero, 0x6C3($v0)
    ctx->pc = 0x1ec794u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1731), (uint8_t)GPR_U32(ctx, 0));
label_1ec798:
    // 0x1ec798: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ec798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ec79c: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x1ec79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ec7a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1EC7A0u;
    {
        const bool branch_taken_0x1ec7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7A0u;
        // 0x1ec7a4: 0x250800a0  addiu       $t0, $t0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7a0) {
            ctx->pc = 0x1EC778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec778;
        }
    }
    ctx->pc = 0x1EC7A8u;
    // 0x1ec7a8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1EC7A8u;
    {
        const bool branch_taken_0x1ec7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec7a8) {
            ctx->pc = 0x1EC8A0u;
            goto label_1ec8a0;
        }
    }
    ctx->pc = 0x1EC7B0u;
label_1ec7b0:
    // 0x1ec7b0: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x1ec7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1ec7b4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1ec7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x1ec7b8: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x1ec7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ec7bc: 0x24630920  addiu       $v1, $v1, 0x920
    ctx->pc = 0x1ec7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2336));
    // 0x1ec7c0: 0x8f828f28  lw          $v0, -0x70D8($gp)
    ctx->pc = 0x1ec7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
    // 0x1ec7c4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1ec7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ec7c8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1ec7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ec7cc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1ec7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ec7d0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1ec7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ec7d4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC7D4u;
    {
        const bool branch_taken_0x1ec7d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7D4u;
        // 0x1ec7d8: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7d4) {
            ctx->pc = 0x1EC7E8u;
            goto label_1ec7e8;
        }
    }
    ctx->pc = 0x1EC7DCu;
    // 0x1ec7dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC7DCu;
    {
        const bool branch_taken_0x1ec7dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7DCu;
        // 0x1ec7e0: 0x28610021  slti        $at, $v1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7dc) {
            ctx->pc = 0x1EC7ECu;
            goto label_1ec7ec;
        }
    }
    ctx->pc = 0x1EC7E4u;
    // 0x1ec7e4: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1ec7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1ec7e8:
    // 0x1ec7e8: 0x28610021  slti        $at, $v1, 0x21
    ctx->pc = 0x1ec7e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
label_1ec7ec:
    // 0x1ec7ec: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EC7ECu;
    {
        const bool branch_taken_0x1ec7ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7ECu;
        // 0x1ec7f0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7ec) {
            ctx->pc = 0x1EC814u;
            goto label_1ec814;
        }
    }
    ctx->pc = 0x1EC7F4u;
    // 0x1ec7f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ec7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec7f8: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x1ec7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1ec7fc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC7FCu;
    {
        const bool branch_taken_0x1ec7fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7FCu;
        // 0x1ec800: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7fc) {
            ctx->pc = 0x1EC80Cu;
            goto label_1ec80c;
        }
    }
    ctx->pc = 0x1EC804u;
    // 0x1ec804: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1ec804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1ec808: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ec808u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1ec80c:
    // 0x1ec80c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC80Cu;
    {
        const bool branch_taken_0x1ec80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC80Cu;
        // 0x1ec810: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec80c) {
            ctx->pc = 0x1EC82Cu;
            goto label_1ec82c;
        }
    }
    ctx->pc = 0x1EC814u;
label_1ec814:
    // 0x1ec814: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1ec814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1ec818: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC818u;
    {
        const bool branch_taken_0x1ec818 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC818u;
        // 0x1ec81c: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec818) {
            ctx->pc = 0x1EC828u;
            goto label_1ec828;
        }
    }
    ctx->pc = 0x1EC820u;
    // 0x1ec820: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1ec820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1ec824: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ec824u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1ec828:
    // 0x1ec828: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ec828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec82c:
    // 0x1ec82c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ec82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec830: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec834: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ec834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec838:
    // 0x1ec838: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x1ec838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ec83c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1ec83cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1ec840: 0xa0e30083  sb          $v1, 0x83($a3)
    ctx->pc = 0x1ec840u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 131), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec844: 0x29020005  slti        $v0, $t0, 0x5
    ctx->pc = 0x1ec844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ec848: 0xa0e30123  sb          $v1, 0x123($a3)
    ctx->pc = 0x1ec848u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 291), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec84c: 0x24c60500  addiu       $a2, $a2, 0x500
    ctx->pc = 0x1ec84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1280));
    // 0x1ec850: 0xa0e301c3  sb          $v1, 0x1C3($a3)
    ctx->pc = 0x1ec850u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 451), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec854: 0xa0e30263  sb          $v1, 0x263($a3)
    ctx->pc = 0x1ec854u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 611), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec858: 0xa0e30303  sb          $v1, 0x303($a3)
    ctx->pc = 0x1ec858u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 771), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec85c: 0xa0e303a3  sb          $v1, 0x3A3($a3)
    ctx->pc = 0x1ec85cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 931), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec860: 0xa0e30443  sb          $v1, 0x443($a3)
    ctx->pc = 0x1ec860u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1091), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec864: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1EC864u;
    {
        const bool branch_taken_0x1ec864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC864u;
        // 0x1ec868: 0xa0e304e3  sb          $v1, 0x4E3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1251), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec864) {
            ctx->pc = 0x1EC838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec838;
        }
    }
    ctx->pc = 0x1EC86Cu;
    // 0x1ec86c: 0x2901000d  slti        $at, $t0, 0xD
    ctx->pc = 0x1ec86cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1ec870: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1EC870u;
    {
        const bool branch_taken_0x1ec870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC870u;
        // 0x1ec874: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec870) {
            ctx->pc = 0x1EC8A0u;
            goto label_1ec8a0;
        }
    }
    ctx->pc = 0x1EC878u;
    // 0x1ec878: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ec878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ec87c: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x1ec87cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1ec880:
    // 0x1ec880: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1ec880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ec884: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ec884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ec888: 0xa0430083  sb          $v1, 0x83($v0)
    ctx->pc = 0x1ec888u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 131), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec88c: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x1ec88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x1ec890: 0x2902000d  slti        $v0, $t0, 0xD
    ctx->pc = 0x1ec890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1ec894: 0x0  nop
    ctx->pc = 0x1ec894u;
    // NOP
    // 0x1ec898: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EC898u;
    {
        const bool branch_taken_0x1ec898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec898) {
            ctx->pc = 0x1EC880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec880;
        }
    }
    ctx->pc = 0x1EC8A0u;
label_1ec8a0:
    // 0x1ec8a0: 0x24060083  addiu       $a2, $zero, 0x83
    ctx->pc = 0x1ec8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x1ec8a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ec8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec8a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec8a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec8ac: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1EC8ACu;
    SET_GPR_U32(ctx, 31, 0x1EC8B4u);
    ctx->pc = 0x1EC8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC8ACu;
    // 0x1ec8b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1EC8ACu, 0x1EC8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC8B4u;
label_1ec8b4:
    // 0x1ec8b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ec8b8u;
}
