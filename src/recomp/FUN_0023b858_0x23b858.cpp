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

// Function: FUN_0023b858
// Address: 0x23b858 - 0x23b8ac
void FUN_0023b858_0x23b858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023b858_0x23b858");
#endif

    switch (ctx->pc) {
        case 0x23b8a8u: goto label_23b8a8;
        default: break;
    }

    ctx->pc = 0x23b858u;

    // 0x23b858: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23b858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23b85c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b860: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x23b860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x23b864: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23b864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b868: 0xffa70038  sd          $a3, 0x38($sp)
    ctx->pc = 0x23b868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 7));
    // 0x23b86c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x23b86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23b870: 0xffa80040  sd          $t0, 0x40($sp)
    ctx->pc = 0x23b870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
    // 0x23b874: 0xffa90048  sd          $t1, 0x48($sp)
    ctx->pc = 0x23b874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 9));
    // 0x23b878: 0xffaa0050  sd          $t2, 0x50($sp)
    ctx->pc = 0x23b878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 10));
    // 0x23b87c: 0xffab0058  sd          $t3, 0x58($sp)
    ctx->pc = 0x23b87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 11));
    // 0x23b880: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x23b880u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23b884: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x23b884u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23b888: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x23b888u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23b88c: 0xe7af001c  swc1        $f15, 0x1C($sp)
    ctx->pc = 0x23b88cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x23b890: 0xe7b00020  swc1        $f16, 0x20($sp)
    ctx->pc = 0x23b890u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23b894: 0xe7b10024  swc1        $f17, 0x24($sp)
    ctx->pc = 0x23b894u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x23b898: 0xe7b20028  swc1        $f18, 0x28($sp)
    ctx->pc = 0x23b898u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x23b89c: 0xe7b3002c  swc1        $f19, 0x2C($sp)
    ctx->pc = 0x23b89cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x23b8a0: 0xc08f66e  jal         func_23D9B8
    ctx->pc = 0x23B8A0u;
    SET_GPR_U32(ctx, 31, 0x23B8A8u);
    ctx->pc = 0x23B8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B8A0u;
    // 0x23b8a4: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9B8u, 0x23B8A0u, 0x23B8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B8A8u;
label_23b8a8:
    // 0x23b8a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x23b8acu;
}
