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

// Function: entry_0022abb0
// Address: 0x22abb0 - 0x22ad10
void entry_0022abb0_0x22abb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022abb0_0x22abb0");
#endif

    switch (ctx->pc) {
        case 0x22acdcu: goto label_22acdc;
        default: break;
    }

    ctx->pc = 0x22abb0u;

    // 0x22abb0: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x22abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x22abb4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x22abb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22abb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22abbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22abbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22abc0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22abc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22abc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22abc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22abc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22abcc: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x22abccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x22abd0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x22abd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x22abd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22abd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22abd8: 0x0  nop
    ctx->pc = 0x22abd8u;
    // NOP
    // 0x22abdc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x22abdcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x22abe0: 0x0  nop
    ctx->pc = 0x22abe0u;
    // NOP
    // 0x22abe4: 0x0  nop
    ctx->pc = 0x22abe4u;
    // NOP
    // 0x22abe8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x22abe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22abec: 0x0  nop
    ctx->pc = 0x22abecu;
    // NOP
    // 0x22abf0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22ABF0u;
    {
        const bool branch_taken_0x22abf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22abf0) {
            ctx->pc = 0x22ABFCu;
            goto label_22abfc;
        }
    }
    ctx->pc = 0x22ABF8u;
    // 0x22abf8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22abf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22abfc:
    // 0x22abfc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22ABFCu;
    {
        const bool branch_taken_0x22abfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ABFCu;
        // 0x22ac00: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22abfc) {
            ctx->pc = 0x22AC18u;
            goto label_22ac18;
        }
    }
    ctx->pc = 0x22AC04u;
    // 0x22ac04: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x22ac08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22ac08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22ac0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ac0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ac10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22AC10u;
    {
        const bool branch_taken_0x22ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC10u;
        // 0x22ac14: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac10) {
            ctx->pc = 0x22AC48u;
            goto label_22ac48;
        }
    }
    ctx->pc = 0x22AC18u;
label_22ac18:
    // 0x22ac18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22ac18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22ac1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ac1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ac20: 0x0  nop
    ctx->pc = 0x22ac20u;
    // NOP
    // 0x22ac24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22ac24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ac28: 0x0  nop
    ctx->pc = 0x22ac28u;
    // NOP
    // 0x22ac2c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22AC2Cu;
    {
        const bool branch_taken_0x22ac2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ac2c) {
            ctx->pc = 0x22AC48u;
            goto label_22ac48;
        }
    }
    ctx->pc = 0x22AC34u;
    // 0x22ac34: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x22ac38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22ac38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22ac3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ac3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ac40: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x22AC40u;
    {
        const bool branch_taken_0x22ac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC40u;
        // 0x22ac44: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac40) {
            ctx->pc = 0x22AC48u;
            goto label_22ac48;
        }
    }
    ctx->pc = 0x22AC48u;
label_22ac48:
    // 0x22ac48: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x22ac48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x22ac4c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x22ac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x22ac50: 0x92060004  lbu         $a2, 0x4($s0)
    ctx->pc = 0x22ac50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22ac54: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x22ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x22ac58: 0x34435556  ori         $v1, $v0, 0x5556
    ctx->pc = 0x22ac58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x22ac5c: 0x24843b8e  addiu       $a0, $a0, 0x3B8E
    ctx->pc = 0x22ac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15246));
    // 0x22ac60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22ac64: 0xa2260020  sb          $a2, 0x20($s1)
    ctx->pc = 0x22ac64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 6));
    // 0x22ac68: 0xa620002c  sh          $zero, 0x2C($s1)
    ctx->pc = 0x22ac68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x22ac6c: 0xa2200046  sb          $zero, 0x46($s1)
    ctx->pc = 0x22ac6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ac70: 0x9607000a  lhu         $a3, 0xA($s0)
    ctx->pc = 0x22ac70u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x22ac74: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x22ac74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x22ac78: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x22ac78u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x22ac7c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x22ac7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x22ac80: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x22ac80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22ac84: 0xa2240047  sb          $a0, 0x47($s1)
    ctx->pc = 0x22ac84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 71), (uint8_t)GPR_U32(ctx, 4));
    // 0x22ac88: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x22ac88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x22ac8c: 0xa224002a  sb          $a0, 0x2A($s1)
    ctx->pc = 0x22ac8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 4));
    // 0x22ac90: 0x86040008  lh          $a0, 0x8($s0)
    ctx->pc = 0x22ac90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22ac94: 0xa624002e  sh          $a0, 0x2E($s1)
    ctx->pc = 0x22ac94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 4));
    // 0x22ac98: 0x86070008  lh          $a3, 0x8($s0)
    ctx->pc = 0x22ac98u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22ac9c: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x22ac9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x22aca0: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x22aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x22aca4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x22aca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x22aca8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22aca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22acac: 0x0  nop
    ctx->pc = 0x22acacu;
    // NOP
    // 0x22acb0: 0x1810  mfhi        $v1
    ctx->pc = 0x22acb0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x22acb4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x22acb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x22acb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22acbc: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x22acbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22acc0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x22acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x22acc4: 0xa6230030  sh          $v1, 0x30($s1)
    ctx->pc = 0x22acc4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x22acc8: 0xa6230032  sh          $v1, 0x32($s1)
    ctx->pc = 0x22acc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x22accc: 0xa2220045  sb          $v0, 0x45($s1)
    ctx->pc = 0x22acccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 2));
    // 0x22acd0: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x22acd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x22acd4: 0xc0448dc  jal         func_112370
    ctx->pc = 0x22ACD4u;
    SET_GPR_U32(ctx, 31, 0x22ACDCu);
    ctx->pc = 0x22ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ACD4u;
    // 0x22acd8: 0x26250022  addiu       $a1, $s1, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112370u, 0x22ACD4u, 0x22ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACDCu;
label_22acdc:
    // 0x22acdc: 0xa2220037  sb          $v0, 0x37($s1)
    ctx->pc = 0x22acdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ace0: 0x9223002a  lbu         $v1, 0x2A($s1)
    ctx->pc = 0x22ace0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x22ace4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22ACE4u;
    {
        const bool branch_taken_0x22ace4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACE4u;
        // 0x22ace8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ace4) {
            ctx->pc = 0x22ACF4u;
            goto label_22acf4;
        }
    }
    ctx->pc = 0x22ACECu;
    // 0x22acec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22ACECu;
    {
        const bool branch_taken_0x22acec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACECu;
        // 0x22acf0: 0xa223003d  sb          $v1, 0x3D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 61), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22acec) {
            ctx->pc = 0x22ACF8u;
            goto label_22acf8;
        }
    }
    ctx->pc = 0x22ACF4u;
label_22acf4:
    // 0x22acf4: 0xa220003d  sb          $zero, 0x3D($s1)
    ctx->pc = 0x22acf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 61), (uint8_t)GPR_U32(ctx, 0));
label_22acf8:
    // 0x22acf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22acf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22acfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22acfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ad00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ad00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ad04: 0x3e00008  jr          $ra
    ctx->pc = 0x22AD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD04u;
        // 0x22ad08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AD0Cu;
    // 0x22ad0c: 0x0  nop
    ctx->pc = 0x22ad0cu;
    // NOP
    ctx->pc = 0x22ad10u;
}
