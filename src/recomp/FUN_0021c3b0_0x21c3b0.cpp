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

// Function: FUN_0021c3b0
// Address: 0x21c3b0 - 0x21c41c
void FUN_0021c3b0_0x21c3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021c3b0_0x21c3b0");
#endif

    switch (ctx->pc) {
        case 0x21c410u: goto label_21c410;
        case 0x21c418u: goto label_21c418;
        default: break;
    }

    ctx->pc = 0x21c3b0u;

    // 0x21c3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c3b4: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x21c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x21c3b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c3bc: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x21c3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x21c3c0: 0xa0222490  sb          $v0, 0x2490($at)
    ctx->pc = 0x21c3c0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2F2490u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2F2490u, _value); } while (0);
    // 0x21c3c4: 0x24030195  addiu       $v1, $zero, 0x195
    ctx->pc = 0x21c3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
    // 0x21c3c8: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x21c3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x21c3cc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x21c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x21c3d0: 0xa0222491  sb          $v0, 0x2491($at)
    ctx->pc = 0x21c3d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2F2491u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2F2491u, _value); } while (0);
    // 0x21c3d4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x21c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x21c3d8: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x21c3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x21c3dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21c3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21c3e0: 0xa0242470  sb          $a0, 0x2470($at)
    ctx->pc = 0x21c3e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2F2470u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2F2470u, _value); } while (0);
    // 0x21c3e4: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x21c3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x21c3e8: 0xaf8392d0  sw          $v1, -0x6D30($gp)
    ctx->pc = 0x21c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939344), GPR_U32(ctx, 3));
    // 0x21c3ec: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x21c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x21c3f0: 0xa0242471  sb          $a0, 0x2471($at)
    ctx->pc = 0x21c3f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2F2471u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2F2471u, _value); } while (0);
    // 0x21c3f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21c3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c3f8: 0xaf8392c8  sw          $v1, -0x6D38($gp)
    ctx->pc = 0x21c3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939336), GPR_U32(ctx, 3));
    // 0x21c3fc: 0xaf8092c4  sw          $zero, -0x6D3C($gp)
    ctx->pc = 0x21c3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939332), GPR_U32(ctx, 0));
    // 0x21c400: 0xaf8092cc  sw          $zero, -0x6D34($gp)
    ctx->pc = 0x21c400u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 0));
    // 0x21c404: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x21c404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x21c408: 0xc06452c  jal         func_1914B0
    ctx->pc = 0x21C408u;
    SET_GPR_U32(ctx, 31, 0x21C410u);
    ctx->pc = 0x21C40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C408u;
    // 0x21c40c: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1914B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1914B0u, 0x21C408u, 0x21C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C410u;
label_21c410:
    // 0x21c410: 0xc064710  jal         func_191C40
    ctx->pc = 0x21C410u;
    SET_GPR_U32(ctx, 31, 0x21C418u);
    ctx->pc = 0x191C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191C40u, 0x21C410u, 0x21C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C418u;
label_21c418:
    // 0x21c418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x21c41cu;
}
