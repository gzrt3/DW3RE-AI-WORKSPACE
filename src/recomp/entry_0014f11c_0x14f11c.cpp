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

// Function: entry_0014f11c
// Address: 0x14f11c - 0x14f19c
void entry_0014f11c_0x14f11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f11c_0x14f11c");
#endif

    ctx->pc = 0x14f11cu;

    // 0x14f11c: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x14f11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f120: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x14f120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x14f124: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x14f124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f128: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14f128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f12c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x14f130: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f138: 0x0  nop
    ctx->pc = 0x14f138u;
    // NOP
    // 0x14f13c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14f13cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14f140: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f140u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f144: 0x0  nop
    ctx->pc = 0x14f144u;
    // NOP
    // 0x14f148: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x14F148u;
    {
        const bool branch_taken_0x14f148 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F148u;
        // 0x14f14c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f148) {
            ctx->pc = 0x14F164u;
            goto label_14f164;
        }
    }
    ctx->pc = 0x14F150u;
    // 0x14f150: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x14f154: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f15c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14F15Cu;
    {
        const bool branch_taken_0x14f15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F15Cu;
        // 0x14f160: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f15c) {
            ctx->pc = 0x14F194u;
            goto label_14f194;
        }
    }
    ctx->pc = 0x14F164u;
label_14f164:
    // 0x14f164: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f16c: 0x0  nop
    ctx->pc = 0x14f16cu;
    // NOP
    // 0x14f170: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f170u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f174: 0x0  nop
    ctx->pc = 0x14f174u;
    // NOP
    // 0x14f178: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14F178u;
    {
        const bool branch_taken_0x14f178 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f178) {
            ctx->pc = 0x14F194u;
            goto label_14f194;
        }
    }
    ctx->pc = 0x14F180u;
    // 0x14f180: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x14f184: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f18c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14F18Cu;
    {
        const bool branch_taken_0x14f18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F18Cu;
        // 0x14f190: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f18c) {
            ctx->pc = 0x14F194u;
            goto label_14f194;
        }
    }
    ctx->pc = 0x14F194u;
label_14f194:
    // 0x14f194: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14F194u;
    {
        const bool branch_taken_0x14f194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F194u;
        // 0x14f198: 0xe60101bc  swc1        $f1, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f194) {
            ctx->pc = 0x14F1E8u;
            return;
        }
    }
    ctx->pc = 0x14F19Cu;
}
