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

// Function: FUN_0020fb50
// Address: 0x20fb50 - 0x20ffec
void FUN_0020fb50_0x20fb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020fb50_0x20fb50");
#endif

    switch (ctx->pc) {
        case 0x20fb78u: goto label_20fb78;
        case 0x20fbd4u: goto label_20fbd4;
        case 0x20fc58u: goto label_20fc58;
        case 0x20fc7cu: goto label_20fc7c;
        case 0x20fcf4u: goto label_20fcf4;
        case 0x20fd48u: goto label_20fd48;
        case 0x20fda8u: goto label_20fda8;
        case 0x20fe74u: goto label_20fe74;
        case 0x20febcu: goto label_20febc;
        case 0x20ffa8u: goto label_20ffa8;
        default: break;
    }

    ctx->pc = 0x20fb50u;

    // 0x20fb50: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x20fb54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20fb54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20fb58: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x20fb58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x20fb5c: 0x3c07002b  lui         $a3, 0x2B
    ctx->pc = 0x20fb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)43 << 16));
    // 0x20fb60: 0x342133e8  ori         $at, $at, 0x33E8
    ctx->pc = 0x20fb60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13288);
    // 0x20fb64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20fb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20fb68: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x20fb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
    // 0x20fb6c: 0x24e7ff78  addiu       $a3, $a3, -0x88
    ctx->pc = 0x20fb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967160));
    // 0x20fb70: 0x814021  addu        $t0, $a0, $at
    ctx->pc = 0x20fb70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x20fb74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20fb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fb78:
    // 0x20fb78: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x20fb78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20fb7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20fb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20fb80: 0x28a20029  slti        $v0, $a1, 0x29
    ctx->pc = 0x20fb80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x20fb84: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x20fb84u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x20fb88: 0x85030002  lh          $v1, 0x2($t0)
    ctx->pc = 0x20fb88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x20fb8c: 0xa4e30002  sh          $v1, 0x2($a3)
    ctx->pc = 0x20fb8cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x20fb90: 0x91030004  lbu         $v1, 0x4($t0)
    ctx->pc = 0x20fb90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x20fb94: 0xa0e30004  sb          $v1, 0x4($a3)
    ctx->pc = 0x20fb94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x20fb98: 0x91030005  lbu         $v1, 0x5($t0)
    ctx->pc = 0x20fb98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x20fb9c: 0xa0e30005  sb          $v1, 0x5($a3)
    ctx->pc = 0x20fb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x20fba0: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x20fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x20fba4: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x20fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x20fba8: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x20fba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x20fbac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x20FBACu;
    {
        const bool branch_taken_0x20fbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBACu;
        // 0x20fbb0: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbac) {
            ctx->pc = 0x20FB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fb78;
        }
    }
    ctx->pc = 0x20FBB4u;
    // 0x20fbb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x20fbb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20fbb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fbbc: 0x342139c0  ori         $at, $at, 0x39C0
    ctx->pc = 0x20fbbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14784);
    // 0x20fbc0: 0xc13821  addu        $a3, $a2, $at
    ctx->pc = 0x20fbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x20fbc4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x20fbc8: 0x34213908  ori         $at, $at, 0x3908
    ctx->pc = 0x20fbc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14600);
    // 0x20fbcc: 0x814021  addu        $t0, $a0, $at
    ctx->pc = 0x20fbccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x20fbd0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x20fbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_20fbd4:
    // 0x20fbd4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x20fbd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20fbd8: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20FBD8u;
    {
        const bool branch_taken_0x20fbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x20fbd8) {
            ctx->pc = 0x20FBE4u;
            goto label_20fbe4;
        }
    }
    ctx->pc = 0x20FBE0u;
    // 0x20fbe0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x20fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20fbe4:
    // 0x20fbe4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x20fbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x20fbe8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x20fbe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x20fbec: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x20fbecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x20fbf0: 0x29220019  slti        $v0, $t1, 0x19
    ctx->pc = 0x20fbf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x20fbf4: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x20fbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x20fbf8: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x20fbf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x20fbfc: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x20FBFCu;
    {
        const bool branch_taken_0x20fbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBFCu;
        // 0x20fc00: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbfc) {
            ctx->pc = 0x20FBD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fbd4;
        }
    }
    ctx->pc = 0x20FC04u;
    // 0x20fc04: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x20fc08: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x20fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x20fc0c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x20fc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x20fc10: 0x902339dc  lbu         $v1, 0x39DC($at)
    ctx->pc = 0x20fc10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 14812)));
    // 0x20fc14: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20FC14u;
    {
        const bool branch_taken_0x20fc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC14u;
        // 0x20fc18: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc14) {
            ctx->pc = 0x20FC30u;
            goto label_20fc30;
        }
    }
    ctx->pc = 0x20FC1Cu;
    // 0x20fc1c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x20fc20: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x20fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20fc24: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x20fc24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x20fc28: 0xa02239dd  sb          $v0, 0x39DD($at)
    ctx->pc = 0x20fc28u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14813), (uint8_t)GPR_U32(ctx, 2));
    // 0x20fc2c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20fc30:
    // 0x20fc30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20fc30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc34: 0x34213a10  ori         $at, $at, 0x3A10
    ctx->pc = 0x20fc34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14864);
    // 0x20fc38: 0xc13021  addu        $a2, $a2, $at
    ctx->pc = 0x20fc38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x20fc3c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x20fc40: 0x3421393c  ori         $at, $at, 0x393C
    ctx->pc = 0x20fc40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14652);
    // 0x20fc44: 0x813821  addu        $a3, $a0, $at
    ctx->pc = 0x20fc44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x20fc48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fc4c: 0x24090019  addiu       $t1, $zero, 0x19
    ctx->pc = 0x20fc4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20fc50: 0x3c0a3e00  lui         $t2, 0x3E00
    ctx->pc = 0x20fc50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15872 << 16));
    // 0x20fc54: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x20fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_20fc58:
    // 0x20fc58: 0x90e4000a  lbu         $a0, 0xA($a3)
    ctx->pc = 0x20fc58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x20fc5c: 0xa0c4000a  sb          $a0, 0xA($a2)
    ctx->pc = 0x20fc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x20fc60: 0x90e4000b  lbu         $a0, 0xB($a3)
    ctx->pc = 0x20fc60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
    // 0x20fc64: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20FC64u;
    {
        const bool branch_taken_0x20fc64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20fc64) {
            ctx->pc = 0x20FC70u;
            goto label_20fc70;
        }
    }
    ctx->pc = 0x20FC6Cu;
    // 0x20fc6c: 0x240400ab  addiu       $a0, $zero, 0xAB
    ctx->pc = 0x20fc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_20fc70:
    // 0x20fc70: 0xa0c4000b  sb          $a0, 0xB($a2)
    ctx->pc = 0x20fc70u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 4));
    // 0x20fc74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20fc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20fc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fc7c:
    // 0x20fc7c: 0x0  nop
    ctx->pc = 0x20fc7cu;
    // NOP
    // 0x20fc80: 0x825814  dsllv       $t3, $v0, $a0
    ctx->pc = 0x20fc80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x20fc84: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x20fc84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x20fc88: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x20fc88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20fc8c: 0x1626014  dsllv       $t4, $v0, $t3
    ctx->pc = 0x20fc8cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
    // 0x20fc90: 0x248b0002  addiu       $t3, $a0, 0x2
    ctx->pc = 0x20fc90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x20fc94: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x20fc94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x20fc98: 0x1625814  dsllv       $t3, $v0, $t3
    ctx->pc = 0x20fc98u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
    // 0x20fc9c: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x20fc9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x20fca0: 0x248b0003  addiu       $t3, $a0, 0x3
    ctx->pc = 0x20fca0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x20fca4: 0x1626014  dsllv       $t4, $v0, $t3
    ctx->pc = 0x20fca4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
    // 0x20fca8: 0x248b0004  addiu       $t3, $a0, 0x4
    ctx->pc = 0x20fca8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x20fcac: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x20fcacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x20fcb0: 0x1625814  dsllv       $t3, $v0, $t3
    ctx->pc = 0x20fcb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
    // 0x20fcb4: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x20fcb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x20fcb8: 0x248b0005  addiu       $t3, $a0, 0x5
    ctx->pc = 0x20fcb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x20fcbc: 0x1626014  dsllv       $t4, $v0, $t3
    ctx->pc = 0x20fcbcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
    // 0x20fcc0: 0x248b0006  addiu       $t3, $a0, 0x6
    ctx->pc = 0x20fcc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x20fcc4: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x20fcc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x20fcc8: 0x1625814  dsllv       $t3, $v0, $t3
    ctx->pc = 0x20fcc8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
    // 0x20fccc: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x20fcccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x20fcd0: 0x248b0007  addiu       $t3, $a0, 0x7
    ctx->pc = 0x20fcd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x20fcd4: 0x1625814  dsllv       $t3, $v0, $t3
    ctx->pc = 0x20fcd4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
    // 0x20fcd8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x20fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x20fcdc: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x20fcdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x20fce0: 0x288b0011  slti        $t3, $a0, 0x11
    ctx->pc = 0x20fce0u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x20fce4: 0x1560ffe5  bnez        $t3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x20FCE4u;
    {
        const bool branch_taken_0x20fce4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCE4u;
        // 0x20fce8: 0x28810019  slti        $at, $a0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fce4) {
            ctx->pc = 0x20FC7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fc7c;
        }
    }
    ctx->pc = 0x20FCECu;
    // 0x20fcec: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x20FCECu;
    {
        const bool branch_taken_0x20fcec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fcec) {
            ctx->pc = 0x20FD14u;
            goto label_20fd14;
        }
    }
    ctx->pc = 0x20FCF4u;
label_20fcf4:
    // 0x20fcf4: 0x0  nop
    ctx->pc = 0x20fcf4u;
    // NOP
    // 0x20fcf8: 0x825814  dsllv       $t3, $v0, $a0
    ctx->pc = 0x20fcf8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x20fcfc: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x20fcfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x20fd00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20fd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20fd04: 0x288b0019  slti        $t3, $a0, 0x19
    ctx->pc = 0x20fd04u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x20fd08: 0x0  nop
    ctx->pc = 0x20fd08u;
    // NOP
    // 0x20fd0c: 0x1560fff9  bnez        $t3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20FD0Cu;
    {
        const bool branch_taken_0x20fd0c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fd0c) {
            ctx->pc = 0x20FCF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fcf4;
        }
    }
    ctx->pc = 0x20FD14u;
label_20fd14:
    // 0x20fd14: 0x0  nop
    ctx->pc = 0x20fd14u;
    // NOP
    // 0x20fd18: 0x9ce4000c  lwu         $a0, 0xC($a3)
    ctx->pc = 0x20fd18u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x20fd1c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x20fd1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd20: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x20fd20u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd24: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x20fd24u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd28: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x20fd28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x20fd2c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x20fd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x20fd30: 0x9ce5000c  lwu         $a1, 0xC($a3)
    ctx->pc = 0x20fd30u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x20fd34: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x20fd34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x20fd38: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x20fd38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x20fd3c: 0x52bf8  dsll        $a1, $a1, 15
    ctx->pc = 0x20fd3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 15);
    // 0x20fd40: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x20fd40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x20fd44: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x20fd44u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
label_20fd48:
    // 0x20fd48: 0x91840000  lbu         $a0, 0x0($t4)
    ctx->pc = 0x20fd48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x20fd4c: 0x14890002  bne         $a0, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20FD4Cu;
    {
        const bool branch_taken_0x20fd4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        if (branch_taken_0x20fd4c) {
            ctx->pc = 0x20FD58u;
            goto label_20fd58;
        }
    }
    ctx->pc = 0x20FD54u;
    // 0x20fd54: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x20fd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20fd58:
    // 0x20fd58: 0xa1640000  sb          $a0, 0x0($t3)
    ctx->pc = 0x20fd58u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20fd5c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x20fd5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x20fd60: 0x91850001  lbu         $a1, 0x1($t4)
    ctx->pc = 0x20fd60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x20fd64: 0x29a40005  slti        $a0, $t5, 0x5
    ctx->pc = 0x20fd64u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x20fd68: 0xa1650001  sb          $a1, 0x1($t3)
    ctx->pc = 0x20fd68u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x20fd6c: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x20fd6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x20fd70: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x20FD70u;
    {
        const bool branch_taken_0x20fd70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD70u;
        // 0x20fd74: 0x256b0002  addiu       $t3, $t3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd70) {
            ctx->pc = 0x20FD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fd48;
        }
    }
    ctx->pc = 0x20FD78u;
    // 0x20fd78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20fd78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20fd7c: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x20fd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x20fd80: 0x29040082  slti        $a0, $t0, 0x82
    ctx->pc = 0x20fd80u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)130) ? 1 : 0);
    // 0x20fd84: 0x1480ffb4  bnez        $a0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x20FD84u;
    {
        const bool branch_taken_0x20fd84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD84u;
        // 0x20fd88: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd84) {
            ctx->pc = 0x20FC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fc58;
        }
    }
    ctx->pc = 0x20FD8Cu;
    // 0x20fd8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20fd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd90: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x20fd94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fd98: 0x34454ef8  ori         $a1, $v0, 0x4EF8
    ctx->pc = 0x20fd98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20216);
    // 0x20fd9c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20fda0: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x20fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x20fda4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20fda8:
    // 0x20fda8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x20fda8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20fdac: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x20fdacu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fdb0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x20fdb0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x20fdb4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20fdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20fdb8: 0xa34014  dsllv       $t0, $v1, $a1
    ctx->pc = 0x20fdb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x20fdbc: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x20fdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20fdc0: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x20fdc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x20fdc4: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x20fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x20fdc8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x20fdc8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x20fdcc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x20fdccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x20fdd0: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x20fdd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x20fdd4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x20fdd4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x20fdd8: 0xfc470000  sd          $a3, 0x0($v0)
    ctx->pc = 0x20fdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
    // 0x20fddc: 0xa35814  dsllv       $t3, $v1, $a1
    ctx->pc = 0x20fddcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x20fde0: 0xdc2c1888  ld          $t4, 0x1888($at)
    ctx->pc = 0x20fde0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 1), 6280)));
    // 0x20fde4: 0xc36814  dsllv       $t5, $v1, $a2
    ctx->pc = 0x20fde4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x20fde8: 0x24850003  addiu       $a1, $a0, 0x3
    ctx->pc = 0x20fde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x20fdec: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x20fdecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x20fdf0: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x20fdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x20fdf4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x20fdf4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x20fdf8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x20fdf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x20fdfc: 0xc35014  dsllv       $t2, $v1, $a2
    ctx->pc = 0x20fdfcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x20fe00: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x20fe00u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x20fe04: 0x24860005  addiu       $a2, $a0, 0x5
    ctx->pc = 0x20fe04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x20fe08: 0xa34814  dsllv       $t1, $v1, $a1
    ctx->pc = 0x20fe08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x20fe0c: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x20fe0cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x20fe10: 0x24850006  addiu       $a1, $a0, 0x6
    ctx->pc = 0x20fe10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x20fe14: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x20fe14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20fe18: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x20fe18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x20fe1c: 0x18b5825  or          $t3, $t4, $t3
    ctx->pc = 0x20fe1cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x20fe20: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x20fe20u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x20fe24: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x20fe24u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x20fe28: 0xa33814  dsllv       $a3, $v1, $a1
    ctx->pc = 0x20fe28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x20fe2c: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x20fe2cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x20fe30: 0x24850007  addiu       $a1, $a0, 0x7
    ctx->pc = 0x20fe30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x20fe34: 0xc34014  dsllv       $t0, $v1, $a2
    ctx->pc = 0x20fe34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x20fe38: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x20fe38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x20fe3c: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x20fe3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x20fe40: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x20fe40u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x20fe44: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x20fe44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x20fe48: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x20fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x20fe4c: 0xa33014  dsllv       $a2, $v1, $a1
    ctx->pc = 0x20fe4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x20fe50: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x20fe50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x20fe54: 0x2885001d  slti        $a1, $a0, 0x1D
    ctx->pc = 0x20fe54u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x20fe58: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x20fe58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x20fe5c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20fe5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20fe60: 0x14a0ffd1  bnez        $a1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x20FE60u;
    {
        const bool branch_taken_0x20fe60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE60u;
        // 0x20fe64: 0xfc261888  sd          $a2, 0x1888($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 6280), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe60) {
            ctx->pc = 0x20FDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fda8;
        }
    }
    ctx->pc = 0x20FE68u;
    // 0x20fe68: 0x28810025  slti        $at, $a0, 0x25
    ctx->pc = 0x20fe68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x20fe6c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x20FE6Cu;
    {
        const bool branch_taken_0x20fe6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE6Cu;
        // 0x20fe70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe6c) {
            ctx->pc = 0x20FEA0u;
            goto label_20fea0;
        }
    }
    ctx->pc = 0x20FE74u;
label_20fe74:
    // 0x20fe74: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20fe74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20fe78: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x20fe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20fe7c: 0xdc231888  ld          $v1, 0x1888($at)
    ctx->pc = 0x20fe7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 6280)));
    // 0x20fe80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20fe80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20fe84: 0x462814  dsllv       $a1, $a2, $v0
    ctx->pc = 0x20fe84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x20fe88: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20fe88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20fe8c: 0x28820025  slti        $v0, $a0, 0x25
    ctx->pc = 0x20fe8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x20fe90: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x20fe90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x20fe94: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20fe94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20fe98: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x20FE98u;
    {
        const bool branch_taken_0x20fe98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE98u;
        // 0x20fe9c: 0xfc231888  sd          $v1, 0x1888($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 6280), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe98) {
            ctx->pc = 0x20FE74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fe74;
        }
    }
    ctx->pc = 0x20FEA0u;
label_20fea0:
    // 0x20fea0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20fea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fea4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x20fea8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x20fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x20feac: 0x34454ef0  ori         $a1, $v0, 0x4EF0
    ctx->pc = 0x20feacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20208);
    // 0x20feb0: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x20feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
    // 0x20feb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20feb8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20febc:
    // 0x20febc: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x20febcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20fec0: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x20fec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20fec4: 0xc26804  sllv        $t5, $v0, $a2
    ctx->pc = 0x20fec4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x20fec8: 0x824004  sllv        $t0, $v0, $a0
    ctx->pc = 0x20fec8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x20fecc: 0x24860003  addiu       $a2, $a0, 0x3
    ctx->pc = 0x20feccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x20fed0: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x20fed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x20fed4: 0xc25804  sllv        $t3, $v0, $a2
    ctx->pc = 0x20fed4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x20fed8: 0xa26004  sllv        $t4, $v0, $a1
    ctx->pc = 0x20fed8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x20fedc: 0x24860005  addiu       $a2, $a0, 0x5
    ctx->pc = 0x20fedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x20fee0: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x20fee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x20fee4: 0xa25004  sllv        $t2, $v0, $a1
    ctx->pc = 0x20fee4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x20fee8: 0xc24804  sllv        $t1, $v0, $a2
    ctx->pc = 0x20fee8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x20feec: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x20feecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x20fef0: 0x24850006  addiu       $a1, $a0, 0x6
    ctx->pc = 0x20fef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x20fef4: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x20fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x20fef8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20fef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20fefc: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20fefcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x2B1880u));
    // 0x20ff00: 0xa24004  sllv        $t0, $v0, $a1
    ctx->pc = 0x20ff00u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x20ff04: 0x24850007  addiu       $a1, $a0, 0x7
    ctx->pc = 0x20ff04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x20ff08: 0xa23804  sllv        $a3, $v0, $a1
    ctx->pc = 0x20ff08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x20ff0c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x20ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x20ff10: 0x2885000e  slti        $a1, $a0, 0xE
    ctx->pc = 0x20ff10u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x20ff14: 0xcd3025  or          $a2, $a2, $t5
    ctx->pc = 0x20ff14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x20ff18: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff1c: 0xac261880  sw          $a2, 0x1880($at)
    ctx->pc = 0x20ff1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x2B1880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1880u, _value); } while (0);
    // 0x20ff20: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff24: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20ff24u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x2B1880u));
    // 0x20ff28: 0xcc3025  or          $a2, $a2, $t4
    ctx->pc = 0x20ff28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
    // 0x20ff2c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff30: 0xac261880  sw          $a2, 0x1880($at)
    ctx->pc = 0x20ff30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x2B1880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1880u, _value); } while (0);
    // 0x20ff34: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff38: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20ff38u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x2B1880u));
    // 0x20ff3c: 0xcb3025  or          $a2, $a2, $t3
    ctx->pc = 0x20ff3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
    // 0x20ff40: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff44: 0xac261880  sw          $a2, 0x1880($at)
    ctx->pc = 0x20ff44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x2B1880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1880u, _value); } while (0);
    // 0x20ff48: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff4c: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20ff4cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x2B1880u));
    // 0x20ff50: 0xca3025  or          $a2, $a2, $t2
    ctx->pc = 0x20ff50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x20ff54: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff58: 0xac261880  sw          $a2, 0x1880($at)
    ctx->pc = 0x20ff58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x2B1880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1880u, _value); } while (0);
    // 0x20ff5c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff60: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20ff60u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x2B1880u));
    // 0x20ff64: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x20ff64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x20ff68: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff6c: 0xac261880  sw          $a2, 0x1880($at)
    ctx->pc = 0x20ff6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x2B1880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1880u, _value); } while (0);
    // 0x20ff70: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff74: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20ff74u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x2B1880u));
    // 0x20ff78: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x20ff78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x20ff7c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff80: 0xac261880  sw          $a2, 0x1880($at)
    ctx->pc = 0x20ff80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x2B1880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1880u, _value); } while (0);
    // 0x20ff84: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff88: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20ff88u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x2B1880u));
    // 0x20ff8c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x20ff8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x20ff90: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff94: 0x14a0ffc9  bnez        $a1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x20FF94u;
    {
        const bool branch_taken_0x20ff94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF94u;
        // 0x20ff98: 0xac261880  sw          $a2, 0x1880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff94) {
            ctx->pc = 0x20FEBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20febc;
        }
    }
    ctx->pc = 0x20FF9Cu;
    // 0x20ff9c: 0x28810016  slti        $at, $a0, 0x16
    ctx->pc = 0x20ff9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x20ffa0: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x20FFA0u;
    {
        const bool branch_taken_0x20ffa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFA0u;
        // 0x20ffa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffa0) {
            ctx->pc = 0x20FFCCu;
            goto label_20ffcc;
        }
    }
    ctx->pc = 0x20FFA8u;
label_20ffa8:
    // 0x20ffa8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ffa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ffac: 0x862804  sllv        $a1, $a2, $a0
    ctx->pc = 0x20ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x20ffb0: 0x8c231880  lw          $v1, 0x1880($at)
    ctx->pc = 0x20ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
    // 0x20ffb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20ffb8: 0x28820016  slti        $v0, $a0, 0x16
    ctx->pc = 0x20ffb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x20ffbc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x20ffbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x20ffc0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ffc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ffc4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20FFC4u;
    {
        const bool branch_taken_0x20ffc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFC4u;
        // 0x20ffc8: 0xac231880  sw          $v1, 0x1880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffc4) {
            ctx->pc = 0x20FFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ffa8;
        }
    }
    ctx->pc = 0x20FFCCu;
label_20ffcc:
    // 0x20ffcc: 0x0  nop
    ctx->pc = 0x20ffccu;
    // NOP
    // 0x20ffd0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x20ffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x20ffd4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x20ffd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x20ffd8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x20ffdc: 0x2484b310  addiu       $a0, $a0, -0x4CF0
    ctx->pc = 0x20ffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947600));
    // 0x20ffe0: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x20ffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
    // 0x20ffe4: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x20FFE4u;
    SET_GPR_U32(ctx, 31, 0x20FFECu);
    ctx->pc = 0x20FFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FFE4u;
    // 0x20ffe8: 0x34464f20  ori         $a2, $v0, 0x4F20 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x20FFE4u, 0x20FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FFECu;
}
