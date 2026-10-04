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

// Function: FUN_001b3ec0
// Address: 0x1b3ec0 - 0x1b4028
void FUN_001b3ec0_0x1b3ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b3ec0_0x1b3ec0");
#endif

    ctx->pc = 0x1b3ec0u;

    // 0x1b3ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3ec4: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b3ec4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1b3ec8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b3ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b3ecc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b3eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1b3ed0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1b3ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3ed4: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b3ed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b3ed8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1b3ed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1b3edc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b3edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b3ee0: 0x3c0231ff  lui         $v0, 0x31FF
    ctx->pc = 0x1b3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
    // 0x1b3ee4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1b3ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1b3ee8: 0x3c043e99  lui         $a0, 0x3E99
    ctx->pc = 0x1b3ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16025 << 16));
    // 0x1b3eec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b3ef0: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1b3ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
    // 0x1b3ef4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b3ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b3ef8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3EF8u;
    {
        const bool branch_taken_0x1b3ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3EF8u;
        // 0x1b3efc: 0x83202a  slt         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ef8) {
            ctx->pc = 0x1B3F10u;
            goto label_1b3f10;
        }
    }
    ctx->pc = 0x1B3F00u;
    // 0x1b3f00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3f04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3f08: 0x10a00047  beqz        $a1, . + 4 + (0x47 << 2)
    ctx->pc = 0x1B3F08u;
    {
        const bool branch_taken_0x1b3f08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f08) {
            ctx->pc = 0x1B4028u;
            return;
        }
    }
    ctx->pc = 0x1B3F10u;
label_1b3f10:
    // 0x1b3f10: 0x460c6102  mul.s       $f4, $f12, $f12
    ctx->pc = 0x1b3f10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1b3f14: 0x3c01ad47  lui         $at, 0xAD47
    ctx->pc = 0x1b3f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44359 << 16));
    // 0x1b3f18: 0x3421d74e  ori         $at, $at, 0xD74E
    ctx->pc = 0x1b3f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55118);
    // 0x1b3f1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3f20: 0x3c01310f  lui         $at, 0x310F
    ctx->pc = 0x1b3f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12559 << 16));
    // 0x1b3f24: 0x342174f6  ori         $at, $at, 0x74F6
    ctx->pc = 0x1b3f24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29942);
    // 0x1b3f28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3f2c: 0x0  nop
    ctx->pc = 0x1b3f2cu;
    // NOP
    // 0x1b3f30: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1b3f34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3f38: 0x3c01b493  lui         $at, 0xB493
    ctx->pc = 0x1b3f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46227 << 16));
    // 0x1b3f3c: 0x3421f27c  ori         $at, $at, 0xF27C
    ctx->pc = 0x1b3f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62076);
    // 0x1b3f40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3f44: 0x0  nop
    ctx->pc = 0x1b3f44u;
    // NOP
    // 0x1b3f48: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1b3f4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3f50: 0x3c0137d0  lui         $at, 0x37D0
    ctx->pc = 0x1b3f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14288 << 16));
    // 0x1b3f54: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x1b3f54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x1b3f58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3f5c: 0x0  nop
    ctx->pc = 0x1b3f5cu;
    // NOP
    // 0x1b3f60: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1b3f64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3f68: 0x3c01bab6  lui         $at, 0xBAB6
    ctx->pc = 0x1b3f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47798 << 16));
    // 0x1b3f6c: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x1b3f6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x1b3f70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3f74: 0x0  nop
    ctx->pc = 0x1b3f74u;
    // NOP
    // 0x1b3f78: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1b3f7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3f80: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x1b3f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x1b3f84: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b3f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1b3f88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3f8c: 0x0  nop
    ctx->pc = 0x1b3f8cu;
    // NOP
    // 0x1b3f90: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1b3f94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3f98: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B3F98u;
    {
        const bool branch_taken_0x1b3f98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3F98u;
        // 0x1b3f9c: 0x46002042  mul.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3f98) {
            ctx->pc = 0x1B3FD0u;
            goto label_1b3fd0;
        }
    }
    ctx->pc = 0x1B3FA0u;
    // 0x1b3fa0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1b3fa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1b3fa4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b3fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b3fa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3fac: 0x460d6082  mul.s       $f2, $f12, $f13
    ctx->pc = 0x1b3facu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x1b3fb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3fb4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b3fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b3fb8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1b3fbc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1b3fbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1b3fc0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b3fc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b3fc4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B3FC4u;
    {
        const bool branch_taken_0x1b3fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FC4u;
        // 0x1b3fc8: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3fc4) {
            ctx->pc = 0x1B4028u;
            return;
        }
    }
    ctx->pc = 0x1B3FCCu;
    // 0x1b3fcc: 0x0  nop
    ctx->pc = 0x1b3fccu;
    // NOP
label_1b3fd0:
    // 0x1b3fd0: 0x3c023f48  lui         $v0, 0x3F48
    ctx->pc = 0x1b3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16200 << 16));
    // 0x1b3fd4: 0x3c013e90  lui         $at, 0x3E90
    ctx->pc = 0x1b3fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16016 << 16));
    // 0x1b3fd8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b3fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b3fdc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b3fdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b3fe0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3FE0u;
    {
        const bool branch_taken_0x1b3fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FE0u;
        // 0x1b3fe4: 0x3c02ff00  lui         $v0, 0xFF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3fe0) {
            ctx->pc = 0x1B3FF0u;
            goto label_1b3ff0;
        }
    }
    ctx->pc = 0x1B3FE8u;
    // 0x1b3fe8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b3fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3fec: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x1b3fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1b3ff0:
    // 0x1b3ff0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b3ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b3ff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3ff8: 0x0  nop
    ctx->pc = 0x1b3ff8u;
    // NOP
    // 0x1b3ffc: 0x46012082  mul.s       $f2, $f4, $f1
    ctx->pc = 0x1b3ffcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1b4000: 0x460d60c2  mul.s       $f3, $f12, $f13
    ctx->pc = 0x1b4000u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x1b4004: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4008: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b400c: 0x0  nop
    ctx->pc = 0x1b400cu;
    // NOP
    // 0x1b4010: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b4010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1b4014: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1b4014u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x1b4018: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1b4018u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1b401c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x1b401cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x1b4020: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b4020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1b4024: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b4024u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1b4028u;
}
