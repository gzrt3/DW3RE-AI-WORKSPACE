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

// Function: FUN_00164ab0
// Address: 0x164ab0 - 0x164ba0
void FUN_00164ab0_0x164ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00164ab0_0x164ab0");
#endif

    switch (ctx->pc) {
        case 0x164accu: goto label_164acc;
        case 0x164b40u: goto label_164b40;
        default: break;
    }

    ctx->pc = 0x164ab0u;

    // 0x164ab0: 0x8f8a85d0  lw          $t2, -0x7A30($gp)
    ctx->pc = 0x164ab0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
    // 0x164ab4: 0x1140001d  beqz        $t2, . + 4 + (0x1D << 2)
    ctx->pc = 0x164AB4u;
    {
        const bool branch_taken_0x164ab4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x164AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AB4u;
        // 0x164ab8: 0x8f8984b0  lw          $t1, -0x7B50($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ab4) {
            ctx->pc = 0x164B2Cu;
            goto label_164b2c;
        }
    }
    ctx->pc = 0x164ABCu;
    // 0x164abc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x164abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164ac0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x164ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x164ac4: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x164ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x164ac8: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x164ac8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_164acc:
    // 0x164acc: 0x91430096  lbu         $v1, 0x96($t2)
    ctx->pc = 0x164accu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 150)));
    // 0x164ad0: 0x14680013  bne         $v1, $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x164AD0u;
    {
        const bool branch_taken_0x164ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x164ad0) {
            ctx->pc = 0x164B20u;
            goto label_164b20;
        }
    }
    ctx->pc = 0x164AD8u;
    // 0x164ad8: 0x91430094  lbu         $v1, 0x94($t2)
    ctx->pc = 0x164ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 148)));
    // 0x164adc: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x164ADCu;
    {
        const bool branch_taken_0x164adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164adc) {
            ctx->pc = 0x164B20u;
            goto label_164b20;
        }
    }
    ctx->pc = 0x164AE4u;
    // 0x164ae4: 0x91430097  lbu         $v1, 0x97($t2)
    ctx->pc = 0x164ae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 151)));
    // 0x164ae8: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x164AE8u;
    {
        const bool branch_taken_0x164ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x164ae8) {
            ctx->pc = 0x164B04u;
            goto label_164b04;
        }
    }
    ctx->pc = 0x164AF0u;
    // 0x164af0: 0xa1460097  sb          $a2, 0x97($t2)
    ctx->pc = 0x164af0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 151), (uint8_t)GPR_U32(ctx, 6));
    // 0x164af4: 0x8d430090  lw          $v1, 0x90($t2)
    ctx->pc = 0x164af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 144)));
    // 0x164af8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x164af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x164afc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x164AFCu;
    {
        const bool branch_taken_0x164afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AFCu;
        // 0x164b00: 0xad430090  sw          $v1, 0x90($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164afc) {
            ctx->pc = 0x164B20u;
            goto label_164b20;
        }
    }
    ctx->pc = 0x164B04u;
label_164b04:
    // 0x164b04: 0x0  nop
    ctx->pc = 0x164b04u;
    // NOP
    // 0x164b08: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x164B08u;
    {
        const bool branch_taken_0x164b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x164b08) {
            ctx->pc = 0x164B20u;
            goto label_164b20;
        }
    }
    ctx->pc = 0x164B10u;
    // 0x164b10: 0xa1470097  sb          $a3, 0x97($t2)
    ctx->pc = 0x164b10u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 151), (uint8_t)GPR_U32(ctx, 7));
    // 0x164b14: 0x8d430090  lw          $v1, 0x90($t2)
    ctx->pc = 0x164b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 144)));
    // 0x164b18: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x164b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x164b1c: 0xad430090  sw          $v1, 0x90($t2)
    ctx->pc = 0x164b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 144), GPR_U32(ctx, 3));
label_164b20:
    // 0x164b20: 0x8d4a0084  lw          $t2, 0x84($t2)
    ctx->pc = 0x164b20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
    // 0x164b24: 0x1540ffe9  bnez        $t2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x164B24u;
    {
        const bool branch_taken_0x164b24 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x164b24) {
            ctx->pc = 0x164ACCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164acc;
        }
    }
    ctx->pc = 0x164B2Cu;
label_164b2c:
    // 0x164b2c: 0x0  nop
    ctx->pc = 0x164b2cu;
    // NOP
    // 0x164b30: 0x1120001a  beqz        $t1, . + 4 + (0x1A << 2)
    ctx->pc = 0x164B30u;
    {
        const bool branch_taken_0x164b30 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B30u;
        // 0x164b34: 0x308600ff  andi        $a2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b30) {
            ctx->pc = 0x164B9Cu;
            goto label_164b9c;
        }
    }
    ctx->pc = 0x164B38u;
    // 0x164b38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x164b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164b3c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x164b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_164b40:
    // 0x164b40: 0x9123005d  lbu         $v1, 0x5D($t1)
    ctx->pc = 0x164b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 93)));
    // 0x164b44: 0x14660012  bne         $v1, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x164B44u;
    {
        const bool branch_taken_0x164b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x164b44) {
            ctx->pc = 0x164B90u;
            goto label_164b90;
        }
    }
    ctx->pc = 0x164B4Cu;
    // 0x164b4c: 0x9123005b  lbu         $v1, 0x5B($t1)
    ctx->pc = 0x164b4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 91)));
    // 0x164b50: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x164B50u;
    {
        const bool branch_taken_0x164b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164b50) {
            ctx->pc = 0x164B90u;
            goto label_164b90;
        }
    }
    ctx->pc = 0x164B58u;
    // 0x164b58: 0x9123005f  lbu         $v1, 0x5F($t1)
    ctx->pc = 0x164b58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 95)));
    // 0x164b5c: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x164B5Cu;
    {
        const bool branch_taken_0x164b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x164b5c) {
            ctx->pc = 0x164B78u;
            goto label_164b78;
        }
    }
    ctx->pc = 0x164B64u;
    // 0x164b64: 0xa124005f  sb          $a0, 0x5F($t1)
    ctx->pc = 0x164b64u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 95), (uint8_t)GPR_U32(ctx, 4));
    // 0x164b68: 0x95230056  lhu         $v1, 0x56($t1)
    ctx->pc = 0x164b68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 86)));
    // 0x164b6c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x164b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x164b70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x164B70u;
    {
        const bool branch_taken_0x164b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B70u;
        // 0x164b74: 0xa5230056  sh          $v1, 0x56($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 86), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b70) {
            ctx->pc = 0x164B90u;
            goto label_164b90;
        }
    }
    ctx->pc = 0x164B78u;
label_164b78:
    // 0x164b78: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x164B78u;
    {
        const bool branch_taken_0x164b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x164b78) {
            ctx->pc = 0x164B90u;
            goto label_164b90;
        }
    }
    ctx->pc = 0x164B80u;
    // 0x164b80: 0xa125005f  sb          $a1, 0x5F($t1)
    ctx->pc = 0x164b80u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 95), (uint8_t)GPR_U32(ctx, 5));
    // 0x164b84: 0x95230056  lhu         $v1, 0x56($t1)
    ctx->pc = 0x164b84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 86)));
    // 0x164b88: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x164b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x164b8c: 0xa5230056  sh          $v1, 0x56($t1)
    ctx->pc = 0x164b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 86), (uint16_t)GPR_U32(ctx, 3));
label_164b90:
    // 0x164b90: 0x8d290044  lw          $t1, 0x44($t1)
    ctx->pc = 0x164b90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x164b94: 0x1520ffea  bnez        $t1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x164B94u;
    {
        const bool branch_taken_0x164b94 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x164b94) {
            ctx->pc = 0x164B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164b40;
        }
    }
    ctx->pc = 0x164B9Cu;
label_164b9c:
    // 0x164b9c: 0x0  nop
    ctx->pc = 0x164b9cu;
    // NOP
    ctx->pc = 0x164ba0u;
}
