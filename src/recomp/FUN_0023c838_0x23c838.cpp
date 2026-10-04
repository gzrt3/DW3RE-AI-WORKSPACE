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

// Function: FUN_0023c838
// Address: 0x23c838 - 0x23c8c0
void FUN_0023c838_0x23c838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023c838_0x23c838");
#endif

    switch (ctx->pc) {
        case 0x23c8b4u: goto label_23c8b4;
        default: break;
    }

    ctx->pc = 0x23c838u;

    // 0x23c838: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23c838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x23c83c: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x23c83cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x23c840: 0x8c4d0818  lw          $t5, 0x818($v0)
    ctx->pc = 0x23c840u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x290818u));
    // 0x23c844: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x23c844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x23c848: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x23c848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x23c84c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x23c84cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c850: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23c850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x23c854: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x23c854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x23c858: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23c858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c85c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x23c85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23c860: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x23c860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x23c864: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x23c864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x23c868: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x23c868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x23c86c: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x23c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x23c870: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x23c870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x23c874: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x23c874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x23c878: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x23c878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x23c87c: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x23c87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x23c880: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x23c880u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x23c884: 0xe7ad0074  swc1        $f13, 0x74($sp)
    ctx->pc = 0x23c884u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x23c888: 0xe7ae0078  swc1        $f14, 0x78($sp)
    ctx->pc = 0x23c888u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x23c88c: 0xe7af007c  swc1        $f15, 0x7C($sp)
    ctx->pc = 0x23c88cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x23c890: 0xe7b00080  swc1        $f16, 0x80($sp)
    ctx->pc = 0x23c890u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x23c894: 0xe7b10084  swc1        $f17, 0x84($sp)
    ctx->pc = 0x23c894u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x23c898: 0xe7b20088  swc1        $f18, 0x88($sp)
    ctx->pc = 0x23c898u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x23c89c: 0xe7b3008c  swc1        $f19, 0x8C($sp)
    ctx->pc = 0x23c89cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x23c8a0: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x23c8a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x23c8a4: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x23c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x23c8a8: 0xafad0054  sw          $t5, 0x54($sp)
    ctx->pc = 0x23c8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 13));
    // 0x23c8ac: 0xc08f650  jal         func_23D940
    ctx->pc = 0x23C8ACu;
    SET_GPR_U32(ctx, 31, 0x23C8B4u);
    ctx->pc = 0x23C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8ACu;
    // 0x23c8b0: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D940u, 0x23C8ACu, 0x23C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8B4u;
label_23c8b4:
    // 0x23c8b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c8b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23c8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23c8bc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x23c8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x23c8c0u;
}
