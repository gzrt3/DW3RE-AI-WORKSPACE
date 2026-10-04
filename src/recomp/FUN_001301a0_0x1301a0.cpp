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

// Function: FUN_001301a0
// Address: 0x1301a0 - 0x130220
void FUN_001301a0_0x1301a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001301a0_0x1301a0");
#endif

    switch (ctx->pc) {
        case 0x13020cu: goto label_13020c;
        case 0x13021cu: goto label_13021c;
        default: break;
    }

    ctx->pc = 0x1301a0u;

    // 0x1301a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1301a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1301a4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1301a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1301a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1301a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1301ac: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x1301acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x1301b0: 0x84860002  lh          $a2, 0x2($a0)
    ctx->pc = 0x1301b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1301b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1301b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1301b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1301b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1301bc: 0x24a5a460  addiu       $a1, $a1, -0x5BA0
    ctx->pc = 0x1301bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943840));
    // 0x1301c0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1301c0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1301c4: 0x0  nop
    ctx->pc = 0x1301c4u;
    // NOP
    // 0x1301c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1301c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1301cc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1301ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1301d0: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x1301d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1301d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1301d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1301d8: 0x0  nop
    ctx->pc = 0x1301d8u;
    // NOP
    // 0x1301dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1301dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1301e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1301e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1301e4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1301e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1301e8: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x1301e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1301ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1301ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1301f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1301f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1301f4: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1301f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1301f8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1301f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1301fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x130200: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x130200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x130204: 0xc066d7a  jal         func_19B5E8
    ctx->pc = 0x130204u;
    SET_GPR_U32(ctx, 31, 0x13020Cu);
    ctx->pc = 0x130208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130204u;
    // 0x130208: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x130204u, 0x13020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13020Cu;
label_13020c:
    // 0x13020c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x13020cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x130210: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x130210u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x130214: 0xc04f31c  jal         func_13CC70
    ctx->pc = 0x130214u;
    SET_GPR_U32(ctx, 31, 0x13021Cu);
    ctx->pc = 0x130218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130214u;
    // 0x130218: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC70u, 0x130214u, 0x13021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13021Cu;
label_13021c:
    // 0x13021c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13021cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x130220u;
}
