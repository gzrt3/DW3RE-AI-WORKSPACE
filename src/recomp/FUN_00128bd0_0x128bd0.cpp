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

// Function: FUN_00128bd0
// Address: 0x128bd0 - 0x128d60
void FUN_00128bd0_0x128bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128bd0_0x128bd0");
#endif

    switch (ctx->pc) {
        case 0x128c00u: goto label_128c00;
        case 0x128c20u: goto label_128c20;
        case 0x128c30u: goto label_128c30;
        case 0x128c38u: goto label_128c38;
        case 0x128d1cu: goto label_128d1c;
        case 0x128d2cu: goto label_128d2c;
        case 0x128d34u: goto label_128d34;
        case 0x128d3cu: goto label_128d3c;
        case 0x128d4cu: goto label_128d4c;
        default: break;
    }

    ctx->pc = 0x128bd0u;

    // 0x128bd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x128bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x128bd4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x128bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x128bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128bdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x128bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128be0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x128be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x128be4: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x128be4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A3EAu));
    // 0x128be8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128BE8u;
    {
        const bool branch_taken_0x128be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x128BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BE8u;
        // 0x128bec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128be8) {
            ctx->pc = 0x128BF8u;
            goto label_128bf8;
        }
    }
    ctx->pc = 0x128BF0u;
    // 0x128bf0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x128BF0u;
    {
        const bool branch_taken_0x128bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x128bf0) {
            ctx->pc = 0x128C08u;
            goto label_128c08;
        }
    }
    ctx->pc = 0x128BF8u;
label_128bf8:
    // 0x128bf8: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x128BF8u;
    SET_GPR_U32(ctx, 31, 0x128C00u);
    ctx->pc = 0x128BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128BF8u;
    // 0x128bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x128BF8u, 0x128C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C00u;
label_128c00:
    // 0x128c00: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x128C00u;
    {
        const bool branch_taken_0x128c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C00u;
        // 0x128c04: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c00) {
            ctx->pc = 0x128D60u;
            return;
        }
    }
    ctx->pc = 0x128C08u;
label_128c08:
    // 0x128c08: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x128c08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x128c0c: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x128c0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x128c10: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x128C10u;
    {
        const bool branch_taken_0x128c10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c10) {
            ctx->pc = 0x128D44u;
            goto label_128d44;
        }
    }
    ctx->pc = 0x128C18u;
    // 0x128c18: 0xc066e44  jal         func_19B910
    ctx->pc = 0x128C18u;
    SET_GPR_U32(ctx, 31, 0x128C20u);
    ctx->pc = 0x128C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C18u;
    // 0x128c1c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x128C18u, 0x128C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C20u;
label_128c20:
    // 0x128c20: 0xc78c84f8  lwc1        $f12, -0x7B08($gp)
    ctx->pc = 0x128c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128c24: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x128c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x128c28: 0xc066ec0  jal         func_19BB00
    ctx->pc = 0x128C28u;
    SET_GPR_U32(ctx, 31, 0x128C30u);
    ctx->pc = 0x128C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C28u;
    // 0x128c2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x128C28u, 0x128C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C30u;
label_128c30:
    // 0x128c30: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x128C30u;
    SET_GPR_U32(ctx, 31, 0x128C38u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x128C30u, 0x128C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C38u;
label_128c38:
    // 0x128c38: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x128c38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x128c3c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x128C3Cu;
    {
        const bool branch_taken_0x128c3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x128C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C3Cu;
        // 0x128c40: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c3c) {
            ctx->pc = 0x128C50u;
            goto label_128c50;
        }
    }
    ctx->pc = 0x128C44u;
    // 0x128c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128c48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x128C48u;
    {
        const bool branch_taken_0x128c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C48u;
        // 0x128c4c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c48) {
            ctx->pc = 0x128C68u;
            goto label_128c68;
        }
    }
    ctx->pc = 0x128C50u;
label_128c50:
    // 0x128c50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x128c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x128c54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x128c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x128c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128c5c: 0x0  nop
    ctx->pc = 0x128c5cu;
    // NOP
    // 0x128c60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x128c60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x128c64: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x128c64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_128c68:
    // 0x128c68: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x128c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x128c6c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x128c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128c70: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x128c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x128c74: 0x0  nop
    ctx->pc = 0x128c74u;
    // NOP
    // 0x128c78: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x128c78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x128c7c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x128c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x128c80: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x128c80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x128c84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x128c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128c88: 0x0  nop
    ctx->pc = 0x128c88u;
    // NOP
    // 0x128c8c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x128c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x128c90: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x128c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x128c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128c98: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x128c98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x128c9c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x128c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128ca0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x128ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x128ca4: 0x0  nop
    ctx->pc = 0x128ca4u;
    // NOP
    // 0x128ca8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x128ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x128cac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x128cacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x128cb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x128cb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x128cb4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x128cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x128cb8: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x128cb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x128cbc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x128CBCu;
    {
        const bool branch_taken_0x128cbc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x128CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128CBCu;
        // 0x128cc0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128cbc) {
            ctx->pc = 0x128CD0u;
            goto label_128cd0;
        }
    }
    ctx->pc = 0x128CC4u;
    // 0x128cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128cc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x128CC8u;
    {
        const bool branch_taken_0x128cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128CC8u;
        // 0x128ccc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128cc8) {
            ctx->pc = 0x128CE8u;
            goto label_128ce8;
        }
    }
    ctx->pc = 0x128CD0u;
label_128cd0:
    // 0x128cd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x128cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x128cd4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x128cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x128cd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128cd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128cdc: 0x0  nop
    ctx->pc = 0x128cdcu;
    // NOP
    // 0x128ce0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x128ce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x128ce4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x128ce4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_128ce8:
    // 0x128ce8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x128ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x128cec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x128cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x128cf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x128cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128cf4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x128cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x128cf8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x128cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cfc: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x128cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x128d00: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x128d00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x128d04: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x128d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x128d08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128d0c: 0x0  nop
    ctx->pc = 0x128d0cu;
    // NOP
    // 0x128d10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x128d10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x128d14: 0xc066d7a  jal         func_19B5E8
    ctx->pc = 0x128D14u;
    SET_GPR_U32(ctx, 31, 0x128D1Cu);
    ctx->pc = 0x128D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D14u;
    // 0x128d18: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x128D14u, 0x128D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D1Cu;
label_128d1c:
    // 0x128d1c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x128d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x128d20: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x128d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x128d24: 0xc066e02  jal         func_19B808
    ctx->pc = 0x128D24u;
    SET_GPR_U32(ctx, 31, 0x128D2Cu);
    ctx->pc = 0x128D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D24u;
    // 0x128d28: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x128D24u, 0x128D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D2Cu;
label_128d2c:
    // 0x128d2c: 0xc0465c4  jal         func_119710
    ctx->pc = 0x128D2Cu;
    SET_GPR_U32(ctx, 31, 0x128D34u);
    ctx->pc = 0x128D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D2Cu;
    // 0x128d30: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119710u, 0x128D2Cu, 0x128D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D34u;
label_128d34:
    // 0x128d34: 0xc0465c4  jal         func_119710
    ctx->pc = 0x128D34u;
    SET_GPR_U32(ctx, 31, 0x128D3Cu);
    ctx->pc = 0x128D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D34u;
    // 0x128d38: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119710u, 0x128D34u, 0x128D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D3Cu;
label_128d3c:
    // 0x128d3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128D3Cu;
    {
        const bool branch_taken_0x128d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D3Cu;
        // 0x128d40: 0x96030012  lhu         $v1, 0x12($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d3c) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x128D44u;
label_128d44:
    // 0x128d44: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x128D44u;
    SET_GPR_U32(ctx, 31, 0x128D4Cu);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x128D44u, 0x128D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D4Cu;
label_128d4c:
    // 0x128d4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x128D4Cu;
    {
        const bool branch_taken_0x128d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128d4c) {
            ctx->pc = 0x128D5Cu;
            goto label_128d5c;
        }
    }
    ctx->pc = 0x128D54u;
label_128d54:
    // 0x128d54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x128d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x128d58: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x128d58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
label_128d5c:
    // 0x128d5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x128d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x128d60u;
}
