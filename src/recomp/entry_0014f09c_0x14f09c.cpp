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

// Function: entry_0014f09c
// Address: 0x14f09c - 0x14f11c
void entry_0014f09c_0x14f09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f09c_0x14f09c");
#endif

    ctx->pc = 0x14f09cu;

    // 0x14f09c: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x14f09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f0a0: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x14f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x14f0a4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x14f0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f0a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14f0a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f0ac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x14f0b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f0b8: 0x0  nop
    ctx->pc = 0x14f0b8u;
    // NOP
    // 0x14f0bc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14f0bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14f0c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f0c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f0c4: 0x0  nop
    ctx->pc = 0x14f0c4u;
    // NOP
    // 0x14f0c8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x14F0C8u;
    {
        const bool branch_taken_0x14f0c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0C8u;
        // 0x14f0cc: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0c8) {
            ctx->pc = 0x14F0E4u;
            goto label_14f0e4;
        }
    }
    ctx->pc = 0x14F0D0u;
    // 0x14f0d0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x14f0d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f0d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f0d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f0dc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14F0DCu;
    {
        const bool branch_taken_0x14f0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0DCu;
        // 0x14f0e0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0dc) {
            ctx->pc = 0x14F114u;
            goto label_14f114;
        }
    }
    ctx->pc = 0x14F0E4u;
label_14f0e4:
    // 0x14f0e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f0e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f0ec: 0x0  nop
    ctx->pc = 0x14f0ecu;
    // NOP
    // 0x14f0f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f0f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f0f4: 0x0  nop
    ctx->pc = 0x14f0f4u;
    // NOP
    // 0x14f0f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14F0F8u;
    {
        const bool branch_taken_0x14f0f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f0f8) {
            ctx->pc = 0x14F114u;
            goto label_14f114;
        }
    }
    ctx->pc = 0x14F100u;
    // 0x14f100: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x14f104: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f10c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14F10Cu;
    {
        const bool branch_taken_0x14f10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F10Cu;
        // 0x14f110: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f10c) {
            ctx->pc = 0x14F114u;
            goto label_14f114;
        }
    }
    ctx->pc = 0x14F114u;
label_14f114:
    // 0x14f114: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x14F114u;
    {
        const bool branch_taken_0x14f114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F114u;
        // 0x14f118: 0xe60101bc  swc1        $f1, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f114) {
            ctx->pc = 0x14F1E8u;
            return;
        }
    }
    ctx->pc = 0x14F11Cu;
}
