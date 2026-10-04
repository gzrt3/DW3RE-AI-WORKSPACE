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

// Function: FUN_00156f10
// Address: 0x156f10 - 0x157148
void FUN_00156f10_0x156f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00156f10_0x156f10");
#endif

    switch (ctx->pc) {
        case 0x156f1cu: goto label_156f1c;
        case 0x156f30u: goto label_156f30;
        case 0x156ff8u: goto label_156ff8;
        case 0x15701cu: goto label_15701c;
        case 0x157108u: goto label_157108;
        default: break;
    }

    ctx->pc = 0x156f10u;

    // 0x156f10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x156f10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f14: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x156f14u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f18: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x156f18u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156f1c:
    // 0x156f1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x156f1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x156f20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f24: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x156f24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f28: 0x8c3821  addu        $a3, $a0, $t4
    ctx->pc = 0x156f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x156f2c: 0x8d3021  addu        $a2, $a0, $t5
    ctx->pc = 0x156f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_156f30:
    // 0x156f30: 0xea7021  addu        $t6, $a3, $t2
    ctx->pc = 0x156f30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x156f34: 0x1c01821  addu        $v1, $t6, $zero
    ctx->pc = 0x156f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 0)));
    // 0x156f38: 0xcb7821  addu        $t7, $a2, $t3
    ctx->pc = 0x156f38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x156f3c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x156f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x156f40: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x156f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x156f44: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x156f44u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x156f48: 0x29230003  slti        $v1, $t1, 0x3
    ctx->pc = 0x156f48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x156f4c: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x156f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x156f50: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x156f50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x156f54: 0xadc0000c  sw          $zero, 0xC($t6)
    ctx->pc = 0x156f54u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 0));
    // 0x156f58: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x156f58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x156f5c: 0xadc00010  sw          $zero, 0x10($t6)
    ctx->pc = 0x156f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 0));
    // 0x156f60: 0xadc00014  sw          $zero, 0x14($t6)
    ctx->pc = 0x156f60u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 20), GPR_U32(ctx, 0));
    // 0x156f64: 0xadc00018  sw          $zero, 0x18($t6)
    ctx->pc = 0x156f64u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 24), GPR_U32(ctx, 0));
    // 0x156f68: 0xadc0001c  sw          $zero, 0x1C($t6)
    ctx->pc = 0x156f68u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 28), GPR_U32(ctx, 0));
    // 0x156f6c: 0xade000c0  sw          $zero, 0xC0($t7)
    ctx->pc = 0x156f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 192), GPR_U32(ctx, 0));
    // 0x156f70: 0xade000c4  sw          $zero, 0xC4($t7)
    ctx->pc = 0x156f70u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 196), GPR_U32(ctx, 0));
    // 0x156f74: 0xade000c8  sw          $zero, 0xC8($t7)
    ctx->pc = 0x156f74u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 200), GPR_U32(ctx, 0));
    // 0x156f78: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x156F78u;
    {
        const bool branch_taken_0x156f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F78u;
        // 0x156f7c: 0xade000cc  sw          $zero, 0xCC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f78) {
            ctx->pc = 0x156F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156f30;
        }
    }
    ctx->pc = 0x156F80u;
    // 0x156f80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x156f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x156f84: 0x258c0060  addiu       $t4, $t4, 0x60
    ctx->pc = 0x156f84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 96));
    // 0x156f88: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x156f88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x156f8c: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x156F8Cu;
    {
        const bool branch_taken_0x156f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F8Cu;
        // 0x156f90: 0x25ad0030  addiu       $t5, $t5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f8c) {
            ctx->pc = 0x156F1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156f1c;
        }
    }
    ctx->pc = 0x156F94u;
    // 0x156f94: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x156f94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x156f98: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x156f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x156f9c: 0x55880  sll         $t3, $a1, 2
    ctx->pc = 0x156f9cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156fa0: 0x24c63050  addiu       $a2, $a2, 0x3050
    ctx->pc = 0x156fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12368));
    // 0x156fa4: 0xcb3821  addu        $a3, $a2, $t3
    ctx->pc = 0x156fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x156fa8: 0xac800ea0  sw          $zero, 0xEA0($a0)
    ctx->pc = 0x156fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3744), GPR_U32(ctx, 0));
    // 0x156fac: 0x90ea0000  lbu         $t2, 0x0($a3)
    ctx->pc = 0x156facu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x156fb0: 0x24633051  addiu       $v1, $v1, 0x3051
    ctx->pc = 0x156fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12369));
    // 0x156fb4: 0x6b4821  addu        $t1, $v1, $t3
    ctx->pc = 0x156fb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x156fb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x156fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156fbc: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x156fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x156fc0: 0x24633052  addiu       $v1, $v1, 0x3052
    ctx->pc = 0x156fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12370));
    // 0x156fc4: 0x6b4021  addu        $t0, $v1, $t3
    ctx->pc = 0x156fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x156fc8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x156fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x156fcc: 0xa08a0ea4  sb          $t2, 0xEA4($a0)
    ctx->pc = 0x156fccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3748), (uint8_t)GPR_U32(ctx, 10));
    // 0x156fd0: 0x24633053  addiu       $v1, $v1, 0x3053
    ctx->pc = 0x156fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12371));
    // 0x156fd4: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x156fd4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156fd8: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x156fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x156fdc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x156fdcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156fe0: 0xa0890ea5  sb          $t1, 0xEA5($a0)
    ctx->pc = 0x156fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3749), (uint8_t)GPR_U32(ctx, 9));
    // 0x156fe4: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x156fe4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x156fe8: 0xa0880ea6  sb          $t0, 0xEA6($a0)
    ctx->pc = 0x156fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3750), (uint8_t)GPR_U32(ctx, 8));
    // 0x156fec: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x156fecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156ff0: 0xa0830ea7  sb          $v1, 0xEA7($a0)
    ctx->pc = 0x156ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3751), (uint8_t)GPR_U32(ctx, 3));
    // 0x156ff4: 0x519c0  sll         $v1, $a1, 7
    ctx->pc = 0x156ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
label_156ff8:
    // 0x156ff8: 0xdf8988c8  ld          $t1, -0x7738($gp)
    ctx->pc = 0x156ff8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 28), 4294936776)));
    // 0x156ffc: 0x864021  addu        $t0, $a0, $a2
    ctx->pc = 0x156ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x157000: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x157000u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157008: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x157008u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x15700c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x15700cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x157010: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x157010u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x157014: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x157014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x157018: 0xad090144  sw          $t1, 0x144($t0)
    ctx->pc = 0x157018u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 324), GPR_U32(ctx, 9));
label_15701c:
    // 0x15701c: 0x0  nop
    ctx->pc = 0x15701cu;
    // NOP
    // 0x157020: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x157020u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x157024: 0x1054821  addu        $t1, $t0, $a1
    ctx->pc = 0x157024u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x157028: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x157028u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x15702c: 0x294c001a  slti        $t4, $t2, 0x1A
    ctx->pc = 0x15702cu;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x157030: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x157030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x157034: 0xad2d0190  sw          $t5, 0x190($t1)
    ctx->pc = 0x157034u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 400), GPR_U32(ctx, 13));
    // 0x157038: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x157038u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x15703c: 0xad2d0194  sw          $t5, 0x194($t1)
    ctx->pc = 0x15703cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 404), GPR_U32(ctx, 13));
    // 0x157040: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x157040u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x157044: 0xad2d0198  sw          $t5, 0x198($t1)
    ctx->pc = 0x157044u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 408), GPR_U32(ctx, 13));
    // 0x157048: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x157048u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15704c: 0xad2d01c0  sw          $t5, 0x1C0($t1)
    ctx->pc = 0x15704cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 448), GPR_U32(ctx, 13));
    // 0x157050: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x157050u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x157054: 0xad2d01c4  sw          $t5, 0x1C4($t1)
    ctx->pc = 0x157054u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 452), GPR_U32(ctx, 13));
    // 0x157058: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x157058u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x15705c: 0xad2d01c8  sw          $t5, 0x1C8($t1)
    ctx->pc = 0x15705cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 456), GPR_U32(ctx, 13));
    // 0x157060: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x157060u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x157064: 0xad2d01f0  sw          $t5, 0x1F0($t1)
    ctx->pc = 0x157064u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 496), GPR_U32(ctx, 13));
    // 0x157068: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x157068u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x15706c: 0xad2d01f4  sw          $t5, 0x1F4($t1)
    ctx->pc = 0x15706cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 500), GPR_U32(ctx, 13));
    // 0x157070: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x157070u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x157074: 0xad2d01f8  sw          $t5, 0x1F8($t1)
    ctx->pc = 0x157074u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 504), GPR_U32(ctx, 13));
    // 0x157078: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x157078u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15707c: 0xad2d0220  sw          $t5, 0x220($t1)
    ctx->pc = 0x15707cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 544), GPR_U32(ctx, 13));
    // 0x157080: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x157080u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x157084: 0xad2d0224  sw          $t5, 0x224($t1)
    ctx->pc = 0x157084u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 548), GPR_U32(ctx, 13));
    // 0x157088: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x157088u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x15708c: 0xad2d0228  sw          $t5, 0x228($t1)
    ctx->pc = 0x15708cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 552), GPR_U32(ctx, 13));
    // 0x157090: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x157090u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x157094: 0xad2d0250  sw          $t5, 0x250($t1)
    ctx->pc = 0x157094u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 592), GPR_U32(ctx, 13));
    // 0x157098: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x157098u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x15709c: 0xad2d0254  sw          $t5, 0x254($t1)
    ctx->pc = 0x15709cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 596), GPR_U32(ctx, 13));
    // 0x1570a0: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x1570a0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1570a4: 0xad2d0258  sw          $t5, 0x258($t1)
    ctx->pc = 0x1570a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 600), GPR_U32(ctx, 13));
    // 0x1570a8: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x1570a8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1570ac: 0xad2d0280  sw          $t5, 0x280($t1)
    ctx->pc = 0x1570acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 640), GPR_U32(ctx, 13));
    // 0x1570b0: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x1570b0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1570b4: 0xad2d0284  sw          $t5, 0x284($t1)
    ctx->pc = 0x1570b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 644), GPR_U32(ctx, 13));
    // 0x1570b8: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x1570b8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1570bc: 0xad2d0288  sw          $t5, 0x288($t1)
    ctx->pc = 0x1570bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 648), GPR_U32(ctx, 13));
    // 0x1570c0: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x1570c0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1570c4: 0xad2d02b0  sw          $t5, 0x2B0($t1)
    ctx->pc = 0x1570c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 688), GPR_U32(ctx, 13));
    // 0x1570c8: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x1570c8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1570cc: 0xad2d02b4  sw          $t5, 0x2B4($t1)
    ctx->pc = 0x1570ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 692), GPR_U32(ctx, 13));
    // 0x1570d0: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x1570d0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1570d4: 0xad2d02b8  sw          $t5, 0x2B8($t1)
    ctx->pc = 0x1570d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 696), GPR_U32(ctx, 13));
    // 0x1570d8: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x1570d8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1570dc: 0xad2d02e0  sw          $t5, 0x2E0($t1)
    ctx->pc = 0x1570dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 736), GPR_U32(ctx, 13));
    // 0x1570e0: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x1570e0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1570e4: 0xad2d02e4  sw          $t5, 0x2E4($t1)
    ctx->pc = 0x1570e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 740), GPR_U32(ctx, 13));
    // 0x1570e8: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x1570e8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1570ec: 0x1580ffcb  bnez        $t4, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1570ECu;
    {
        const bool branch_taken_0x1570ec = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1570F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570ECu;
        // 0x1570f0: 0xad2d02e8  sw          $t5, 0x2E8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 744), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570ec) {
            ctx->pc = 0x15701Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15701c;
        }
    }
    ctx->pc = 0x1570F4u;
    // 0x1570f4: 0x29410022  slti        $at, $t2, 0x22
    ctx->pc = 0x1570f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x1570f8: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1570F8u;
    {
        const bool branch_taken_0x1570f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1570FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570F8u;
        // 0x1570fc: 0xa2840  sll         $a1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570f8) {
            ctx->pc = 0x157134u;
            goto label_157134;
        }
    }
    ctx->pc = 0x157100u;
    // 0x157100: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x157100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x157104: 0x56100  sll         $t4, $a1, 4
    ctx->pc = 0x157104u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_157108:
    // 0x157108: 0x90e90000  lbu         $t1, 0x0($a3)
    ctx->pc = 0x157108u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15710c: 0x10c6821  addu        $t5, $t0, $t4
    ctx->pc = 0x15710cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x157110: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x157110u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x157114: 0x29450022  slti        $a1, $t2, 0x22
    ctx->pc = 0x157114u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x157118: 0x258c0030  addiu       $t4, $t4, 0x30
    ctx->pc = 0x157118u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
    // 0x15711c: 0xada90190  sw          $t1, 0x190($t5)
    ctx->pc = 0x15711cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 400), GPR_U32(ctx, 9));
    // 0x157120: 0x90e90001  lbu         $t1, 0x1($a3)
    ctx->pc = 0x157120u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x157124: 0xada90194  sw          $t1, 0x194($t5)
    ctx->pc = 0x157124u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 404), GPR_U32(ctx, 9));
    // 0x157128: 0x90e90002  lbu         $t1, 0x2($a3)
    ctx->pc = 0x157128u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x15712c: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x15712Cu;
    {
        const bool branch_taken_0x15712c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x157130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15712Cu;
        // 0x157130: 0xada90198  sw          $t1, 0x198($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 408), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15712c) {
            ctx->pc = 0x157108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157108;
        }
    }
    ctx->pc = 0x157134u;
label_157134:
    // 0x157134: 0x0  nop
    ctx->pc = 0x157134u;
    // NOP
    // 0x157138: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x157138u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x15713c: 0x29650002  slti        $a1, $t3, 0x2
    ctx->pc = 0x15713cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x157140: 0x14a0ffad  bnez        $a1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x157140u;
    {
        const bool branch_taken_0x157140 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x157144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157140u;
        // 0x157144: 0x24c606c0  addiu       $a2, $a2, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157140) {
            ctx->pc = 0x156FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156ff8;
        }
    }
    ctx->pc = 0x157148u;
}
