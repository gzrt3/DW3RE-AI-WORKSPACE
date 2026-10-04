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

// Function: FUN_00133c40
// Address: 0x133c40 - 0x133d78
void FUN_00133c40_0x133c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133c40_0x133c40");
#endif

    switch (ctx->pc) {
        case 0x133c6cu: goto label_133c6c;
        default: break;
    }

    ctx->pc = 0x133c40u;

    // 0x133c40: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x133c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x133c44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x133c44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133c48: 0x8c28a450  lw          $t0, -0x5BB0($at)
    ctx->pc = 0x133c48u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x30A450u));
    // 0x133c4c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x133c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x133c50: 0x8c2aa454  lw          $t2, -0x5BAC($at)
    ctx->pc = 0x133c50u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x30A454u));
    // 0x133c54: 0x8082a  slt         $at, $zero, $t0
    ctx->pc = 0x133c54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x133c58: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x133C58u;
    {
        const bool branch_taken_0x133c58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x133C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C58u;
        // 0x133c5c: 0x140382d  daddu       $a3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c58) {
            ctx->pc = 0x133D08u;
            goto label_133d08;
        }
    }
    ctx->pc = 0x133C60u;
    // 0x133c60: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x133c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133c64: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x133c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x133c68: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x133c68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_133c6c:
    // 0x133c6c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x133c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133c70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x133c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x133c74: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x133c74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133c78: 0x0  nop
    ctx->pc = 0x133c78u;
    // NOP
    // 0x133c7c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x133C7Cu;
    {
        const bool branch_taken_0x133c7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x133c7c) {
            ctx->pc = 0x133CF8u;
            goto label_133cf8;
        }
    }
    ctx->pc = 0x133C84u;
    // 0x133c84: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x133c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133c88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x133c88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x133c8c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x133c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133c90: 0x0  nop
    ctx->pc = 0x133c90u;
    // NOP
    // 0x133c94: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x133C94u;
    {
        const bool branch_taken_0x133c94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x133c94) {
            ctx->pc = 0x133CF8u;
            goto label_133cf8;
        }
    }
    ctx->pc = 0x133C9Cu;
    // 0x133c9c: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x133c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133ca0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x133ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133ca4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x133ca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x133ca8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x133ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x133cac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x133cacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133cb0: 0x0  nop
    ctx->pc = 0x133cb0u;
    // NOP
    // 0x133cb4: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x133CB4u;
    {
        const bool branch_taken_0x133cb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x133cb4) {
            ctx->pc = 0x133CF8u;
            goto label_133cf8;
        }
    }
    ctx->pc = 0x133CBCu;
    // 0x133cbc: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x133cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133cc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x133cc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x133cc4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x133cc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x133cc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x133cc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133ccc: 0x0  nop
    ctx->pc = 0x133cccu;
    // NOP
    // 0x133cd0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x133CD0u;
    {
        const bool branch_taken_0x133cd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x133cd0) {
            ctx->pc = 0x133CF8u;
            goto label_133cf8;
        }
    }
    ctx->pc = 0x133CD8u;
    // 0x133cd8: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x133cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133cdc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x133cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133ce0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x133ce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x133ce4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x133ce4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x133ce8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x133ce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133cec: 0x0  nop
    ctx->pc = 0x133cecu;
    // NOP
    // 0x133cf0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x133CF0u;
    {
        const bool branch_taken_0x133cf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x133cf0) {
            ctx->pc = 0x133D08u;
            goto label_133d08;
        }
    }
    ctx->pc = 0x133CF8u;
label_133cf8:
    // 0x133cf8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x133cf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x133cfc: 0x128182a  slt         $v1, $t1, $t0
    ctx->pc = 0x133cfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x133d00: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x133D00u;
    {
        const bool branch_taken_0x133d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x133D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D00u;
        // 0x133d04: 0x24e70024  addiu       $a3, $a3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133d00) {
            ctx->pc = 0x133C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133c6c;
        }
    }
    ctx->pc = 0x133D08u;
label_133d08:
    // 0x133d08: 0x128182a  slt         $v1, $t1, $t0
    ctx->pc = 0x133d08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x133d0c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x133D0Cu;
    {
        const bool branch_taken_0x133d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x133d0c) {
            ctx->pc = 0x133D18u;
            goto label_133d18;
        }
    }
    ctx->pc = 0x133D14u;
    // 0x133d14: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x133d14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_133d18:
    // 0x133d18: 0xc4e10014  lwc1        $f1, 0x14($a3)
    ctx->pc = 0x133d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133d1c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x133d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x133d20: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x133d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x133d24: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x133d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x133d28: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x133d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x133d2c: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x133d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x133d30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x133d30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x133d34: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x133d34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x133d38: 0xc4e10018  lwc1        $f1, 0x18($a3)
    ctx->pc = 0x133d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133d3c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x133d3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x133d40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x133d40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133d44: 0x0  nop
    ctx->pc = 0x133d44u;
    // NOP
    // 0x133d48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x133d48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x133d4c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x133d4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x133d50: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x133d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x133d54: 0xc4e1001c  lwc1        $f1, 0x1C($a3)
    ctx->pc = 0x133d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133d58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x133d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x133d5c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x133d5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x133d60: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x133d60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x133d64: 0xc4e10020  lwc1        $f1, 0x20($a3)
    ctx->pc = 0x133d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133d68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x133d68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x133d6c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x133d6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x133d70: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x133d70u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x133d74: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x133d74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    ctx->pc = 0x133d78u;
}
