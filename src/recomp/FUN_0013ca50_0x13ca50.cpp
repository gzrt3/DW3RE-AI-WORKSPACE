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

// Function: FUN_0013ca50
// Address: 0x13ca50 - 0x13cac4
void FUN_0013ca50_0x13ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ca50_0x13ca50");
#endif

    switch (ctx->pc) {
        case 0x13ca6cu: goto label_13ca6c;
        case 0x13ca7cu: goto label_13ca7c;
        default: break;
    }

    ctx->pc = 0x13ca50u;

    // 0x13ca50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ca54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ca54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ca58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ca58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ca5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13ca5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca60: 0x908402e4  lbu         $a0, 0x2E4($a0)
    ctx->pc = 0x13ca60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 740)));
    // 0x13ca64: 0xc06465c  jal         func_191970
    ctx->pc = 0x13CA64u;
    SET_GPR_U32(ctx, 31, 0x13CA6Cu);
    ctx->pc = 0x13CA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA64u;
    // 0x13ca68: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191970u, 0x13CA64u, 0x13CA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA6Cu;
label_13ca6c:
    // 0x13ca6c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x13ca6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ca70: 0xc7808518  lwc1        $f0, -0x7AE8($gp)
    ctx->pc = 0x13ca70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ca74: 0xc064aa4  jal         func_192A90
    ctx->pc = 0x13CA74u;
    SET_GPR_U32(ctx, 31, 0x13CA7Cu);
    ctx->pc = 0x13CA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA74u;
    // 0x13ca78: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A90u, 0x13CA74u, 0x13CA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA7Cu;
label_13ca7c:
    // 0x13ca7c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x13ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x13ca80: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x13ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x13ca84: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x13ca84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x13ca88: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x13ca88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13ca8c: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x13ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
    // 0x13ca90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13ca90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13ca94: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13ca94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x13ca98: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x13ca98u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x13ca9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13ca9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13caa0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13caa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13caa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13caa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13caa8: 0x0  nop
    ctx->pc = 0x13caa8u;
    // NOP
    // 0x13caac: 0xe60102b0  swc1        $f1, 0x2B0($s0)
    ctx->pc = 0x13caacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 688), bits); }
    // 0x13cab0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13cab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13cab4: 0xe60102b8  swc1        $f1, 0x2B8($s0)
    ctx->pc = 0x13cab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 696), bits); }
    // 0x13cab8: 0xe60002c0  swc1        $f0, 0x2C0($s0)
    ctx->pc = 0x13cab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
    // 0x13cabc: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x13CABCu;
    SET_GPR_U32(ctx, 31, 0x13CAC4u);
    ctx->pc = 0x13CAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CABCu;
    // 0x13cac0: 0xe60002c8  swc1        $f0, 0x2C8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 712), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x13CABCu, 0x13CAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CAC4u;
}
