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

// Function: entry_00157290
// Address: 0x157290 - 0x15732c
void entry_00157290_0x157290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157290_0x157290");
#endif

    ctx->pc = 0x157290u;

label_157290:
    // 0x157290: 0x10c7821  addu        $t7, $t0, $t4
    ctx->pc = 0x157290u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x157294: 0xcb7021  addu        $t6, $a2, $t3
    ctx->pc = 0x157294u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x157298: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x157298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x15729c: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x15729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1572a0: 0x12a202a  slt         $a0, $t1, $t2
    ctx->pc = 0x1572a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1572a4: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x1572a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1572a8: 0x256b0080  addiu       $t3, $t3, 0x80
    ctx->pc = 0x1572a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 128));
    // 0x1572ac: 0xc5e10004  lwc1        $f1, 0x4($t7)
    ctx->pc = 0x1572acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1572b0: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x1572b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x1572b4: 0xc5c00010  lwc1        $f0, 0x10($t6)
    ctx->pc = 0x1572b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1572b8: 0xc5eb0008  lwc1        $f11, 0x8($t7)
    ctx->pc = 0x1572b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1572bc: 0xc5ca0020  lwc1        $f10, 0x20($t6)
    ctx->pc = 0x1572bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1572c0: 0xc5e9000c  lwc1        $f9, 0xC($t7)
    ctx->pc = 0x1572c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1572c4: 0x46021b42  mul.s       $f13, $f3, $f2
    ctx->pc = 0x1572c4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1572c8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1572c8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1572cc: 0x460d7380  add.s       $f14, $f14, $f13
    ctx->pc = 0x1572ccu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[13]);
    // 0x1572d0: 0xc5c80030  lwc1        $f8, 0x30($t6)
    ctx->pc = 0x1572d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1572d4: 0x460a5a82  mul.s       $f10, $f11, $f10
    ctx->pc = 0x1572d4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x1572d8: 0x460c7380  add.s       $f14, $f14, $f12
    ctx->pc = 0x1572d8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[12]);
    // 0x1572dc: 0xc5e70010  lwc1        $f7, 0x10($t7)
    ctx->pc = 0x1572dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1572e0: 0xc5c60040  lwc1        $f6, 0x40($t6)
    ctx->pc = 0x1572e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1572e4: 0x46084a02  mul.s       $f8, $f9, $f8
    ctx->pc = 0x1572e4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x1572e8: 0x460a7380  add.s       $f14, $f14, $f10
    ctx->pc = 0x1572e8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[10]);
    // 0x1572ec: 0xc5e50014  lwc1        $f5, 0x14($t7)
    ctx->pc = 0x1572ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1572f0: 0xc5c40050  lwc1        $f4, 0x50($t6)
    ctx->pc = 0x1572f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1572f4: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x1572f4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x1572f8: 0x46087380  add.s       $f14, $f14, $f8
    ctx->pc = 0x1572f8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[8]);
    // 0x1572fc: 0xc5e30018  lwc1        $f3, 0x18($t7)
    ctx->pc = 0x1572fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x157300: 0xc5c20060  lwc1        $f2, 0x60($t6)
    ctx->pc = 0x157300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157304: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x157304u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x157308: 0x46067380  add.s       $f14, $f14, $f6
    ctx->pc = 0x157308u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[6]);
    // 0x15730c: 0xc5e1001c  lwc1        $f1, 0x1C($t7)
    ctx->pc = 0x15730cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157310: 0xc5c00070  lwc1        $f0, 0x70($t6)
    ctx->pc = 0x157310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157314: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x157314u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x157318: 0x46047380  add.s       $f14, $f14, $f4
    ctx->pc = 0x157318u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[4]);
    // 0x15731c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15731cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157320: 0x46027380  add.s       $f14, $f14, $f2
    ctx->pc = 0x157320u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[2]);
    // 0x157324: 0x1480ffda  bnez        $a0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x157324u;
    {
        const bool branch_taken_0x157324 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x157328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157324u;
        // 0x157328: 0x46007380  add.s       $f14, $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157324) {
            ctx->pc = 0x157290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157290;
        }
    }
    ctx->pc = 0x15732Cu;
}
