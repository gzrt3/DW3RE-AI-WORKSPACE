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

// Function: entry_00153e0c
// Address: 0x153e0c - 0x1540b0
void entry_00153e0c_0x153e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153e0c_0x153e0c");
#endif

    switch (ctx->pc) {
        case 0x153e6cu: goto label_153e6c;
        case 0x153f88u: goto label_153f88;
        case 0x153f98u: goto label_153f98;
        case 0x153fa8u: goto label_153fa8;
        case 0x153fb8u: goto label_153fb8;
        default: break;
    }

    ctx->pc = 0x153e0cu;

    // 0x153e0c: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x153e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x153e10: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x153e10u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x153e14: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x153e14u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x153e18: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x153e18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x153e1c: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x153e1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153e20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153e24: 0x2810  mfhi        $a1
    ctx->pc = 0x153e24u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x153e28: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x153e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x153e2c: 0x55902  srl         $t3, $a1, 4
    ctx->pc = 0x153e2cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x153e30: 0xb2840  sll         $a1, $t3, 1
    ctx->pc = 0x153e30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x153e34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x153e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x153e38: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x153e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x153e3c: 0x304bffff  andi        $t3, $v0, 0xFFFF
    ctx->pc = 0x153e3cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x153e40: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x153e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x153e44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x153e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x153e48: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x153e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x153e4c: 0xffae0008  sd          $t6, 0x8($sp)
    ctx->pc = 0x153e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 14));
    // 0x153e50: 0xffad0010  sd          $t5, 0x10($sp)
    ctx->pc = 0x153e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 13));
    // 0x153e54: 0xffac0018  sd          $t4, 0x18($sp)
    ctx->pc = 0x153e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 12));
    // 0x153e58: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x153e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x153e5c: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x153e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x153e60: 0xdf858618  ld          $a1, -0x79E8($gp)
    ctx->pc = 0x153e60u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936088)));
    // 0x153e64: 0xc05ded8  jal         func_177B60
    ctx->pc = 0x153E64u;
    SET_GPR_U32(ctx, 31, 0x153E6Cu);
    ctx->pc = 0x153E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153E64u;
    // 0x153e68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x153E64u, 0x153E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153E6Cu;
label_153e6c:
    // 0x153e6c: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x153e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x153e70: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x153e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x153e74: 0xa2030070  sb          $v1, 0x70($s0)
    ctx->pc = 0x153e74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 3));
    // 0x153e78: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x153e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x153e7c: 0xa2030071  sb          $v1, 0x71($s0)
    ctx->pc = 0x153e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 3));
    // 0x153e80: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x153e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x153e84: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x153e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x153e88: 0xa2030072  sb          $v1, 0x72($s0)
    ctx->pc = 0x153e88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x153e8c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x153e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x153e90: 0xa2050073  sb          $a1, 0x73($s0)
    ctx->pc = 0x153e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 115), (uint8_t)GPR_U32(ctx, 5));
    // 0x153e94: 0xae040074  sw          $a0, 0x74($s0)
    ctx->pc = 0x153e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 4));
    // 0x153e98: 0x244259c0  addiu       $v0, $v0, 0x59C0
    ctx->pc = 0x153e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22976));
    // 0x153e9c: 0xa2030088  sb          $v1, 0x88($s0)
    ctx->pc = 0x153e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 3));
    // 0x153ea0: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x153ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x153ea4: 0xa2030089  sb          $v1, 0x89($s0)
    ctx->pc = 0x153ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 137), (uint8_t)GPR_U32(ctx, 3));
    // 0x153ea8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x153ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x153eac: 0xa203008a  sb          $v1, 0x8A($s0)
    ctx->pc = 0x153eacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 138), (uint8_t)GPR_U32(ctx, 3));
    // 0x153eb0: 0x244259c1  addiu       $v0, $v0, 0x59C1
    ctx->pc = 0x153eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22977));
    // 0x153eb4: 0xa205008b  sb          $a1, 0x8B($s0)
    ctx->pc = 0x153eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 139), (uint8_t)GPR_U32(ctx, 5));
    // 0x153eb8: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x153eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x153ebc: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x153ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
    // 0x153ec0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x153ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x153ec4: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x153ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x153ec8: 0x244259c2  addiu       $v0, $v0, 0x59C2
    ctx->pc = 0x153ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22978));
    // 0x153ecc: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x153eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x153ed0: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x153ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x153ed4: 0xa20300a0  sb          $v1, 0xA0($s0)
    ctx->pc = 0x153ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x153ed8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x153ed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x153edc: 0xa20300a1  sb          $v1, 0xA1($s0)
    ctx->pc = 0x153edcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 161), (uint8_t)GPR_U32(ctx, 3));
    // 0x153ee0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x153ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153ee4: 0xa20300a2  sb          $v1, 0xA2($s0)
    ctx->pc = 0x153ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 162), (uint8_t)GPR_U32(ctx, 3));
    // 0x153ee8: 0xa20500a3  sb          $a1, 0xA3($s0)
    ctx->pc = 0x153ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 163), (uint8_t)GPR_U32(ctx, 5));
    // 0x153eec: 0xae0400a4  sw          $a0, 0xA4($s0)
    ctx->pc = 0x153eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 4));
    // 0x153ef0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x153ef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x153ef4: 0xa20300b8  sb          $v1, 0xB8($s0)
    ctx->pc = 0x153ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 3));
    // 0x153ef8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x153ef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x153efc: 0xa20300b9  sb          $v1, 0xB9($s0)
    ctx->pc = 0x153efcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 185), (uint8_t)GPR_U32(ctx, 3));
    // 0x153f00: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x153f00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153f04: 0xa20300ba  sb          $v1, 0xBA($s0)
    ctx->pc = 0x153f04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 186), (uint8_t)GPR_U32(ctx, 3));
    // 0x153f08: 0xa20500bb  sb          $a1, 0xBB($s0)
    ctx->pc = 0x153f08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 187), (uint8_t)GPR_U32(ctx, 5));
    // 0x153f0c: 0xae0400bc  sw          $a0, 0xBC($s0)
    ctx->pc = 0x153f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 4));
    // 0x153f10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x153f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x153f14: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x153f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153f18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x153f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x153F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F1Cu;
        // 0x153f20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153F24u;
    // 0x153f24: 0x0  nop
    ctx->pc = 0x153f24u;
    // NOP
    // 0x153f28: 0x0  nop
    ctx->pc = 0x153f28u;
    // NOP
    // 0x153f2c: 0x0  nop
    ctx->pc = 0x153f2cu;
    // NOP
    // 0x153f30: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x153f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x153f34: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x153f34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x153f38: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x153f38u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x153f3c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x153f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x153f40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x153f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x153f44: 0x28a1000b  slti        $at, $a1, 0xB
    ctx->pc = 0x153f44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x153f48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x153f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x153f4c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x153f4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153f50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x153f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x153f54: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x153f54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153f5c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x153f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153f60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153f64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x153f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153f68: 0x1810  mfhi        $v1
    ctx->pc = 0x153f68u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x153f6c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x153f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153f70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153f74: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x153f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x153f78: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x153F78u;
    {
        const bool branch_taken_0x153f78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x153F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F78u;
        // 0x153f7c: 0x24510178  addiu       $s1, $v0, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f78) {
            ctx->pc = 0x153FA0u;
            goto label_153fa0;
        }
    }
    ctx->pc = 0x153F80u;
    // 0x153f80: 0xc070834  jal         func_1C20D0
    ctx->pc = 0x153F80u;
    SET_GPR_U32(ctx, 31, 0x153F88u);
    ctx->pc = 0x153F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153F80u;
    // 0x153f84: 0x24a40024  addiu       $a0, $a1, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D0u, 0x153F80u, 0x153F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153F88u;
label_153f88:
    // 0x153f88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x153f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153f90: 0xc05e158  jal         func_178560
    ctx->pc = 0x153F90u;
    SET_GPR_U32(ctx, 31, 0x153F98u);
    ctx->pc = 0x153F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153F90u;
    // 0x153f94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178560u, 0x153F90u, 0x153F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153F98u;
label_153f98:
    // 0x153f98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x153F98u;
    {
        const bool branch_taken_0x153f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F98u;
        // 0x153f9c: 0x11183c  dsll32      $v1, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f98) {
            ctx->pc = 0x153FBCu;
            goto label_153fbc;
        }
    }
    ctx->pc = 0x153FA0u;
label_153fa0:
    // 0x153fa0: 0xc070834  jal         func_1C20D0
    ctx->pc = 0x153FA0u;
    SET_GPR_U32(ctx, 31, 0x153FA8u);
    ctx->pc = 0x153FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153FA0u;
    // 0x153fa4: 0x24a40032  addiu       $a0, $a1, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D0u, 0x153FA0u, 0x153FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153FA8u;
label_153fa8:
    // 0x153fa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x153fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153fb0: 0xc05e158  jal         func_178560
    ctx->pc = 0x153FB0u;
    SET_GPR_U32(ctx, 31, 0x153FB8u);
    ctx->pc = 0x153FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153FB0u;
    // 0x153fb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178560u, 0x153FB0u, 0x153FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153FB8u;
label_153fb8:
    // 0x153fb8: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x153fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_153fbc:
    // 0x153fbc: 0x26220017  addiu       $v0, $s1, 0x17
    ctx->pc = 0x153fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 23));
    // 0x153fc0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x153fc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x153fc4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x153fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x153fc8: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x153fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x153fcc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x153fccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x153fd0: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x153fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x153fd4: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x153fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x153fd8: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x153fd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x153fdc: 0x240203fc  addiu       $v0, $zero, 0x3FC
    ctx->pc = 0x153fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
    // 0x153fe0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x153fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x153fe4: 0x3402e800  ori         $v0, $zero, 0xE800
    ctx->pc = 0x153fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59392);
    // 0x153fe8: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x153fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x153fec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x153fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x153ff0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x153ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x153ff4: 0x24460008  addiu       $a2, $v0, 0x8
    ctx->pc = 0x153ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x153ff8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x153ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x153ffc: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x153ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x154000: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x154000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x154004: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x154004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x154008: 0xa6060020  sh          $a2, 0x20($s0)
    ctx->pc = 0x154008u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 6));
    // 0x15400c: 0x24040e88  addiu       $a0, $zero, 0xE88
    ctx->pc = 0x15400cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3720));
    // 0x154010: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x154010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x154014: 0xa6040022  sh          $a0, 0x22($s0)
    ctx->pc = 0x154014u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 4));
    // 0x154018: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x154018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x15401c: 0xa6050038  sh          $a1, 0x38($s0)
    ctx->pc = 0x15401cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 5));
    // 0x154020: 0x24476c00  addiu       $a3, $v0, 0x6C00
    ctx->pc = 0x154020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x154024: 0xa604003a  sh          $a0, 0x3A($s0)
    ctx->pc = 0x154024u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 4));
    // 0x154028: 0x26820018  addiu       $v0, $s4, 0x18
    ctx->pc = 0x154028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x15402c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15402cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x154030: 0x24031008  addiu       $v1, $zero, 0x1008
    ctx->pc = 0x154030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4104));
    // 0x154034: 0xa6060050  sh          $a2, 0x50($s0)
    ctx->pc = 0x154034u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 6));
    // 0x154038: 0x24486c00  addiu       $t0, $v0, 0x6C00
    ctx->pc = 0x154038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x15403c: 0xa6030052  sh          $v1, 0x52($s0)
    ctx->pc = 0x15403cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x154040: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x154040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x154044: 0xa6050068  sh          $a1, 0x68($s0)
    ctx->pc = 0x154044u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 5));
    // 0x154048: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x154048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x15404c: 0xa603006a  sh          $v1, 0x6A($s0)
    ctx->pc = 0x15404cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 3));
    // 0x154050: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x154050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x154054: 0xa6070028  sh          $a3, 0x28($s0)
    ctx->pc = 0x154054u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 7));
    // 0x154058: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x154058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x15405c: 0xa604002a  sh          $a0, 0x2A($s0)
    ctx->pc = 0x15405cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x154060: 0x24457900  addiu       $a1, $v0, 0x7900
    ctx->pc = 0x154060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x154064: 0xae12002c  sw          $s2, 0x2C($s0)
    ctx->pc = 0x154064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
    // 0x154068: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x154068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x15406c: 0xa6080040  sh          $t0, 0x40($s0)
    ctx->pc = 0x15406cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 8));
    // 0x154070: 0xa6040042  sh          $a0, 0x42($s0)
    ctx->pc = 0x154070u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 4));
    // 0x154074: 0xae120044  sw          $s2, 0x44($s0)
    ctx->pc = 0x154074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
    // 0x154078: 0xa6070058  sh          $a3, 0x58($s0)
    ctx->pc = 0x154078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 7));
    // 0x15407c: 0xa605005a  sh          $a1, 0x5A($s0)
    ctx->pc = 0x15407cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 5));
    // 0x154080: 0xae12005c  sw          $s2, 0x5C($s0)
    ctx->pc = 0x154080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 18));
    // 0x154084: 0xa6080070  sh          $t0, 0x70($s0)
    ctx->pc = 0x154084u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 112), (uint16_t)GPR_U32(ctx, 8));
    // 0x154088: 0xa6050072  sh          $a1, 0x72($s0)
    ctx->pc = 0x154088u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 5));
    // 0x15408c: 0xae120074  sw          $s2, 0x74($s0)
    ctx->pc = 0x15408cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 18));
    // 0x154090: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x154090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x154094: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x154094u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154098: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x154098u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15409c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15409cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1540a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1540a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1540a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1540a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1540a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1540A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1540ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540A8u;
        // 0x1540ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1540A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1540B0u;
}
