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

// Function: entry_0011607c
// Address: 0x11607c - 0x11611c
void entry_0011607c_0x11607c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011607c_0x11607c");
#endif

    ctx->pc = 0x11607cu;

    // 0x11607c: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x11607cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116080: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x116080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x116084: 0xe6200150  swc1        $f0, 0x150($s1)
    ctx->pc = 0x116084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 336), bits); }
    // 0x116088: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x116088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11608c: 0xe6200154  swc1        $f0, 0x154($s1)
    ctx->pc = 0x11608cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 340), bits); }
    // 0x116090: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x116090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116094: 0xe6200158  swc1        $f0, 0x158($s1)
    ctx->pc = 0x116094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 344), bits); }
    // 0x116098: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x116098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11609c: 0xe620015c  swc1        $f0, 0x15C($s1)
    ctx->pc = 0x11609cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 348), bits); }
    // 0x1160a0: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x1160a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1160a4: 0xe6200160  swc1        $f0, 0x160($s1)
    ctx->pc = 0x1160a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 352), bits); }
    // 0x1160a8: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x1160a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1160ac: 0xe6200164  swc1        $f0, 0x164($s1)
    ctx->pc = 0x1160acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 356), bits); }
    // 0x1160b0: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x1160b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1160b4: 0xe6200168  swc1        $f0, 0x168($s1)
    ctx->pc = 0x1160b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 360), bits); }
    // 0x1160b8: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x1160b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1160bc: 0xe620016c  swc1        $f0, 0x16C($s1)
    ctx->pc = 0x1160bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 364), bits); }
    // 0x1160c0: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x1160c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1160c4: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x1160c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x1160c8: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x1160c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1160cc: 0xe6200184  swc1        $f0, 0x184($s1)
    ctx->pc = 0x1160ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
    // 0x1160d0: 0xc6200180  lwc1        $f0, 0x180($s1)
    ctx->pc = 0x1160d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1160d4: 0xe6200188  swc1        $f0, 0x188($s1)
    ctx->pc = 0x1160d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 392), bits); }
    // 0x1160d8: 0xa620003c  sh          $zero, 0x3C($s1)
    ctx->pc = 0x1160d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x1160dc: 0x8625003c  lh          $a1, 0x3C($s1)
    ctx->pc = 0x1160dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1160e0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1160e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1160e4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1160e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1160e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1160e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1160ec: 0xae240024  sw          $a0, 0x24($s1)
    ctx->pc = 0x1160ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
    // 0x1160f0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1160f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1160f4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1160f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1160f8: 0xa623018c  sh          $v1, 0x18C($s1)
    ctx->pc = 0x1160f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 396), (uint16_t)GPR_U32(ctx, 3));
    // 0x1160fc: 0x8624003c  lh          $a0, 0x3C($s1)
    ctx->pc = 0x1160fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x116100: 0x8623018c  lh          $v1, 0x18C($s1)
    ctx->pc = 0x116100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 396)));
    // 0x116104: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x116104u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x116108: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x116108u;
    {
        const bool branch_taken_0x116108 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x116108) {
            ctx->pc = 0x11611Cu;
            return;
        }
    }
    ctx->pc = 0x116110u;
    // 0x116110: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x116110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x116114: 0xc050f08  jal         func_143C20
    ctx->pc = 0x116114u;
    SET_GPR_U32(ctx, 31, 0x11611Cu);
    ctx->pc = 0x116118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116114u;
    // 0x116118: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x116114u, 0x11611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11611Cu;
}
