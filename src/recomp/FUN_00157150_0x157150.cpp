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

// Function: FUN_00157150
// Address: 0x157150 - 0x157454
void FUN_00157150_0x157150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157150_0x157150");
#endif

    switch (ctx->pc) {
        case 0x15716cu: goto label_15716c;
        case 0x157264u: goto label_157264;
        case 0x157290u: goto label_157290;
        case 0x157348u: goto label_157348;
        case 0x1573b4u: goto label_1573b4;
        case 0x1573d0u: goto label_1573d0;
        default: break;
    }

    ctx->pc = 0x157150u;

    // 0x157150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x157154: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x157154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157158: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x157158u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15715c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x15715cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157160: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x157160u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x157164: 0x27a70000  addiu       $a3, $sp, 0x0
    ctx->pc = 0x157164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x157168: 0x24c61240  addiu       $a2, $a2, 0x1240
    ctx->pc = 0x157168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4672));
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
label_157264:
    // 0x157264: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x157264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x157268: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x157268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15726c: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x15726Cu;
    {
        const bool branch_taken_0x15726c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x157270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15726Cu;
        // 0x157270: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15726c) {
            ctx->pc = 0x157374u;
            goto label_157374;
        }
    }
    ctx->pc = 0x157274u;
    // 0x157274: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x157274u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x157278: 0x1420002c  bnez        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x157278u;
    {
        const bool branch_taken_0x157278 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157278u;
        // 0x15727c: 0x246afff8  addiu       $t2, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157278) {
            ctx->pc = 0x15732Cu;
            goto label_15732c;
        }
    }
    ctx->pc = 0x157280u;
    // 0x157280: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x157280u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157284: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x157284u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157288: 0xed2021  addu        $a0, $a3, $t5
    ctx->pc = 0x157288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x15728c: 0x24860000  addiu       $a2, $a0, 0x0
    ctx->pc = 0x15728cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
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
label_15732c:
    // 0x15732c: 0x0  nop
    ctx->pc = 0x15732cu;
    // NOP
    // 0x157330: 0x123082a  slt         $at, $t1, $v1
    ctx->pc = 0x157330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x157334: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x157334u;
    {
        const bool branch_taken_0x157334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x157338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157334u;
        // 0x157338: 0x95100  sll         $t2, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157334) {
            ctx->pc = 0x157374u;
            goto label_157374;
        }
    }
    ctx->pc = 0x15733Cu;
    // 0x15733c: 0x95880  sll         $t3, $t1, 2
    ctx->pc = 0x15733cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x157340: 0xed2021  addu        $a0, $a3, $t5
    ctx->pc = 0x157340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x157344: 0x24860000  addiu       $a2, $a0, 0x0
    ctx->pc = 0x157344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_157348:
    // 0x157348: 0x10b2021  addu        $a0, $t0, $t3
    ctx->pc = 0x157348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x15734c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x15734cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157350: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x157350u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x157354: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x157354u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x157358: 0xca2021  addu        $a0, $a2, $t2
    ctx->pc = 0x157358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x15735c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x15735cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157360: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x157360u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x157364: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x157364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157368: 0x123202a  slt         $a0, $t1, $v1
    ctx->pc = 0x157368u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15736c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x15736Cu;
    {
        const bool branch_taken_0x15736c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x157370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15736Cu;
        // 0x157370: 0x46007380  add.s       $f14, $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15736c) {
            ctx->pc = 0x157348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157348;
        }
    }
    ctx->pc = 0x157374u;
label_157374:
    // 0x157374: 0x0  nop
    ctx->pc = 0x157374u;
    // NOP
    // 0x157378: 0x10d3021  addu        $a2, $t0, $t5
    ctx->pc = 0x157378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x15737c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x15737cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157380: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x157380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x157384: 0x28640004  slti        $a0, $v1, 0x4
    ctx->pc = 0x157384u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x157388: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x157388u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x15738c: 0x460e0001  sub.s       $f0, $f0, $f14
    ctx->pc = 0x15738cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x157390: 0x1480ffb4  bnez        $a0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x157390u;
    {
        const bool branch_taken_0x157390 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x157394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157390u;
        // 0x157394: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157390) {
            ctx->pc = 0x157264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157264;
        }
    }
    ctx->pc = 0x157398u;
    // 0x157398: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x157398u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15739c: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x15739cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1573a0: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x1573a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1573a4: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1573a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1573a8: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1573a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1573ac: 0x24e712c0  addiu       $a3, $a3, 0x12C0
    ctx->pc = 0x1573acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4800));
    // 0x1573b0: 0x27a60000  addiu       $a2, $sp, 0x0
    ctx->pc = 0x1573b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_1573b4:
    // 0x1573b4: 0x258d0001  addiu       $t5, $t4, 0x1
    ctx->pc = 0x1573b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1573b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1573b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1573bc: 0x29a10004  slti        $at, $t5, 0x4
    ctx->pc = 0x1573bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1573c0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1573C0u;
    {
        const bool branch_taken_0x1573c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1573C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573C0u;
        // 0x1573c4: 0xd4880  sll         $t1, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573c0) {
            ctx->pc = 0x1573F8u;
            goto label_1573f8;
        }
    }
    ctx->pc = 0x1573C8u;
    // 0x1573c8: 0xea1821  addu        $v1, $a3, $t2
    ctx->pc = 0x1573c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1573cc: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x1573ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1573d0:
    // 0x1573d0: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x1573d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1573d4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1573d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1573d8: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1573d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1573dc: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x1573dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1573e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1573e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1573e4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1573e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1573e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1573e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1573ec: 0x29a30004  slti        $v1, $t5, 0x4
    ctx->pc = 0x1573ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1573f0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1573F0u;
    {
        const bool branch_taken_0x1573f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1573F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573F0u;
        // 0x1573f4: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573f0) {
            ctx->pc = 0x1573D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1573d0;
        }
    }
    ctx->pc = 0x1573F8u;
label_1573f8:
    // 0x1573f8: 0xcb1821  addu        $v1, $a2, $t3
    ctx->pc = 0x1573f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1573fc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1573fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157400: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x157400u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x157404: 0xea1821  addu        $v1, $a3, $t2
    ctx->pc = 0x157404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x157408: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x157408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x15740c: 0x254afff0  addiu       $t2, $t2, -0x10
    ctx->pc = 0x15740cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967280));
    // 0x157410: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x157410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x157414: 0x10b1821  addu        $v1, $t0, $t3
    ctx->pc = 0x157414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x157418: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x157418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15741c: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x15741cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x157420: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x157420u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x157424: 0x0  nop
    ctx->pc = 0x157424u;
    // NOP
    // 0x157428: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x157428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x15742c: 0x581ffe1  bgez        $t4, . + 4 + (-0x1F << 2)
    ctx->pc = 0x15742Cu;
    {
        const bool branch_taken_0x15742c = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x157430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15742Cu;
        // 0x157430: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15742c) {
            ctx->pc = 0x1573B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1573b4;
        }
    }
    ctx->pc = 0x157434u;
    // 0x157434: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x157434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157438: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x157438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x15743c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x15743cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157440: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x157440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x157444: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x157444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157448: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x157448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x15744c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x15744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157450: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x157450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->pc = 0x157454u;
}
