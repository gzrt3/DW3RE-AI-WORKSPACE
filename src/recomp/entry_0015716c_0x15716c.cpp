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

// Function: entry_0015716c
// Address: 0x15716c - 0x157264
void entry_0015716c_0x15716c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015716c_0x15716c");
#endif

    ctx->pc = 0x15716cu;

label_15716c:
    // 0x15716c: 0xe95821  addu        $t3, $a3, $t1
    ctx->pc = 0x15716cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x157170: 0xca6021  addu        $t4, $a2, $t2
    ctx->pc = 0x157170u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x157174: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x157174u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x157178: 0x1801821  addu        $v1, $t4, $zero
    ctx->pc = 0x157178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 0)));
    // 0x15717c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x15717cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157180: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x157180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x157184: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x157184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157188: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x157188u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x15718c: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x15718cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157190: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x157190u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x157194: 0x29030004  slti        $v1, $t0, 0x4
    ctx->pc = 0x157194u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x157198: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x157198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15719c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15719cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1571a0: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x1571a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x1571a4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1571a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1571a8: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x1571a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1571ac: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x1571acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1571b0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1571b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1571b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1571b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1571b8: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x1571b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x1571bc: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x1571bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1571c0: 0xc5810008  lwc1        $f1, 0x8($t4)
    ctx->pc = 0x1571c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1571c4: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x1571c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1571c8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1571c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1571cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1571ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1571d0: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x1571d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x1571d4: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x1571d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1571d8: 0xc581000c  lwc1        $f1, 0xC($t4)
    ctx->pc = 0x1571d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1571dc: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x1571dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1571e0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1571e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1571e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1571e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1571e8: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x1571e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x1571ec: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x1571ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1571f0: 0xc5810010  lwc1        $f1, 0x10($t4)
    ctx->pc = 0x1571f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1571f4: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x1571f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1571f8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1571f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1571fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1571fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157200: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x157200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x157204: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x157204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157208: 0xc5810014  lwc1        $f1, 0x14($t4)
    ctx->pc = 0x157208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15720c: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x15720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157210: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x157210u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x157214: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157218: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x157218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x15721c: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x15721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157220: 0xc5810018  lwc1        $f1, 0x18($t4)
    ctx->pc = 0x157220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157224: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x157224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157228: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x157228u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15722c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15722cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157230: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x157230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x157234: 0xc581001c  lwc1        $f1, 0x1C($t4)
    ctx->pc = 0x157234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157238: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x157238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15723c: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x15723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157240: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x157240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x157244: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157248: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x157248u;
    {
        const bool branch_taken_0x157248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157248u;
        // 0x15724c: 0xe5600000  swc1        $f0, 0x0($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157248) {
            ctx->pc = 0x15716Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15716c;
        }
    }
    ctx->pc = 0x157250u;
    // 0x157250: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157254: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x157254u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x157258: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x157258u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x15725c: 0x27a80000  addiu       $t0, $sp, 0x0
    ctx->pc = 0x15725cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x157260: 0x24e712c0  addiu       $a3, $a3, 0x12C0
    ctx->pc = 0x157260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4800));
    ctx->pc = 0x157264u;
}
