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

// Function: entry_00247478
// Address: 0x247478 - 0x247520
void entry_00247478_0x247478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247478_0x247478");
#endif

    switch (ctx->pc) {
        case 0x247510u: goto label_247510;
        default: break;
    }

    ctx->pc = 0x247478u;

    // 0x247478: 0x2d220080  sltiu       $v0, $t1, 0x80
    ctx->pc = 0x247478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x24747c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x24747Cu;
    {
        const bool branch_taken_0x24747c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24747Cu;
        // 0x247480: 0x91140  sll         $v0, $t1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24747c) {
            ctx->pc = 0x247438u;
            return;
        }
    }
    ctx->pc = 0x247484u;
    // 0x247484: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x247484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247488: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x247488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x24748c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x24748cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x247490: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x247490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x247494: 0x0  nop
    ctx->pc = 0x247494u;
    // NOP
    // 0x247498: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24749c: 0x0  nop
    ctx->pc = 0x24749cu;
    // NOP
    // 0x2474a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2474A0u;
    {
        const bool branch_taken_0x2474a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2474a0) {
            ctx->pc = 0x2474ACu;
            goto label_2474ac;
        }
    }
    ctx->pc = 0x2474A8u;
    // 0x2474a8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2474a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2474ac:
    // 0x2474ac: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2474acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2474b0: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2474b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x2474b4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2474b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2474b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2474b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2474bc: 0x0  nop
    ctx->pc = 0x2474bcu;
    // NOP
    // 0x2474c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2474c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2474c4: 0x0  nop
    ctx->pc = 0x2474c4u;
    // NOP
    // 0x2474c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2474C8u;
    {
        const bool branch_taken_0x2474c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2474c8) {
            ctx->pc = 0x2474D4u;
            goto label_2474d4;
        }
    }
    ctx->pc = 0x2474D0u;
    // 0x2474d0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2474d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2474d4:
    // 0x2474d4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2474d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2474d8: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2474d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x2474dc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2474dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2474e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2474e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2474e4: 0x0  nop
    ctx->pc = 0x2474e4u;
    // NOP
    // 0x2474e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2474e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2474ec: 0x0  nop
    ctx->pc = 0x2474ecu;
    // NOP
    // 0x2474f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2474F0u;
    {
        const bool branch_taken_0x2474f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2474f0) {
            ctx->pc = 0x2474FCu;
            goto label_2474fc;
        }
    }
    ctx->pc = 0x2474F8u;
    // 0x2474f8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2474f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2474fc:
    // 0x2474fc: 0x8c821080  lw          $v0, 0x1080($a0)
    ctx->pc = 0x2474fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4224)));
    // 0x247500: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x247500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x247504: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x247504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x247508: 0xc18d844  jal         func_636110
    ctx->pc = 0x247508u;
    SET_GPR_U32(ctx, 31, 0x247510u);
    ctx->pc = 0x24750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247508u;
    // 0x24750c: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x636110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x636110u, 0x247508u, 0x247510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247510u;
label_247510:
    // 0x247510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247514: 0x3e00008  jr          $ra
    ctx->pc = 0x247514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247514u;
        // 0x247518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24751Cu;
    // 0x24751c: 0x0  nop
    ctx->pc = 0x24751cu;
    // NOP
    ctx->pc = 0x247520u;
}
