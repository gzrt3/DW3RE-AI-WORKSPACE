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

// Function: FUN_00110e80
// Address: 0x110e80 - 0x111250
void FUN_00110e80_0x110e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00110e80_0x110e80");
#endif

    switch (ctx->pc) {
        case 0x110eb0u: goto label_110eb0;
        case 0x110efcu: goto label_110efc;
        case 0x110fdcu: goto label_110fdc;
        case 0x111018u: goto label_111018;
        case 0x111134u: goto label_111134;
        default: break;
    }

    ctx->pc = 0x110e80u;

    // 0x110e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x110e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x110e84: 0x3c0d0030  lui         $t5, 0x30
    ctx->pc = 0x110e84u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)48 << 16));
    // 0x110e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x110e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x110e8c: 0x25adb4e0  addiu       $t5, $t5, -0x4B20
    ctx->pc = 0x110e8cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294948064));
    // 0x110e90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x110e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x110e94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110e94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e98: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x110e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x110e9c: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x110e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x110ea0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x110ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x110ea4: 0x24a52470  addiu       $a1, $a1, 0x2470
    ctx->pc = 0x110ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9328));
    // 0x110ea8: 0x24e7f9d0  addiu       $a3, $a3, -0x630
    ctx->pc = 0x110ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965712));
    // 0x110eac: 0x29010009  slti        $at, $t0, 0x9
    ctx->pc = 0x110eacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
label_110eb0:
    // 0x110eb0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x110EB0u;
    {
        const bool branch_taken_0x110eb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EB0u;
        // 0x110eb4: 0xe83021  addu        $a2, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110eb0) {
            ctx->pc = 0x110EC8u;
            goto label_110ec8;
        }
    }
    ctx->pc = 0x110EB8u;
    // 0x110eb8: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x110eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x110ebc: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x110ebcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x110ec0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x110EC0u;
    {
        const bool branch_taken_0x110ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EC0u;
        // 0x110ec4: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ec0) {
            ctx->pc = 0x110ED0u;
            goto label_110ed0;
        }
    }
    ctx->pc = 0x110EC8u;
label_110ec8:
    // 0x110ec8: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x110ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x110ecc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x110eccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_110ed0:
    // 0x110ed0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x110ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x110ed4: 0x29030015  slti        $v1, $t0, 0x15
    ctx->pc = 0x110ed4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x110ed8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x110ED8u;
    {
        const bool branch_taken_0x110ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110ED8u;
        // 0x110edc: 0x29010009  slti        $at, $t0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ed8) {
            ctx->pc = 0x110EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110eb0;
        }
    }
    ctx->pc = 0x110EE0u;
    // 0x110ee0: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x110ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x110ee4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110ee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ee8: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x110ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x110eec: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x110eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x110ef0: 0x24a52490  addiu       $a1, $a1, 0x2490
    ctx->pc = 0x110ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9360));
    // 0x110ef4: 0x278780c8  addiu       $a3, $gp, -0x7F38
    ctx->pc = 0x110ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934728));
    // 0x110ef8: 0x29010008  slti        $at, $t0, 0x8
    ctx->pc = 0x110ef8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
label_110efc:
    // 0x110efc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x110EFCu;
    {
        const bool branch_taken_0x110efc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EFCu;
        // 0x110f00: 0xe83021  addu        $a2, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110efc) {
            ctx->pc = 0x110F14u;
            goto label_110f14;
        }
    }
    ctx->pc = 0x110F04u;
    // 0x110f04: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x110f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x110f08: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x110f08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x110f0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x110F0Cu;
    {
        const bool branch_taken_0x110f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F0Cu;
        // 0x110f10: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f0c) {
            ctx->pc = 0x110F20u;
            goto label_110f20;
        }
    }
    ctx->pc = 0x110F14u;
label_110f14:
    // 0x110f14: 0x0  nop
    ctx->pc = 0x110f14u;
    // NOP
    // 0x110f18: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x110f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x110f1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x110f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_110f20:
    // 0x110f20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x110f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x110f24: 0x2903001b  slti        $v1, $t0, 0x1B
    ctx->pc = 0x110f24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x110f28: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x110F28u;
    {
        const bool branch_taken_0x110f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F28u;
        // 0x110f2c: 0x29010008  slti        $at, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f28) {
            ctx->pc = 0x110EFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110efc;
        }
    }
    ctx->pc = 0x110F30u;
    // 0x110f30: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x110f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x110f34: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x110f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x110f38: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x110f38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x110f3c: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x110F3Cu;
    {
        const bool branch_taken_0x110f3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F3Cu;
        // 0x110f40: 0x240a0008  addiu       $t2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f3c) {
            ctx->pc = 0x110F70u;
            goto label_110f70;
        }
    }
    ctx->pc = 0x110F44u;
    // 0x110f44: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x110f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x110f48: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x110f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x110f4c: 0xa0232498  sb          $v1, 0x2498($at)
    ctx->pc = 0x110f4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2F2498u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2F2498u, _value); } while (0);
    // 0x110f50: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x110f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x110f54: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x110f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x110f58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x110f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x110f5c: 0xa0242499  sb          $a0, 0x2499($at)
    ctx->pc = 0x110f5cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2F2499u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2F2499u, _value); } while (0);
    // 0x110f60: 0x254a0003  addiu       $t2, $t2, 0x3
    ctx->pc = 0x110f60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x110f64: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x110f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x110f68: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x110F68u;
    {
        const bool branch_taken_0x110f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F68u;
        // 0x110f6c: 0xa023249a  sb          $v1, 0x249A($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 9370), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f68) {
            ctx->pc = 0x110FB8u;
            goto label_110fb8;
        }
    }
    ctx->pc = 0x110F70u;
label_110f70:
    // 0x110f70: 0x2483fff8  addiu       $v1, $a0, -0x8
    ctx->pc = 0x110f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x110f74: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x110f74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x110f78: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x110F78u;
    {
        const bool branch_taken_0x110f78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x110F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F78u;
        // 0x110f7c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f78) {
            ctx->pc = 0x110F90u;
            goto label_110f90;
        }
    }
    ctx->pc = 0x110F80u;
    // 0x110f80: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x110f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x110f84: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110F84u;
    {
        const bool branch_taken_0x110f84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F84u;
        // 0x110f88: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f84) {
            ctx->pc = 0x110FA0u;
            goto label_110fa0;
        }
    }
    ctx->pc = 0x110F8Cu;
    // 0x110f8c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x110f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_110f90:
    // 0x110f90: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x110f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x110f94: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x110f94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x110f98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x110F98u;
    {
        const bool branch_taken_0x110f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F98u;
        // 0x110f9c: 0xa0232498  sb          $v1, 0x2498($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 9368), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f98) {
            ctx->pc = 0x110FB8u;
            goto label_110fb8;
        }
    }
    ctx->pc = 0x110FA0u;
label_110fa0:
    // 0x110fa0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110FA0u;
    {
        const bool branch_taken_0x110fa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FA0u;
        // 0x110fa4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fa0) {
            ctx->pc = 0x110FBCu;
            goto label_110fbc;
        }
    }
    ctx->pc = 0x110FA8u;
    // 0x110fa8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x110fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x110fac: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x110facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x110fb0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x110fb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x110fb4: 0xa0232498  sb          $v1, 0x2498($at)
    ctx->pc = 0x110fb4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2F2498u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2F2498u, _value); } while (0);
label_110fb8:
    // 0x110fb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x110fb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110fbc:
    // 0x110fbc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x110fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x110fc0: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x110fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x110fc4: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x110fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x110fc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x110fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110fcc: 0x24a53b80  addiu       $a1, $a1, 0x3B80
    ctx->pc = 0x110fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15232));
    // 0x110fd0: 0x24c62470  addiu       $a2, $a2, 0x2470
    ctx->pc = 0x110fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9328));
    // 0x110fd4: 0x24632490  addiu       $v1, $v1, 0x2490
    ctx->pc = 0x110fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9360));
    // 0x110fd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110fd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110fdc:
    // 0x110fdc: 0x0  nop
    ctx->pc = 0x110fdcu;
    // NOP
    // 0x110fe0: 0x0  nop
    ctx->pc = 0x110fe0u;
    // NOP
    // 0x110fe4: 0x91ae0010  lbu         $t6, 0x10($t5)
    ctx->pc = 0x110fe4u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x110fe8: 0x11c00091  beqz        $t6, . + 4 + (0x91 << 2)
    ctx->pc = 0x110FE8u;
    {
        const bool branch_taken_0x110fe8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FE8u;
        // 0x110fec: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fe8) {
            ctx->pc = 0x111230u;
            goto label_111230;
        }
    }
    ctx->pc = 0x110FF0u;
    // 0x110ff0: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x110ff0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x110ff4: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x110ff4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ff8: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x110FF8u;
    {
        const bool branch_taken_0x110ff8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FF8u;
        // 0x110ffc: 0x160602d  daddu       $t4, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ff8) {
            ctx->pc = 0x111070u;
            goto label_111070;
        }
    }
    ctx->pc = 0x111000u;
    // 0x111000: 0x95b8000a  lhu         $t8, 0xA($t5)
    ctx->pc = 0x111000u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x111004: 0x188100  sll         $s0, $t8, 4
    ctx->pc = 0x111004u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x111008: 0x2188023  subu        $s0, $s0, $t8
    ctx->pc = 0x111008u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 24)));
    // 0x11100c: 0xb08021  addu        $s0, $a1, $s0
    ctx->pc = 0x11100cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x111010: 0x92100004  lbu         $s0, 0x4($s0)
    ctx->pc = 0x111010u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x111014: 0x0  nop
    ctx->pc = 0x111014u;
    // NOP
label_111018:
    // 0x111018: 0xcfc021  addu        $t8, $a2, $t7
    ctx->pc = 0x111018u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
    // 0x11101c: 0x93110000  lbu         $s1, 0x0($t8)
    ctx->pc = 0x11101cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x111020: 0x16300002  bne         $s1, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x111020u;
    {
        const bool branch_taken_0x111020 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x111020) {
            ctx->pc = 0x11102Cu;
            goto label_11102c;
        }
    }
    ctx->pc = 0x111028u;
    // 0x111028: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x111028u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11102c:
    // 0x11102c: 0x0  nop
    ctx->pc = 0x11102cu;
    // NOP
    // 0x111030: 0x15c40003  bne         $t6, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111030u;
    {
        const bool branch_taken_0x111030 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 4));
        if (branch_taken_0x111030) {
            ctx->pc = 0x111040u;
            goto label_111040;
        }
    }
    ctx->pc = 0x111038u;
    // 0x111038: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x111038u;
    {
        const bool branch_taken_0x111038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111038u;
        // 0x11103c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111038) {
            ctx->pc = 0x111060u;
            goto label_111060;
        }
    }
    ctx->pc = 0x111040u;
label_111040:
    // 0x111040: 0x95b9000c  lhu         $t9, 0xC($t5)
    ctx->pc = 0x111040u;
    SET_GPR_ZE32(ctx, 25, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x111044: 0x19c100  sll         $t8, $t9, 4
    ctx->pc = 0x111044u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x111048: 0x319c023  subu        $t8, $t8, $t9
    ctx->pc = 0x111048u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x11104c: 0xb8c021  addu        $t8, $a1, $t8
    ctx->pc = 0x11104cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x111050: 0x93180004  lbu         $t8, 0x4($t8)
    ctx->pc = 0x111050u;
    SET_GPR_ZE32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x111054: 0x16380002  bne         $s1, $t8, . + 4 + (0x2 << 2)
    ctx->pc = 0x111054u;
    {
        const bool branch_taken_0x111054 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 24));
        if (branch_taken_0x111054) {
            ctx->pc = 0x111060u;
            goto label_111060;
        }
    }
    ctx->pc = 0x11105Cu;
    // 0x11105c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11105cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111060:
    // 0x111060: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x111060u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x111064: 0x1e9c02a  slt         $t8, $t7, $t1
    ctx->pc = 0x111064u;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x111068: 0x1700ffeb  bnez        $t8, . + 4 + (-0x15 << 2)
    ctx->pc = 0x111068u;
    {
        const bool branch_taken_0x111068 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        if (branch_taken_0x111068) {
            ctx->pc = 0x111018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111018;
        }
    }
    ctx->pc = 0x111070u;
label_111070:
    // 0x111070: 0x11800010  beqz        $t4, . + 4 + (0x10 << 2)
    ctx->pc = 0x111070u;
    {
        const bool branch_taken_0x111070 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x111070) {
            ctx->pc = 0x1110B4u;
            goto label_1110b4;
        }
    }
    ctx->pc = 0x111078u;
    // 0x111078: 0x1160000e  beqz        $t3, . + 4 + (0xE << 2)
    ctx->pc = 0x111078u;
    {
        const bool branch_taken_0x111078 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x111078) {
            ctx->pc = 0x1110B4u;
            goto label_1110b4;
        }
    }
    ctx->pc = 0x111080u;
    // 0x111080: 0x95b8000a  lhu         $t8, 0xA($t5)
    ctx->pc = 0x111080u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x111084: 0x95af000c  lhu         $t7, 0xC($t5)
    ctx->pc = 0x111084u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x111088: 0x187100  sll         $t6, $t8, 4
    ctx->pc = 0x111088u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x11108c: 0x1d8c023  subu        $t8, $t6, $t8
    ctx->pc = 0x11108cu;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
    // 0x111090: 0xf7100  sll         $t6, $t7, 4
    ctx->pc = 0x111090u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x111094: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x111094u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x111098: 0xb87821  addu        $t7, $a1, $t8
    ctx->pc = 0x111098u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x11109c: 0xae7021  addu        $t6, $a1, $t6
    ctx->pc = 0x11109cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x1110a0: 0x91ef0004  lbu         $t7, 0x4($t7)
    ctx->pc = 0x1110a0u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x1110a4: 0x91ce0004  lbu         $t6, 0x4($t6)
    ctx->pc = 0x1110a4u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x1110a8: 0x15ee0002  bne         $t7, $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x1110A8u;
    {
        const bool branch_taken_0x1110a8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        if (branch_taken_0x1110a8) {
            ctx->pc = 0x1110B4u;
            goto label_1110b4;
        }
    }
    ctx->pc = 0x1110B0u;
    // 0x1110b0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1110b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1110b4:
    // 0x1110b4: 0x0  nop
    ctx->pc = 0x1110b4u;
    // NOP
    // 0x1110b8: 0x11800009  beqz        $t4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1110B8u;
    {
        const bool branch_taken_0x1110b8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x1110b8) {
            ctx->pc = 0x1110E0u;
            goto label_1110e0;
        }
    }
    ctx->pc = 0x1110C0u;
    // 0x1110c0: 0x95af000a  lhu         $t7, 0xA($t5)
    ctx->pc = 0x1110c0u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x1110c4: 0xc96021  addu        $t4, $a2, $t1
    ctx->pc = 0x1110c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1110c8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1110c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1110cc: 0xf7100  sll         $t6, $t7, 4
    ctx->pc = 0x1110ccu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x1110d0: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x1110d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1110d4: 0xae7021  addu        $t6, $a1, $t6
    ctx->pc = 0x1110d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x1110d8: 0x91ce0004  lbu         $t6, 0x4($t6)
    ctx->pc = 0x1110d8u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x1110dc: 0xa18e0000  sb          $t6, 0x0($t4)
    ctx->pc = 0x1110dcu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 14));
label_1110e0:
    // 0x1110e0: 0x11600009  beqz        $t3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1110E0u;
    {
        const bool branch_taken_0x1110e0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1110e0) {
            ctx->pc = 0x111108u;
            goto label_111108;
        }
    }
    ctx->pc = 0x1110E8u;
    // 0x1110e8: 0x95ae000c  lhu         $t6, 0xC($t5)
    ctx->pc = 0x1110e8u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x1110ec: 0xc95821  addu        $t3, $a2, $t1
    ctx->pc = 0x1110ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1110f0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1110f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1110f4: 0xe6100  sll         $t4, $t6, 4
    ctx->pc = 0x1110f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x1110f8: 0x18e6023  subu        $t4, $t4, $t6
    ctx->pc = 0x1110f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1110fc: 0xac6021  addu        $t4, $a1, $t4
    ctx->pc = 0x1110fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x111100: 0x918c0004  lbu         $t4, 0x4($t4)
    ctx->pc = 0x111100u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x111104: 0xa16c0000  sb          $t4, 0x0($t3)
    ctx->pc = 0x111104u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 12));
label_111108:
    // 0x111108: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x111108u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11110c: 0xa082a  slt         $at, $zero, $t2
    ctx->pc = 0x11110cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x111110: 0x180702d  daddu       $t6, $t4, $zero
    ctx->pc = 0x111110u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111114: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x111114u;
    {
        const bool branch_taken_0x111114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x111118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111114u;
        // 0x111118: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111114) {
            ctx->pc = 0x111198u;
            goto label_111198;
        }
    }
    ctx->pc = 0x11111Cu;
    // 0x11111c: 0x95b8000a  lhu         $t8, 0xA($t5)
    ctx->pc = 0x11111cu;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x111120: 0x187900  sll         $t7, $t8, 4
    ctx->pc = 0x111120u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x111124: 0x1f87823  subu        $t7, $t7, $t8
    ctx->pc = 0x111124u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
    // 0x111128: 0xaf7821  addu        $t7, $a1, $t7
    ctx->pc = 0x111128u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x11112c: 0x91f90002  lbu         $t9, 0x2($t7)
    ctx->pc = 0x11112cu;
    SET_GPR_ZE32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x111130: 0x0  nop
    ctx->pc = 0x111130u;
    // NOP
label_111134:
    // 0x111134: 0x0  nop
    ctx->pc = 0x111134u;
    // NOP
    // 0x111138: 0x6b7821  addu        $t7, $v1, $t3
    ctx->pc = 0x111138u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x11113c: 0x91f00000  lbu         $s0, 0x0($t7)
    ctx->pc = 0x11113cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x111140: 0x16190002  bne         $s0, $t9, . + 4 + (0x2 << 2)
    ctx->pc = 0x111140u;
    {
        const bool branch_taken_0x111140 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 25));
        if (branch_taken_0x111140) {
            ctx->pc = 0x11114Cu;
            goto label_11114c;
        }
    }
    ctx->pc = 0x111148u;
    // 0x111148: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x111148u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11114c:
    // 0x11114c: 0x0  nop
    ctx->pc = 0x11114cu;
    // NOP
    // 0x111150: 0x91af0010  lbu         $t7, 0x10($t5)
    ctx->pc = 0x111150u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x111154: 0x15e40003  bne         $t7, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111154u;
    {
        const bool branch_taken_0x111154 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 4));
        if (branch_taken_0x111154) {
            ctx->pc = 0x111164u;
            goto label_111164;
        }
    }
    ctx->pc = 0x11115Cu;
    // 0x11115c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11115Cu;
    {
        const bool branch_taken_0x11115c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11115Cu;
        // 0x111160: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11115c) {
            ctx->pc = 0x111188u;
            goto label_111188;
        }
    }
    ctx->pc = 0x111164u;
label_111164:
    // 0x111164: 0x0  nop
    ctx->pc = 0x111164u;
    // NOP
    // 0x111168: 0x95b8000c  lhu         $t8, 0xC($t5)
    ctx->pc = 0x111168u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x11116c: 0x187900  sll         $t7, $t8, 4
    ctx->pc = 0x11116cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x111170: 0x1f87823  subu        $t7, $t7, $t8
    ctx->pc = 0x111170u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
    // 0x111174: 0xaf7821  addu        $t7, $a1, $t7
    ctx->pc = 0x111174u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x111178: 0x91ef0002  lbu         $t7, 0x2($t7)
    ctx->pc = 0x111178u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x11117c: 0x160f0002  bne         $s0, $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x11117Cu;
    {
        const bool branch_taken_0x11117c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        if (branch_taken_0x11117c) {
            ctx->pc = 0x111188u;
            goto label_111188;
        }
    }
    ctx->pc = 0x111184u;
    // 0x111184: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x111184u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111188:
    // 0x111188: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x111188u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x11118c: 0x16a782a  slt         $t7, $t3, $t2
    ctx->pc = 0x11118cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x111190: 0x15e0ffe8  bnez        $t7, . + 4 + (-0x18 << 2)
    ctx->pc = 0x111190u;
    {
        const bool branch_taken_0x111190 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x111190) {
            ctx->pc = 0x111134u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111134;
        }
    }
    ctx->pc = 0x111198u;
label_111198:
    // 0x111198: 0x11c00010  beqz        $t6, . + 4 + (0x10 << 2)
    ctx->pc = 0x111198u;
    {
        const bool branch_taken_0x111198 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x111198) {
            ctx->pc = 0x1111DCu;
            goto label_1111dc;
        }
    }
    ctx->pc = 0x1111A0u;
    // 0x1111a0: 0x1180000e  beqz        $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x1111A0u;
    {
        const bool branch_taken_0x1111a0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x1111a0) {
            ctx->pc = 0x1111DCu;
            goto label_1111dc;
        }
    }
    ctx->pc = 0x1111A8u;
    // 0x1111a8: 0x95b8000a  lhu         $t8, 0xA($t5)
    ctx->pc = 0x1111a8u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x1111ac: 0x95af000c  lhu         $t7, 0xC($t5)
    ctx->pc = 0x1111acu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x1111b0: 0x185900  sll         $t3, $t8, 4
    ctx->pc = 0x1111b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x1111b4: 0x178c023  subu        $t8, $t3, $t8
    ctx->pc = 0x1111b4u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
    // 0x1111b8: 0xf5900  sll         $t3, $t7, 4
    ctx->pc = 0x1111b8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x1111bc: 0x16f5823  subu        $t3, $t3, $t7
    ctx->pc = 0x1111bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x1111c0: 0xb87821  addu        $t7, $a1, $t8
    ctx->pc = 0x1111c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x1111c4: 0xab5821  addu        $t3, $a1, $t3
    ctx->pc = 0x1111c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1111c8: 0x91ef0002  lbu         $t7, 0x2($t7)
    ctx->pc = 0x1111c8u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x1111cc: 0x916b0002  lbu         $t3, 0x2($t3)
    ctx->pc = 0x1111ccu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1111d0: 0x15eb0002  bne         $t7, $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1111D0u;
    {
        const bool branch_taken_0x1111d0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 11));
        if (branch_taken_0x1111d0) {
            ctx->pc = 0x1111DCu;
            goto label_1111dc;
        }
    }
    ctx->pc = 0x1111D8u;
    // 0x1111d8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1111d8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1111dc:
    // 0x1111dc: 0x0  nop
    ctx->pc = 0x1111dcu;
    // NOP
    // 0x1111e0: 0x11c00009  beqz        $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x1111E0u;
    {
        const bool branch_taken_0x1111e0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1111e0) {
            ctx->pc = 0x111208u;
            goto label_111208;
        }
    }
    ctx->pc = 0x1111E8u;
    // 0x1111e8: 0x95af000a  lhu         $t7, 0xA($t5)
    ctx->pc = 0x1111e8u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x1111ec: 0x6a5821  addu        $t3, $v1, $t2
    ctx->pc = 0x1111ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1111f0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1111f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1111f4: 0xf7100  sll         $t6, $t7, 4
    ctx->pc = 0x1111f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x1111f8: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x1111f8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1111fc: 0xae7021  addu        $t6, $a1, $t6
    ctx->pc = 0x1111fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x111200: 0x91ce0002  lbu         $t6, 0x2($t6)
    ctx->pc = 0x111200u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x111204: 0xa16e0000  sb          $t6, 0x0($t3)
    ctx->pc = 0x111204u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 14));
label_111208:
    // 0x111208: 0x11800009  beqz        $t4, . + 4 + (0x9 << 2)
    ctx->pc = 0x111208u;
    {
        const bool branch_taken_0x111208 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x111208) {
            ctx->pc = 0x111230u;
            goto label_111230;
        }
    }
    ctx->pc = 0x111210u;
    // 0x111210: 0x95ae000c  lhu         $t6, 0xC($t5)
    ctx->pc = 0x111210u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x111214: 0x6a5821  addu        $t3, $v1, $t2
    ctx->pc = 0x111214u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x111218: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x111218u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x11121c: 0xe6100  sll         $t4, $t6, 4
    ctx->pc = 0x11121cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x111220: 0x18e6023  subu        $t4, $t4, $t6
    ctx->pc = 0x111220u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x111224: 0xac6021  addu        $t4, $a1, $t4
    ctx->pc = 0x111224u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x111228: 0x918c0002  lbu         $t4, 0x2($t4)
    ctx->pc = 0x111228u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x11122c: 0xa16c0000  sb          $t4, 0x0($t3)
    ctx->pc = 0x11122cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 12));
label_111230:
    // 0x111230: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x111230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x111234: 0x290b00ff  slti        $t3, $t0, 0xFF
    ctx->pc = 0x111234u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x111238: 0x1560ff68  bnez        $t3, . + 4 + (-0x98 << 2)
    ctx->pc = 0x111238u;
    {
        const bool branch_taken_0x111238 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x11123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111238u;
        // 0x11123c: 0x25ad0020  addiu       $t5, $t5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111238) {
            ctx->pc = 0x110FDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110fdc;
        }
    }
    ctx->pc = 0x111240u;
    // 0x111240: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x111240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x111244: 0x28e80002  slti        $t0, $a3, 0x2
    ctx->pc = 0x111244u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x111248: 0x1500ff64  bnez        $t0, . + 4 + (-0x9C << 2)
    ctx->pc = 0x111248u;
    {
        const bool branch_taken_0x111248 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x11124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111248u;
        // 0x11124c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111248) {
            ctx->pc = 0x110FDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110fdc;
        }
    }
    ctx->pc = 0x111250u;
}
