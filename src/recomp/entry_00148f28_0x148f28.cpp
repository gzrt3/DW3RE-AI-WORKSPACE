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

// Function: entry_00148f28
// Address: 0x148f28 - 0x148fd8
void entry_00148f28_0x148f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148f28_0x148f28");
#endif

    switch (ctx->pc) {
        case 0x148fd0u: goto label_148fd0;
        default: break;
    }

    ctx->pc = 0x148f28u;

    // 0x148f28: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x148f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x148f2c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x148f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x148f30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x148f30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148f34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x148f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x148f38: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x148f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x148f3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x148f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x148f40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148f44: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x148f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x148f48: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x148f48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x148f4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148f50: 0x0  nop
    ctx->pc = 0x148f50u;
    // NOP
    // 0x148f54: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x148f54u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x148f58: 0x0  nop
    ctx->pc = 0x148f58u;
    // NOP
    // 0x148f5c: 0x0  nop
    ctx->pc = 0x148f5cu;
    // NOP
    // 0x148f60: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x148f60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148f64: 0x0  nop
    ctx->pc = 0x148f64u;
    // NOP
    // 0x148f68: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x148F68u;
    {
        const bool branch_taken_0x148f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148f68) {
            ctx->pc = 0x148F74u;
            goto label_148f74;
        }
    }
    ctx->pc = 0x148F70u;
    // 0x148f70: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x148f70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148f74:
    // 0x148f74: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x148F74u;
    {
        const bool branch_taken_0x148f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x148F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F74u;
        // 0x148f78: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f74) {
            ctx->pc = 0x148F90u;
            goto label_148f90;
        }
    }
    ctx->pc = 0x148F7Cu;
    // 0x148f7c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x148f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x148f80: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x148f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x148f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148f88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x148F88u;
    {
        const bool branch_taken_0x148f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F88u;
        // 0x148f8c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f88) {
            ctx->pc = 0x148FC0u;
            goto label_148fc0;
        }
    }
    ctx->pc = 0x148F90u;
label_148f90:
    // 0x148f90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x148f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x148f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148f98: 0x0  nop
    ctx->pc = 0x148f98u;
    // NOP
    // 0x148f9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x148f9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148fa0: 0x0  nop
    ctx->pc = 0x148fa0u;
    // NOP
    // 0x148fa4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x148FA4u;
    {
        const bool branch_taken_0x148fa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148fa4) {
            ctx->pc = 0x148FC0u;
            goto label_148fc0;
        }
    }
    ctx->pc = 0x148FACu;
    // 0x148fac: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x148facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x148fb0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x148fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x148fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148fb8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x148FB8u;
    {
        const bool branch_taken_0x148fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148FB8u;
        // 0x148fbc: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x148fb8) {
            ctx->pc = 0x148FC0u;
            goto label_148fc0;
        }
    }
    ctx->pc = 0x148FC0u;
label_148fc0:
    // 0x148fc0: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x148fc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x148fc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x148fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fc8: 0xc0528fc  jal         func_14A3F0
    ctx->pc = 0x148FC8u;
    SET_GPR_U32(ctx, 31, 0x148FD0u);
    ctx->pc = 0x148FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148FC8u;
    // 0x148fcc: 0x26250028  addiu       $a1, $s1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A3F0u, 0x148FC8u, 0x148FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FD0u;
label_148fd0:
    // 0x148fd0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x148FD0u;
    {
        const bool branch_taken_0x148fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148fd0) {
            ctx->pc = 0x149004u;
            return;
        }
    }
    ctx->pc = 0x148FD8u;
}
