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

// Function: entry_001ccf30
// Address: 0x1ccf30 - 0x1ccfd0
void entry_001ccf30_0x1ccf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccf30_0x1ccf30");
#endif

    switch (ctx->pc) {
        case 0x1ccf38u: goto label_1ccf38;
        case 0x1ccf74u: goto label_1ccf74;
        case 0x1ccfa0u: goto label_1ccfa0;
        case 0x1ccfa8u: goto label_1ccfa8;
        default: break;
    }

    ctx->pc = 0x1ccf30u;

    // 0x1ccf30: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1CCF30u;
    SET_GPR_U32(ctx, 31, 0x1CCF38u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1CCF30u, 0x1CCF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF38u;
label_1ccf38:
    // 0x1ccf38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ccf38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccf3c: 0x0  nop
    ctx->pc = 0x1ccf3cu;
    // NOP
    // 0x1ccf40: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1ccf40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ccf44: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ccf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1ccf48: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1ccf48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ccf4c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ccf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1ccf50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ccf50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccf54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ccf54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccf58: 0x0  nop
    ctx->pc = 0x1ccf58u;
    // NOP
    // 0x1ccf5c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ccf5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ccf60: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1ccf60u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x1ccf64: 0x0  nop
    ctx->pc = 0x1ccf64u;
    // NOP
    // 0x1ccf68: 0x0  nop
    ctx->pc = 0x1ccf68u;
    // NOP
    // 0x1ccf6c: 0xc06d4c0  jal         func_1B5300
    ctx->pc = 0x1CCF6Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF74u);
    ctx->pc = 0x1B5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5300u, 0x1CCF6Cu, 0x1CCF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF74u;
label_1ccf74:
    // 0x1ccf74: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1ccf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1ccf78: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ccf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ccf7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ccf7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccf80: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1ccf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1ccf84: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1ccf84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ccf88: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1ccf88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1ccf8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ccf8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ccf90: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1ccf90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1ccf94: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1ccf94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1ccf98: 0xc066e02  jal         func_19B808
    ctx->pc = 0x1CCF98u;
    SET_GPR_U32(ctx, 31, 0x1CCFA0u);
    ctx->pc = 0x1CCF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF98u;
    // 0x1ccf9c: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x1CCF98u, 0x1CCFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFA0u;
label_1ccfa0:
    // 0x1ccfa0: 0xc0733f4  jal         func_1CCFD0
    ctx->pc = 0x1CCFA0u;
    SET_GPR_U32(ctx, 31, 0x1CCFA8u);
    ctx->pc = 0x1CCFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFA0u;
    // 0x1ccfa4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFD0u, 0x1CCFA0u, 0x1CCFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFA8u;
label_1ccfa8:
    // 0x1ccfa8: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x1ccfa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ccfac: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x1ccfacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1ccfb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ccfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ccfb4: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x1ccfb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ccfb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ccfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccfbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ccfbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFC0u;
        // 0x1ccfc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCFC8u;
    // 0x1ccfc8: 0x0  nop
    ctx->pc = 0x1ccfc8u;
    // NOP
    // 0x1ccfcc: 0x0  nop
    ctx->pc = 0x1ccfccu;
    // NOP
    ctx->pc = 0x1ccfd0u;
}
