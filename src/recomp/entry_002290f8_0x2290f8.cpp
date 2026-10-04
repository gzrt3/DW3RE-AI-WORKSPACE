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

// Function: entry_002290f8
// Address: 0x2290f8 - 0x2291c8
void entry_002290f8_0x2290f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002290f8_0x2290f8");
#endif

    switch (ctx->pc) {
        case 0x229120u: goto label_229120;
        default: break;
    }

    ctx->pc = 0x2290f8u;

    // 0x2290f8: 0x0  nop
    ctx->pc = 0x2290f8u;
    // NOP
    // 0x2290fc: 0x85420012  lh          $v0, 0x12($t2)
    ctx->pc = 0x2290fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 18)));
    // 0x229100: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x229100u;
    {
        const bool branch_taken_0x229100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229100) {
            ctx->pc = 0x2291C8u;
            return;
        }
    }
    ctx->pc = 0x229108u;
    // 0x229108: 0x8d4b0030  lw          $t3, 0x30($t2)
    ctx->pc = 0x229108u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x22910c: 0x1160002e  beqz        $t3, . + 4 + (0x2E << 2)
    ctx->pc = 0x22910Cu;
    {
        const bool branch_taken_0x22910c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x229110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22910Cu;
        // 0x229110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22910c) {
            ctx->pc = 0x2291C8u;
            return;
        }
    }
    ctx->pc = 0x229114u;
    // 0x229114: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x229114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229118: 0xc5610150  lwc1        $f1, 0x150($t3)
    ctx->pc = 0x229118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22911c: 0x0  nop
    ctx->pc = 0x22911cu;
    // NOP
label_229120:
    // 0x229120: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x229120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x229124: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x229124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229128: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x229128u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22912c: 0x0  nop
    ctx->pc = 0x22912cu;
    // NOP
    // 0x229130: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x229130u;
    {
        const bool branch_taken_0x229130 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x229134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229130u;
        // 0x229134: 0x874021  addu        $t0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229130) {
            ctx->pc = 0x2291B4u;
            goto label_2291b4;
        }
    }
    ctx->pc = 0x229138u;
    // 0x229138: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x229138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22913c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22913cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229140: 0x0  nop
    ctx->pc = 0x229140u;
    // NOP
    // 0x229144: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x229144u;
    {
        const bool branch_taken_0x229144 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229144) {
            ctx->pc = 0x2291B4u;
            goto label_2291b4;
        }
    }
    ctx->pc = 0x22914Cu;
    // 0x22914c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229150: 0xc5620158  lwc1        $f2, 0x158($t3)
    ctx->pc = 0x229150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229154: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x229154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229158: 0x0  nop
    ctx->pc = 0x229158u;
    // NOP
    // 0x22915c: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x22915Cu;
    {
        const bool branch_taken_0x22915c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22915c) {
            ctx->pc = 0x2291B4u;
            goto label_2291b4;
        }
    }
    ctx->pc = 0x229164u;
    // 0x229164: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x229164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229168: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x229168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22916c: 0x0  nop
    ctx->pc = 0x22916cu;
    // NOP
    // 0x229170: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x229170u;
    {
        const bool branch_taken_0x229170 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x229174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229170u;
        // 0x229174: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229170) {
            ctx->pc = 0x2291B4u;
            goto label_2291b4;
        }
    }
    ctx->pc = 0x229178u;
    // 0x229178: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x229178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22917c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22917cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x229180: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x229180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229184: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x229184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229188: 0xc5600050  lwc1        $f0, 0x50($t3)
    ctx->pc = 0x229188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22918c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x22918cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x229190: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x229190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x229194: 0xe5600050  swc1        $f0, 0x50($t3)
    ctx->pc = 0x229194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 80), bits); }
    // 0x229198: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x229198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22919c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22919cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2291a0: 0xc5600058  lwc1        $f0, 0x58($t3)
    ctx->pc = 0x2291a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2291a4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2291a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2291a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2291a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2291ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2291ACu;
    {
        const bool branch_taken_0x2291ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2291B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291ACu;
        // 0x2291b0: 0xe5600058  swc1        $f0, 0x58($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291ac) {
            ctx->pc = 0x2291C8u;
            return;
        }
    }
    ctx->pc = 0x2291B4u;
label_2291b4:
    // 0x2291b4: 0x0  nop
    ctx->pc = 0x2291b4u;
    // NOP
    // 0x2291b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2291b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2291bc: 0x28c20006  slti        $v0, $a2, 0x6
    ctx->pc = 0x2291bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2291c0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2291C0u;
    {
        const bool branch_taken_0x2291c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2291C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291C0u;
        // 0x2291c4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291c0) {
            ctx->pc = 0x229120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229120;
        }
    }
    ctx->pc = 0x2291C8u;
}
