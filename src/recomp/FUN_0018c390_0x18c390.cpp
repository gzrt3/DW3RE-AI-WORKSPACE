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

// Function: FUN_0018c390
// Address: 0x18c390 - 0x18c42c
void FUN_0018c390_0x18c390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018c390_0x18c390");
#endif

    switch (ctx->pc) {
        case 0x18c3c0u: goto label_18c3c0;
        default: break;
    }

    ctx->pc = 0x18c390u;

    // 0x18c390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c394: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18c394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18c398: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18c398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18c39c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x18c3a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18c3a4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18c3a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18c3ac: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x18c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x18c3b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18c3b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18c3b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c3b8: 0xc064224  jal         func_190890
    ctx->pc = 0x18C3B8u;
    SET_GPR_U32(ctx, 31, 0x18C3C0u);
    ctx->pc = 0x18C3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C3B8u;
    // 0x18c3bc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190890u, 0x18C3B8u, 0x18C3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C3C0u;
label_18c3c0:
    // 0x18c3c0: 0x3c023dab  lui         $v0, 0x3DAB
    ctx->pc = 0x18c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15787 << 16));
    // 0x18c3c4: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x18c3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x18c3c8: 0x344492a6  ori         $a0, $v0, 0x92A6
    ctx->pc = 0x18c3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
    // 0x18c3cc: 0x24080069  addiu       $t0, $zero, 0x69
    ctx->pc = 0x18c3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x18c3d0: 0xae0400b8  sw          $a0, 0xB8($s0)
    ctx->pc = 0x18c3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 4));
    // 0x18c3d4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x18c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x18c3d8: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x18c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x18c3dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c3e0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x18c3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c3e4: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x18c3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x18c3e8: 0x3c024226  lui         $v0, 0x4226
    ctx->pc = 0x18c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16934 << 16));
    // 0x18c3ec: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x18c3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x18c3f0: 0x344727f0  ori         $a3, $v0, 0x27F0
    ctx->pc = 0x18c3f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10224);
    // 0x18c3f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18c3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c3f8: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x18c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x18c3fc: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x18c3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x18c400: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c404: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x18c404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x18c408: 0xae0800b0  sw          $t0, 0xB0($s0)
    ctx->pc = 0x18c408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 8));
    // 0x18c40c: 0xae070098  sw          $a3, 0x98($s0)
    ctx->pc = 0x18c40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 7));
    // 0x18c410: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x18c410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x18c414: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x18c414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x18c418: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x18c418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
    // 0x18c41c: 0xae0600e0  sw          $a2, 0xE0($s0)
    ctx->pc = 0x18c41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 6));
    // 0x18c420: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x18c420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x18c424: 0xc066e26  jal         func_19B898
    ctx->pc = 0x18C424u;
    SET_GPR_U32(ctx, 31, 0x18C42Cu);
    ctx->pc = 0x18C428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C424u;
    // 0x18c428: 0xae0200d8  sw          $v0, 0xD8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x18C424u, 0x18C42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C42Cu;
}
