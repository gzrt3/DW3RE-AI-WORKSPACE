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

// Function: FUN_00164bb0
// Address: 0x164bb0 - 0x164c98
void FUN_00164bb0_0x164bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00164bb0_0x164bb0");
#endif

    switch (ctx->pc) {
        case 0x164bccu: goto label_164bcc;
        case 0x164c38u: goto label_164c38;
        default: break;
    }

    ctx->pc = 0x164bb0u;

    // 0x164bb0: 0x8f8a85d0  lw          $t2, -0x7A30($gp)
    ctx->pc = 0x164bb0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
    // 0x164bb4: 0x1140001b  beqz        $t2, . + 4 + (0x1B << 2)
    ctx->pc = 0x164BB4u;
    {
        const bool branch_taken_0x164bb4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x164BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BB4u;
        // 0x164bb8: 0x8f8984b0  lw          $t1, -0x7B50($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164bb4) {
            ctx->pc = 0x164C24u;
            goto label_164c24;
        }
    }
    ctx->pc = 0x164BBCu;
    // 0x164bbc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x164bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164bc0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x164bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x164bc4: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x164bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x164bc8: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x164bc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_164bcc:
    // 0x164bcc: 0x91430096  lbu         $v1, 0x96($t2)
    ctx->pc = 0x164bccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 150)));
    // 0x164bd0: 0x14680010  bne         $v1, $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x164BD0u;
    {
        const bool branch_taken_0x164bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x164bd0) {
            ctx->pc = 0x164C14u;
            goto label_164c14;
        }
    }
    ctx->pc = 0x164BD8u;
    // 0x164bd8: 0x91430094  lbu         $v1, 0x94($t2)
    ctx->pc = 0x164bd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 148)));
    // 0x164bdc: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x164BDCu;
    {
        const bool branch_taken_0x164bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164bdc) {
            ctx->pc = 0x164C14u;
            goto label_164c14;
        }
    }
    ctx->pc = 0x164BE4u;
    // 0x164be4: 0x91430097  lbu         $v1, 0x97($t2)
    ctx->pc = 0x164be4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 151)));
    // 0x164be8: 0x14670005  bne         $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x164BE8u;
    {
        const bool branch_taken_0x164be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x164be8) {
            ctx->pc = 0x164C00u;
            goto label_164c00;
        }
    }
    ctx->pc = 0x164BF0u;
    // 0x164bf0: 0x8d430090  lw          $v1, 0x90($t2)
    ctx->pc = 0x164bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 144)));
    // 0x164bf4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x164bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x164bf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x164BF8u;
    {
        const bool branch_taken_0x164bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BF8u;
        // 0x164bfc: 0xad430090  sw          $v1, 0x90($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164bf8) {
            ctx->pc = 0x164C14u;
            goto label_164c14;
        }
    }
    ctx->pc = 0x164C00u;
label_164c00:
    // 0x164c00: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x164C00u;
    {
        const bool branch_taken_0x164c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x164c00) {
            ctx->pc = 0x164C14u;
            goto label_164c14;
        }
    }
    ctx->pc = 0x164C08u;
    // 0x164c08: 0x8d430090  lw          $v1, 0x90($t2)
    ctx->pc = 0x164c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 144)));
    // 0x164c0c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x164c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x164c10: 0xad430090  sw          $v1, 0x90($t2)
    ctx->pc = 0x164c10u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 144), GPR_U32(ctx, 3));
label_164c14:
    // 0x164c14: 0x0  nop
    ctx->pc = 0x164c14u;
    // NOP
    // 0x164c18: 0x8d4a0084  lw          $t2, 0x84($t2)
    ctx->pc = 0x164c18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
    // 0x164c1c: 0x1540ffeb  bnez        $t2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x164C1Cu;
    {
        const bool branch_taken_0x164c1c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x164c1c) {
            ctx->pc = 0x164BCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164bcc;
        }
    }
    ctx->pc = 0x164C24u;
label_164c24:
    // 0x164c24: 0x0  nop
    ctx->pc = 0x164c24u;
    // NOP
    // 0x164c28: 0x1120001a  beqz        $t1, . + 4 + (0x1A << 2)
    ctx->pc = 0x164C28u;
    {
        const bool branch_taken_0x164c28 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C28u;
        // 0x164c2c: 0x308600ff  andi        $a2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c28) {
            ctx->pc = 0x164C94u;
            goto label_164c94;
        }
    }
    ctx->pc = 0x164C30u;
    // 0x164c30: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x164c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164c34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x164c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_164c38:
    // 0x164c38: 0x9123005d  lbu         $v1, 0x5D($t1)
    ctx->pc = 0x164c38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 93)));
    // 0x164c3c: 0x14660011  bne         $v1, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x164C3Cu;
    {
        const bool branch_taken_0x164c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x164c3c) {
            ctx->pc = 0x164C84u;
            goto label_164c84;
        }
    }
    ctx->pc = 0x164C44u;
    // 0x164c44: 0x9123005b  lbu         $v1, 0x5B($t1)
    ctx->pc = 0x164c44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 91)));
    // 0x164c48: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x164C48u;
    {
        const bool branch_taken_0x164c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164c48) {
            ctx->pc = 0x164C84u;
            goto label_164c84;
        }
    }
    ctx->pc = 0x164C50u;
    // 0x164c50: 0x9123005f  lbu         $v1, 0x5F($t1)
    ctx->pc = 0x164c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 95)));
    // 0x164c54: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x164C54u;
    {
        const bool branch_taken_0x164c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x164c54) {
            ctx->pc = 0x164C6Cu;
            goto label_164c6c;
        }
    }
    ctx->pc = 0x164C5Cu;
    // 0x164c5c: 0x95230056  lhu         $v1, 0x56($t1)
    ctx->pc = 0x164c5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 86)));
    // 0x164c60: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x164c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x164c64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x164C64u;
    {
        const bool branch_taken_0x164c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C64u;
        // 0x164c68: 0xa5230056  sh          $v1, 0x56($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 86), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c64) {
            ctx->pc = 0x164C84u;
            goto label_164c84;
        }
    }
    ctx->pc = 0x164C6Cu;
label_164c6c:
    // 0x164c6c: 0x0  nop
    ctx->pc = 0x164c6cu;
    // NOP
    // 0x164c70: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164C70u;
    {
        const bool branch_taken_0x164c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x164c70) {
            ctx->pc = 0x164C84u;
            goto label_164c84;
        }
    }
    ctx->pc = 0x164C78u;
    // 0x164c78: 0x95230056  lhu         $v1, 0x56($t1)
    ctx->pc = 0x164c78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 86)));
    // 0x164c7c: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x164c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x164c80: 0xa5230056  sh          $v1, 0x56($t1)
    ctx->pc = 0x164c80u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 86), (uint16_t)GPR_U32(ctx, 3));
label_164c84:
    // 0x164c84: 0x0  nop
    ctx->pc = 0x164c84u;
    // NOP
    // 0x164c88: 0x8d290044  lw          $t1, 0x44($t1)
    ctx->pc = 0x164c88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x164c8c: 0x1520ffea  bnez        $t1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x164C8Cu;
    {
        const bool branch_taken_0x164c8c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x164c8c) {
            ctx->pc = 0x164C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164c38;
        }
    }
    ctx->pc = 0x164C94u;
label_164c94:
    // 0x164c94: 0x0  nop
    ctx->pc = 0x164c94u;
    // NOP
    ctx->pc = 0x164c98u;
}
