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

// Function: FUN_00134e70
// Address: 0x134e70 - 0x134f44
void FUN_00134e70_0x134e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00134e70_0x134e70");
#endif

    switch (ctx->pc) {
        case 0x134eccu: goto label_134ecc;
        case 0x134f04u: goto label_134f04;
        default: break;
    }

    ctx->pc = 0x134e70u;

    // 0x134e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x134e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x134e74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x134e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x134e7c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134e80: 0xa023a02c  sb          $v1, -0x5FD4($at)
    ctx->pc = 0x134e80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A02Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A02Cu, _value); } while (0);
    // 0x134e84: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x134e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x134e88: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134e8c: 0xa023a02d  sb          $v1, -0x5FD3($at)
    ctx->pc = 0x134e8cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A02Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A02Du, _value); } while (0);
    // 0x134e90: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x134e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x134e94: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134e98: 0xa023a02e  sb          $v1, -0x5FD2($at)
    ctx->pc = 0x134e98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A02Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A02Eu, _value); } while (0);
    // 0x134e9c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x134e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x134ea0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134ea4: 0xa423a40c  sh          $v1, -0x5BF4($at)
    ctx->pc = 0x134ea4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A40Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x30A40Cu, _value); } while (0);
    // 0x134ea8: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134eac: 0xa423a40e  sh          $v1, -0x5BF2($at)
    ctx->pc = 0x134eacu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A40Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x30A40Eu, _value); } while (0);
    // 0x134eb0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134eb4: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x134eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x134eb8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x134eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x134ebc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x134EBCu;
    {
        const bool branch_taken_0x134ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x134EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EBCu;
        // 0x134ec0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ebc) {
            ctx->pc = 0x134EECu;
            goto label_134eec;
        }
    }
    ctx->pc = 0x134EC4u;
    // 0x134ec4: 0xc0590dc  jal         func_164370
    ctx->pc = 0x134EC4u;
    SET_GPR_U32(ctx, 31, 0x134ECCu);
    ctx->pc = 0x134EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134EC4u;
    // 0x134ec8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x134EC4u, 0x134ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134ECCu;
label_134ecc:
    // 0x134ecc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x134ECCu;
    {
        const bool branch_taken_0x134ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134ECCu;
        // 0x134ed0: 0x3c0442fe  lui         $a0, 0x42FE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17150 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ecc) {
            ctx->pc = 0x134EE8u;
            goto label_134ee8;
        }
    }
    ctx->pc = 0x134ED4u;
    // 0x134ed4: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x134ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x134ed8: 0xac440050  sw          $a0, 0x50($v0)
    ctx->pc = 0x134ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 4));
    // 0x134edc: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x134edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x134ee0: 0xa4400012  sh          $zero, 0x12($v0)
    ctx->pc = 0x134ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x134ee4: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x134ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_134ee8:
    // 0x134ee8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x134ee8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_134eec:
    // 0x134eec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x134eecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ef0: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x134ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
    // 0x134ef4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x134ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x134ef8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x134ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x134efc: 0x24e79f20  addiu       $a3, $a3, -0x60E0
    ctx->pc = 0x134efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942496));
    // 0x134f00: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x134f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_134f04:
    // 0x134f04: 0xea1821  addu        $v1, $a3, $t2
    ctx->pc = 0x134f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x134f08: 0x246800a4  addiu       $t0, $v1, 0xA4
    ctx->pc = 0x134f08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
    // 0x134f0c: 0x906300a5  lbu         $v1, 0xA5($v1)
    ctx->pc = 0x134f0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 165)));
    // 0x134f10: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x134F10u;
    {
        const bool branch_taken_0x134f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x134f10) {
            ctx->pc = 0x134F30u;
            goto label_134f30;
        }
    }
    ctx->pc = 0x134F18u;
    // 0x134f18: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x134f18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x134f1c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x134F1Cu;
    {
        const bool branch_taken_0x134f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x134f1c) {
            ctx->pc = 0x134F30u;
            goto label_134f30;
        }
    }
    ctx->pc = 0x134F24u;
    // 0x134f24: 0xa1000003  sb          $zero, 0x3($t0)
    ctx->pc = 0x134f24u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x134f28: 0xa5000006  sh          $zero, 0x6($t0)
    ctx->pc = 0x134f28u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x134f2c: 0xa5040008  sh          $a0, 0x8($t0)
    ctx->pc = 0x134f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 4));
label_134f30:
    // 0x134f30: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x134f30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x134f34: 0x29230008  slti        $v1, $t1, 0x8
    ctx->pc = 0x134f34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x134f38: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x134F38u;
    {
        const bool branch_taken_0x134f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F38u;
        // 0x134f3c: 0x254a000a  addiu       $t2, $t2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f38) {
            ctx->pc = 0x134F04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134f04;
        }
    }
    ctx->pc = 0x134F40u;
    // 0x134f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x134f44u;
}
