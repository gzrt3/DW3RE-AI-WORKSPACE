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

// Function: FUN_001eec00
// Address: 0x1eec00 - 0x1eed30
void FUN_001eec00_0x1eec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eec00_0x1eec00");
#endif

    switch (ctx->pc) {
        case 0x1eec28u: goto label_1eec28;
        default: break;
    }

    ctx->pc = 0x1eec00u;

    // 0x1eec00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eec00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eec04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec08: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x1eec08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x1eec0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1eec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eec10: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x1eec10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eec14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1eec14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1eec18: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x1eec18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1eec1c: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x1eec1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1eec20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eec20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eec24: 0x24c62a00  addiu       $a2, $a2, 0x2A00
    ctx->pc = 0x1eec24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10752));
label_1eec28:
    // 0x1eec28: 0xc84821  addu        $t1, $a2, $t0
    ctx->pc = 0x1eec28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1eec2c: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x1eec2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1eec30: 0x1545000a  bne         $t2, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EEC30u;
    {
        const bool branch_taken_0x1eec30 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 5));
        if (branch_taken_0x1eec30) {
            ctx->pc = 0x1EEC5Cu;
            goto label_1eec5c;
        }
    }
    ctx->pc = 0x1EEC38u;
    // 0x1eec38: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eec38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1eec3c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1eec3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1eec40: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1eec40u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x1eec44: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eec44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1eec48: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1eec48u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1eec4c: 0x15400026  bnez        $t2, . + 4 + (0x26 << 2)
    ctx->pc = 0x1EEC4Cu;
    {
        const bool branch_taken_0x1eec4c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eec4c) {
            ctx->pc = 0x1EECE8u;
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EEC54u;
    // 0x1eec54: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1EEC54u;
    {
        const bool branch_taken_0x1eec54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC54u;
        // 0x1eec58: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec54) {
            ctx->pc = 0x1EECE8u;
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EEC5Cu;
label_1eec5c:
    // 0x1eec5c: 0x0  nop
    ctx->pc = 0x1eec5cu;
    // NOP
    // 0x1eec60: 0x1543000a  bne         $t2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EEC60u;
    {
        const bool branch_taken_0x1eec60 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eec60) {
            ctx->pc = 0x1EEC8Cu;
            goto label_1eec8c;
        }
    }
    ctx->pc = 0x1EEC68u;
    // 0x1eec68: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eec68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1eec6c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1eec6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1eec70: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1eec70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x1eec74: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eec74u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1eec78: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1eec78u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1eec7c: 0x1540001a  bnez        $t2, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EEC7Cu;
    {
        const bool branch_taken_0x1eec7c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eec7c) {
            ctx->pc = 0x1EECE8u;
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EEC84u;
    // 0x1eec84: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1EEC84u;
    {
        const bool branch_taken_0x1eec84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC84u;
        // 0x1eec88: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec84) {
            ctx->pc = 0x1EECE8u;
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EEC8Cu;
label_1eec8c:
    // 0x1eec8c: 0x0  nop
    ctx->pc = 0x1eec8cu;
    // NOP
    // 0x1eec90: 0x154d000a  bne         $t2, $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x1EEC90u;
    {
        const bool branch_taken_0x1eec90 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 13));
        if (branch_taken_0x1eec90) {
            ctx->pc = 0x1EECBCu;
            goto label_1eecbc;
        }
    }
    ctx->pc = 0x1EEC98u;
    // 0x1eec98: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eec98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1eec9c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1eec9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1eeca0: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1eeca0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x1eeca4: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eeca4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1eeca8: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1eeca8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1eecac: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x1EECACu;
    {
        const bool branch_taken_0x1eecac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eecac) {
            ctx->pc = 0x1EECE8u;
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EECB4u;
    // 0x1eecb4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EECB4u;
    {
        const bool branch_taken_0x1eecb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECB4u;
        // 0x1eecb8: 0xad2c0000  sw          $t4, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eecb4) {
            ctx->pc = 0x1EECE8u;
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EECBCu;
label_1eecbc:
    // 0x1eecbc: 0x0  nop
    ctx->pc = 0x1eecbcu;
    // NOP
    // 0x1eecc0: 0x154b0009  bne         $t2, $t3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EECC0u;
    {
        const bool branch_taken_0x1eecc0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 11));
        if (branch_taken_0x1eecc0) {
            ctx->pc = 0x1EECE8u;
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EECC8u;
    // 0x1eecc8: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eecc8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1eeccc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1eecccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1eecd0: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1eecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x1eecd4: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eecd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1eecd8: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1eecd8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1eecdc: 0x15400002  bnez        $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EECDCu;
    {
        const bool branch_taken_0x1eecdc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eecdc) {
            ctx->pc = 0x1EECE8u;
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EECE4u;
    // 0x1eece4: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x1eece4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
label_1eece8:
    // 0x1eece8: 0x8d2e0008  lw          $t6, 0x8($t1)
    ctx->pc = 0x1eece8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1eecec: 0x19c0000b  blez        $t6, . + 4 + (0xB << 2)
    ctx->pc = 0x1EECECu;
    {
        const bool branch_taken_0x1eecec = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x1EECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECECu;
        // 0x1eecf0: 0x252f0008  addiu       $t7, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eecec) {
            ctx->pc = 0x1EED1Cu;
            goto label_1eed1c;
        }
    }
    ctx->pc = 0x1EECF4u;
    // 0x1eecf4: 0x852a000c  lh          $t2, 0xC($t1)
    ctx->pc = 0x1eecf4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1eecf8: 0x11450008  beq         $t2, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EECF8u;
    {
        const bool branch_taken_0x1eecf8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 5));
        if (branch_taken_0x1eecf8) {
            ctx->pc = 0x1EED1Cu;
            goto label_1eed1c;
        }
    }
    ctx->pc = 0x1EED00u;
    // 0x1eed00: 0x8529000e  lh          $t1, 0xE($t1)
    ctx->pc = 0x1eed00u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 14)));
    // 0x1eed04: 0x11250005  beq         $t1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EED04u;
    {
        const bool branch_taken_0x1eed04 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        if (branch_taken_0x1eed04) {
            ctx->pc = 0x1EED1Cu;
            goto label_1eed1c;
        }
    }
    ctx->pc = 0x1EED0Cu;
    // 0x1eed0c: 0x25c9fff8  addiu       $t1, $t6, -0x8
    ctx->pc = 0x1eed0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967288));
    // 0x1eed10: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x1eed10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1eed14: 0x1480a  movz        $t1, $zero, $at
    ctx->pc = 0x1eed14u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x1eed18: 0xade90000  sw          $t1, 0x0($t7)
    ctx->pc = 0x1eed18u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 9));
label_1eed1c:
    // 0x1eed1c: 0x0  nop
    ctx->pc = 0x1eed1cu;
    // NOP
    // 0x1eed20: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1eed20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1eed24: 0x28e90006  slti        $t1, $a3, 0x6
    ctx->pc = 0x1eed24u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1eed28: 0x1520ffbf  bnez        $t1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1EED28u;
    {
        const bool branch_taken_0x1eed28 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED28u;
        // 0x1eed2c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed28) {
            ctx->pc = 0x1EEC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eec28;
        }
    }
    ctx->pc = 0x1EED30u;
}
