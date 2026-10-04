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

// Function: FUN_0015a8e0
// Address: 0x15a8e0 - 0x15ab68
void FUN_0015a8e0_0x15a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015a8e0_0x15a8e0");
#endif

    switch (ctx->pc) {
        case 0x15aa44u: goto label_15aa44;
        case 0x15aa5cu: goto label_15aa5c;
        case 0x15ab30u: goto label_15ab30;
        case 0x15ab48u: goto label_15ab48;
        default: break;
    }

    ctx->pc = 0x15a8e0u;

    // 0x15a8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15a8e4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x15a8e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15a8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15a8ec: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a8f0: 0x9026490c  lbu         $a2, 0x490C($at)
    ctx->pc = 0x15a8f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x15a8f4: 0x244238e0  addiu       $v0, $v0, 0x38E0
    ctx->pc = 0x15a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14560));
    // 0x15a8f8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x15a8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x15a8fc: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x15a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x15a900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15a900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15a904: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x15a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x15a908: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15a908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15a90c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x15a90cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a910: 0x1045001a  beq         $v0, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x15A910u;
    {
        const bool branch_taken_0x15a910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x15A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A910u;
        // 0x15a914: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a910) {
            ctx->pc = 0x15A97Cu;
            goto label_15a97c;
        }
    }
    ctx->pc = 0x15A918u;
    // 0x15a918: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A918u;
    {
        const bool branch_taken_0x15a918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a918) {
            ctx->pc = 0x15A928u;
            goto label_15a928;
        }
    }
    ctx->pc = 0x15A920u;
    // 0x15a920: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x15A920u;
    {
        const bool branch_taken_0x15a920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A920u;
        // 0x15a924: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a920) {
            ctx->pc = 0x15AB68u;
            return;
        }
    }
    ctx->pc = 0x15A928u;
label_15a928:
    // 0x15a928: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x15a928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x15a92c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x15a92cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x15a930: 0x643823  subu        $a3, $v1, $a0
    ctx->pc = 0x15a930u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15a934: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x15a934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x15a938: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x15a938u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x15a93c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x15a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x15a940: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15a940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15a944: 0x24843b80  addiu       $a0, $a0, 0x3B80
    ctx->pc = 0x15a944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
    // 0x15a948: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x15a948u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x15a94c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x15a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x15a950: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15a950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15a954: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x15a954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15a958: 0x94a6000a  lhu         $a2, 0xA($a1)
    ctx->pc = 0x15a958u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x15a95c: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x15a95cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x15a960: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15a960u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15a964: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15a964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15a968: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x15a968u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15a96c: 0x1483007d  bne         $a0, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x15A96Cu;
    {
        const bool branch_taken_0x15a96c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15a96c) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15A974u;
    // 0x15a974: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x15A974u;
    {
        const bool branch_taken_0x15a974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A974u;
        // 0x15a978: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a974) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15A97Cu;
label_15a97c:
    // 0x15a97c: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x15a97cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15a980: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x15a980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x15a984: 0x10830076  beq         $a0, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x15A984u;
    {
        const bool branch_taken_0x15a984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A984u;
        // 0x15a988: 0x24030037  addiu       $v1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a984) {
            ctx->pc = 0x15AB60u;
            goto label_15ab60;
        }
    }
    ctx->pc = 0x15A98Cu;
    // 0x15a98c: 0x10830074  beq         $a0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x15A98Cu;
    {
        const bool branch_taken_0x15a98c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a98c) {
            ctx->pc = 0x15AB60u;
            goto label_15ab60;
        }
    }
    ctx->pc = 0x15A994u;
    // 0x15a994: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x15a994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x15a998: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x15A998u;
    {
        const bool branch_taken_0x15a998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A998u;
        // 0x15a99c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a998) {
            ctx->pc = 0x15AAF8u;
            goto label_15aaf8;
        }
    }
    ctx->pc = 0x15A9A0u;
    // 0x15a9a0: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x15a9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x15a9a4: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x15A9A4u;
    {
        const bool branch_taken_0x15a9a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9A4u;
        // 0x15a9a8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9a4) {
            ctx->pc = 0x15AA74u;
            goto label_15aa74;
        }
    }
    ctx->pc = 0x15A9ACu;
    // 0x15a9ac: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x15a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x15a9b0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A9B0u;
    {
        const bool branch_taken_0x15a9b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9B0u;
        // 0x15a9b4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9b0) {
            ctx->pc = 0x15A9C0u;
            goto label_15a9c0;
        }
    }
    ctx->pc = 0x15A9B8u;
    // 0x15a9b8: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x15A9B8u;
    {
        const bool branch_taken_0x15a9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a9b8) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15A9C0u;
label_15a9c0:
    // 0x15a9c0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x15a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15a9c4: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x15a9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
    // 0x15a9c8: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x15A9C8u;
    {
        const bool branch_taken_0x15a9c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9C8u;
        // 0x15a9cc: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9c8) {
            ctx->pc = 0x15AA3Cu;
            goto label_15aa3c;
        }
    }
    ctx->pc = 0x15A9D0u;
    // 0x15a9d0: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x15A9D0u;
    {
        const bool branch_taken_0x15a9d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a9d0) {
            ctx->pc = 0x15AA3Cu;
            goto label_15aa3c;
        }
    }
    ctx->pc = 0x15A9D8u;
    // 0x15a9d8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x15a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15a9dc: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x15A9DCu;
    {
        const bool branch_taken_0x15a9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9DCu;
        // 0x15a9e0: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9dc) {
            ctx->pc = 0x15AA34u;
            goto label_15aa34;
        }
    }
    ctx->pc = 0x15A9E4u;
    // 0x15a9e4: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x15A9E4u;
    {
        const bool branch_taken_0x15a9e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a9e4) {
            ctx->pc = 0x15AA2Cu;
            goto label_15aa2c;
        }
    }
    ctx->pc = 0x15A9ECu;
    // 0x15a9ec: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x15a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15a9f0: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x15A9F0u;
    {
        const bool branch_taken_0x15a9f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9F0u;
        // 0x15a9f4: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9f0) {
            ctx->pc = 0x15AA2Cu;
            goto label_15aa2c;
        }
    }
    ctx->pc = 0x15A9F8u;
    // 0x15a9f8: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15A9F8u;
    {
        const bool branch_taken_0x15a9f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a9f8) {
            ctx->pc = 0x15AA24u;
            goto label_15aa24;
        }
    }
    ctx->pc = 0x15AA00u;
    // 0x15aa00: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x15aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x15aa04: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15AA04u;
    {
        const bool branch_taken_0x15aa04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA04u;
        // 0x15aa08: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa04) {
            ctx->pc = 0x15AA24u;
            goto label_15aa24;
        }
    }
    ctx->pc = 0x15AA0Cu;
    // 0x15aa0c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AA0Cu;
    {
        const bool branch_taken_0x15aa0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15aa0c) {
            ctx->pc = 0x15AA1Cu;
            goto label_15aa1c;
        }
    }
    ctx->pc = 0x15AA14u;
    // 0x15aa14: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x15AA14u;
    {
        const bool branch_taken_0x15aa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aa14) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AA1Cu;
label_15aa1c:
    // 0x15aa1c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x15AA1Cu;
    {
        const bool branch_taken_0x15aa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA1Cu;
        // 0x15aa20: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa1c) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AA24u;
label_15aa24:
    // 0x15aa24: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x15AA24u;
    {
        const bool branch_taken_0x15aa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA24u;
        // 0x15aa28: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa24) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AA2Cu;
label_15aa2c:
    // 0x15aa2c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x15AA2Cu;
    {
        const bool branch_taken_0x15aa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA2Cu;
        // 0x15aa30: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa2c) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AA34u;
label_15aa34:
    // 0x15aa34: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x15AA34u;
    {
        const bool branch_taken_0x15aa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA34u;
        // 0x15aa38: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa34) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AA3Cu;
label_15aa3c:
    // 0x15aa3c: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x15AA3Cu;
    SET_GPR_U32(ctx, 31, 0x15AA44u);
    ctx->pc = 0x15AA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AA3Cu;
    // 0x15aa40: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x15AA3Cu, 0x15AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AA44u;
label_15aa44:
    // 0x15aa44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AA44u;
    {
        const bool branch_taken_0x15aa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA44u;
        // 0x15aa48: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa44) {
            ctx->pc = 0x15AA54u;
            goto label_15aa54;
        }
    }
    ctx->pc = 0x15AA4Cu;
    // 0x15aa4c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x15AA4Cu;
    {
        const bool branch_taken_0x15aa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA4Cu;
        // 0x15aa50: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa4c) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AA54u;
label_15aa54:
    // 0x15aa54: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x15AA54u;
    SET_GPR_U32(ctx, 31, 0x15AA5Cu);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x15AA54u, 0x15AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AA5Cu;
label_15aa5c:
    // 0x15aa5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AA5Cu;
    {
        const bool branch_taken_0x15aa5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aa5c) {
            ctx->pc = 0x15AA6Cu;
            goto label_15aa6c;
        }
    }
    ctx->pc = 0x15AA64u;
    // 0x15aa64: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x15AA64u;
    {
        const bool branch_taken_0x15aa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA64u;
        // 0x15aa68: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa64) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AA6Cu;
label_15aa6c:
    // 0x15aa6c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x15AA6Cu;
    {
        const bool branch_taken_0x15aa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA6Cu;
        // 0x15aa70: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa6c) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AA74u;
label_15aa74:
    // 0x15aa74: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x15aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15aa78: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x15aa78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
    // 0x15aa7c: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x15AA7Cu;
    {
        const bool branch_taken_0x15aa7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA7Cu;
        // 0x15aa80: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa7c) {
            ctx->pc = 0x15AAF0u;
            goto label_15aaf0;
        }
    }
    ctx->pc = 0x15AA84u;
    // 0x15aa84: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x15AA84u;
    {
        const bool branch_taken_0x15aa84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15aa84) {
            ctx->pc = 0x15AAE8u;
            goto label_15aae8;
        }
    }
    ctx->pc = 0x15AA8Cu;
    // 0x15aa8c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x15aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x15aa90: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15AA90u;
    {
        const bool branch_taken_0x15aa90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA90u;
        // 0x15aa94: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa90) {
            ctx->pc = 0x15AAE0u;
            goto label_15aae0;
        }
    }
    ctx->pc = 0x15AA98u;
    // 0x15aa98: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x15AA98u;
    {
        const bool branch_taken_0x15aa98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15aa98) {
            ctx->pc = 0x15AAE0u;
            goto label_15aae0;
        }
    }
    ctx->pc = 0x15AAA0u;
    // 0x15aaa0: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x15aaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x15aaa4: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x15AAA4u;
    {
        const bool branch_taken_0x15aaa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAA4u;
        // 0x15aaa8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aaa4) {
            ctx->pc = 0x15AAD8u;
            goto label_15aad8;
        }
    }
    ctx->pc = 0x15AAACu;
    // 0x15aaac: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15AAACu;
    {
        const bool branch_taken_0x15aaac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15aaac) {
            ctx->pc = 0x15AAD8u;
            goto label_15aad8;
        }
    }
    ctx->pc = 0x15AAB4u;
    // 0x15aab4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x15aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15aab8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15AAB8u;
    {
        const bool branch_taken_0x15aab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAB8u;
        // 0x15aabc: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aab8) {
            ctx->pc = 0x15AAD0u;
            goto label_15aad0;
        }
    }
    ctx->pc = 0x15AAC0u;
    // 0x15aac0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AAC0u;
    {
        const bool branch_taken_0x15aac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15aac0) {
            ctx->pc = 0x15AAD0u;
            goto label_15aad0;
        }
    }
    ctx->pc = 0x15AAC8u;
    // 0x15aac8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x15AAC8u;
    {
        const bool branch_taken_0x15aac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aac8) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AAD0u;
label_15aad0:
    // 0x15aad0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x15AAD0u;
    {
        const bool branch_taken_0x15aad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAD0u;
        // 0x15aad4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aad0) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AAD8u;
label_15aad8:
    // 0x15aad8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x15AAD8u;
    {
        const bool branch_taken_0x15aad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAD8u;
        // 0x15aadc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aad8) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AAE0u;
label_15aae0:
    // 0x15aae0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x15AAE0u;
    {
        const bool branch_taken_0x15aae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAE0u;
        // 0x15aae4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aae0) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AAE8u;
label_15aae8:
    // 0x15aae8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x15AAE8u;
    {
        const bool branch_taken_0x15aae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAE8u;
        // 0x15aaec: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aae8) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AAF0u;
label_15aaf0:
    // 0x15aaf0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x15AAF0u;
    {
        const bool branch_taken_0x15aaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAF0u;
        // 0x15aaf4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aaf0) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AAF8u;
label_15aaf8:
    // 0x15aaf8: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x15aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
    // 0x15aafc: 0x1085000a  beq         $a0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x15AAFCu;
    {
        const bool branch_taken_0x15aafc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x15AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAFCu;
        // 0x15ab00: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aafc) {
            ctx->pc = 0x15AB28u;
            goto label_15ab28;
        }
    }
    ctx->pc = 0x15AB04u;
    // 0x15ab04: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15AB04u;
    {
        const bool branch_taken_0x15ab04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15ab04) {
            ctx->pc = 0x15AB20u;
            goto label_15ab20;
        }
    }
    ctx->pc = 0x15AB0Cu;
    // 0x15ab0c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x15ab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x15ab10: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AB10u;
    {
        const bool branch_taken_0x15ab10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15ab10) {
            ctx->pc = 0x15AB20u;
            goto label_15ab20;
        }
    }
    ctx->pc = 0x15AB18u;
    // 0x15ab18: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15AB18u;
    {
        const bool branch_taken_0x15ab18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ab18) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AB20u;
label_15ab20:
    // 0x15ab20: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15AB20u;
    {
        const bool branch_taken_0x15ab20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB20u;
        // 0x15ab24: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab20) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AB28u;
label_15ab28:
    // 0x15ab28: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x15AB28u;
    SET_GPR_U32(ctx, 31, 0x15AB30u);
    ctx->pc = 0x15AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB28u;
    // 0x15ab2c: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x15AB28u, 0x15AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB30u;
label_15ab30:
    // 0x15ab30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AB30u;
    {
        const bool branch_taken_0x15ab30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB30u;
        // 0x15ab34: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab30) {
            ctx->pc = 0x15AB40u;
            goto label_15ab40;
        }
    }
    ctx->pc = 0x15AB38u;
    // 0x15ab38: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15AB38u;
    {
        const bool branch_taken_0x15ab38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB38u;
        // 0x15ab3c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab38) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AB40u;
label_15ab40:
    // 0x15ab40: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x15AB40u;
    SET_GPR_U32(ctx, 31, 0x15AB48u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x15AB40u, 0x15AB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB48u;
label_15ab48:
    // 0x15ab48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AB48u;
    {
        const bool branch_taken_0x15ab48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ab48) {
            ctx->pc = 0x15AB58u;
            goto label_15ab58;
        }
    }
    ctx->pc = 0x15AB50u;
    // 0x15ab50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15AB50u;
    {
        const bool branch_taken_0x15ab50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB50u;
        // 0x15ab54: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab50) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AB58u;
label_15ab58:
    // 0x15ab58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15AB58u;
    {
        const bool branch_taken_0x15ab58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB58u;
        // 0x15ab5c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab58) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AB60u;
label_15ab60:
    // 0x15ab60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ab64:
    // 0x15ab64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15ab64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x15ab68u;
}
