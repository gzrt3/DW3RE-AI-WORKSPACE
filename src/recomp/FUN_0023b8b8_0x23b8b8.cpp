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

// Function: FUN_0023b8b8
// Address: 0x23b8b8 - 0x23b920
void FUN_0023b8b8_0x23b8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023b8b8_0x23b8b8");
#endif

    switch (ctx->pc) {
        case 0x23b91cu: goto label_23b91c;
        default: break;
    }

    ctx->pc = 0x23b8b8u;

    // 0x23b8b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23b8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23b8bc: 0x3c0c0029  lui         $t4, 0x29
    ctx->pc = 0x23b8bcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)41 << 16));
    // 0x23b8c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b8c4: 0xffa50038  sd          $a1, 0x38($sp)
    ctx->pc = 0x23b8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 5));
    // 0x23b8c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23b8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b8cc: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x23b8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
    // 0x23b8d0: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x23b8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x23b8d4: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x23b8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
    // 0x23b8d8: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x23b8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
    // 0x23b8dc: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x23b8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
    // 0x23b8e0: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x23b8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
    // 0x23b8e4: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x23b8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
    // 0x23b8e8: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x23b8e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23b8ec: 0xe7ad001c  swc1        $f13, 0x1C($sp)
    ctx->pc = 0x23b8ecu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x23b8f0: 0xe7ae0020  swc1        $f14, 0x20($sp)
    ctx->pc = 0x23b8f0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23b8f4: 0xe7af0024  swc1        $f15, 0x24($sp)
    ctx->pc = 0x23b8f4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x23b8f8: 0xe7b00028  swc1        $f16, 0x28($sp)
    ctx->pc = 0x23b8f8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x23b8fc: 0xe7b1002c  swc1        $f17, 0x2C($sp)
    ctx->pc = 0x23b8fcu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x23b900: 0xe7b20030  swc1        $f18, 0x30($sp)
    ctx->pc = 0x23b900u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x23b904: 0xe7b30034  swc1        $f19, 0x34($sp)
    ctx->pc = 0x23b904u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x23b908: 0x8d820818  lw          $v0, 0x818($t4)
    ctx->pc = 0x23b908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x290818u));
    // 0x23b90c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23b910: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x23b910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    // 0x23b914: 0xc08f650  jal         func_23D940
    ctx->pc = 0x23B914u;
    SET_GPR_U32(ctx, 31, 0x23B91Cu);
    ctx->pc = 0x23B918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B914u;
    // 0x23b918: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D940u, 0x23B914u, 0x23B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B91Cu;
label_23b91c:
    // 0x23b91c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x23b920u;
}
