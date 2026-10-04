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

// Function: entry_00217178
// Address: 0x217178 - 0x2172d4
void entry_00217178_0x217178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217178_0x217178");
#endif

    switch (ctx->pc) {
        case 0x217254u: goto label_217254;
        default: break;
    }

    ctx->pc = 0x217178u;

    // 0x217178: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x217178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x21717c: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x21717Cu;
    {
        const bool branch_taken_0x21717c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21717c) {
            ctx->pc = 0x2172D4u;
            return;
        }
    }
    ctx->pc = 0x217184u;
    // 0x217184: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x217184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x217188: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21718c: 0xac228a50  sw          $v0, -0x75B0($at)
    ctx->pc = 0x21718cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x588A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A50u, _value); } while (0);
    // 0x217190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x217190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217194: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x217194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x217198: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21719c: 0xac228a54  sw          $v0, -0x75AC($at)
    ctx->pc = 0x21719cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x588A54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A54u, _value); } while (0);
    // 0x2171a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2171a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2171a4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2171a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2171a8: 0xac228a5c  sw          $v0, -0x75A4($at)
    ctx->pc = 0x2171a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x588A5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A5Cu, _value); } while (0);
    // 0x2171ac: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2171acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2171b0: 0xaf84923c  sw          $a0, -0x6DC4($gp)
    ctx->pc = 0x2171b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939196), GPR_U32(ctx, 4));
    // 0x2171b4: 0xac208a58  sw          $zero, -0x75A8($at)
    ctx->pc = 0x2171b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x588A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A58u, _value); } while (0);
    // 0x2171b8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2171b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2171bc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2171bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2171c0: 0x8f859248  lw          $a1, -0x6DB8($gp)
    ctx->pc = 0x2171c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939208)));
    // 0x2171c4: 0xc4258a90  lwc1        $f5, -0x7570($at)
    ctx->pc = 0x2171c4u;
    { uint32_t bits = FAST_READ32(0x588A90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2171c8: 0xaf839240  sw          $v1, -0x6DC0($gp)
    ctx->pc = 0x2171c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939200), GPR_U32(ctx, 3));
    // 0x2171cc: 0xaf839234  sw          $v1, -0x6DCC($gp)
    ctx->pc = 0x2171ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939188), GPR_U32(ctx, 3));
    // 0x2171d0: 0xaf839230  sw          $v1, -0x6DD0($gp)
    ctx->pc = 0x2171d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939184), GPR_U32(ctx, 3));
    // 0x2171d4: 0xaf809238  sw          $zero, -0x6DC8($gp)
    ctx->pc = 0x2171d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939192), GPR_U32(ctx, 0));
    // 0x2171d8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2171d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2171dc: 0xc4248a94  lwc1        $f4, -0x756C($at)
    ctx->pc = 0x2171dcu;
    { uint32_t bits = FAST_READ32(0x588A94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2171e0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2171e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2171e4: 0xc4238a98  lwc1        $f3, -0x7568($at)
    ctx->pc = 0x2171e4u;
    { uint32_t bits = FAST_READ32(0x588A98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2171e8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2171e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2171ec: 0xc4228a9c  lwc1        $f2, -0x7564($at)
    ctx->pc = 0x2171ecu;
    { uint32_t bits = FAST_READ32(0x588A9Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2171f0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2171f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2171f4: 0xc4218a80  lwc1        $f1, -0x7580($at)
    ctx->pc = 0x2171f4u;
    { uint32_t bits = FAST_READ32(0x588A80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2171f8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2171f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2171fc: 0xc4208a84  lwc1        $f0, -0x757C($at)
    ctx->pc = 0x2171fcu;
    { uint32_t bits = FAST_READ32(0x588A84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217200: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x217204: 0xe4258a70  swc1        $f5, -0x7590($at)
    ctx->pc = 0x217204u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x588A70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A70u, _value); } while (0); }
    // 0x217208: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21720c: 0xe4248a74  swc1        $f4, -0x758C($at)
    ctx->pc = 0x21720cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x588A74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A74u, _value); } while (0); }
    // 0x217210: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x217214: 0xe4238a78  swc1        $f3, -0x7588($at)
    ctx->pc = 0x217214u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x588A78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A78u, _value); } while (0); }
    // 0x217218: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21721c: 0xe4228a7c  swc1        $f2, -0x7584($at)
    ctx->pc = 0x21721cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x588A7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A7Cu, _value); } while (0); }
    // 0x217220: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x217224: 0xe4218a60  swc1        $f1, -0x75A0($at)
    ctx->pc = 0x217224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x588A60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A60u, _value); } while (0); }
    // 0x217228: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21722c: 0xe4208a64  swc1        $f0, -0x759C($at)
    ctx->pc = 0x21722cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x588A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A64u, _value); } while (0); }
    // 0x217230: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x217234: 0xc4218a88  lwc1        $f1, -0x7578($at)
    ctx->pc = 0x217234u;
    { uint32_t bits = FAST_READ32(0x588A88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217238: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21723c: 0xc4208a8c  lwc1        $f0, -0x7574($at)
    ctx->pc = 0x21723cu;
    { uint32_t bits = FAST_READ32(0x588A8Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217240: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x217244: 0xe4218a68  swc1        $f1, -0x7598($at)
    ctx->pc = 0x217244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x588A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A68u, _value); } while (0); }
    // 0x217248: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21724c: 0xc05eff8  jal         func_17BFE0
    ctx->pc = 0x21724Cu;
    SET_GPR_U32(ctx, 31, 0x217254u);
    ctx->pc = 0x217250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21724Cu;
    // 0x217250: 0xe4208a6c  swc1        $f0, -0x7594($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BFE0u, 0x21724Cu, 0x217254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217254u;
label_217254:
    // 0x217254: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x217254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x217258: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x217258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x21725c: 0x8f86924c  lw          $a2, -0x6DB4($gp)
    ctx->pc = 0x21725cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939212)));
    // 0x217260: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x217260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x217264: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x217264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x217268: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x217268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x21726c: 0x24a5d670  addiu       $a1, $a1, -0x2990
    ctx->pc = 0x21726cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956656));
    // 0x217270: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x217274: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x217274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x217278: 0x2484d674  addiu       $a0, $a0, -0x298C
    ctx->pc = 0x217278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956660));
    // 0x21727c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21727cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217280: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x217280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217284: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x217284u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x217288: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x217288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21728c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21728cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x217290: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x217290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x217294: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x217294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x217298: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x217298u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x21729c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x21729cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2172a0: 0xe4218a40  swc1        $f1, -0x75C0($at)
    ctx->pc = 0x2172a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937152), bits); }
    // 0x2172a4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2172a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2172a8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2172a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2172ac: 0xe4218a44  swc1        $f1, -0x75BC($at)
    ctx->pc = 0x2172acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x588A44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A44u, _value); } while (0); }
    // 0x2172b0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2172b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2172b4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2172b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2172b8: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x2172b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2172bc: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2172bcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x2172c0: 0xac238a4c  sw          $v1, -0x75B4($at)
    ctx->pc = 0x2172c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x588A4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A4Cu, _value); } while (0);
    // 0x2172c4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2172c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2172c8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2172c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2172cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2172ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2172d0: 0xe4208a48  swc1        $f0, -0x75B8($at)
    ctx->pc = 0x2172d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x588A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x588A48u, _value); } while (0); }
    ctx->pc = 0x2172d4u;
}
