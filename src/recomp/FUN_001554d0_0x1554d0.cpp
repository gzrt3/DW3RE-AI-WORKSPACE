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

// Function: FUN_001554d0
// Address: 0x1554d0 - 0x15577c
void FUN_001554d0_0x1554d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001554d0_0x1554d0");
#endif

    switch (ctx->pc) {
        case 0x155590u: goto label_155590;
        case 0x1555d4u: goto label_1555d4;
        case 0x1556d0u: goto label_1556d0;
        case 0x1556fcu: goto label_1556fc;
        case 0x155750u: goto label_155750;
        default: break;
    }

    ctx->pc = 0x1554d0u;

    // 0x1554d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1554d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1554d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1554d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1554d8: 0x8f8b8630  lw          $t3, -0x79D0($gp)
    ctx->pc = 0x1554d8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x1554dc: 0x11600049  beqz        $t3, . + 4 + (0x49 << 2)
    ctx->pc = 0x1554DCu;
    {
        const bool branch_taken_0x1554dc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1554dc) {
            ctx->pc = 0x155604u;
            goto label_155604;
        }
    }
    ctx->pc = 0x1554E4u;
    // 0x1554e4: 0x25620040  addiu       $v0, $t3, 0x40
    ctx->pc = 0x1554e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
    // 0x1554e8: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x1554e8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x1554ec: 0xaf828620  sw          $v0, -0x79E0($gp)
    ctx->pc = 0x1554ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936096), GPR_U32(ctx, 2));
    // 0x1554f0: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x1554f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x1554f4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1554f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1554f8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1554f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1554fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1554fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x155500: 0x79680000  lq          $t0, 0x0($t3)
    ctx->pc = 0x155500u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x155504: 0x79670010  lq          $a3, 0x10($t3)
    ctx->pc = 0x155504u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x155508: 0x254aba20  addiu       $t2, $t2, -0x45E0
    ctx->pc = 0x155508u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294949408));
    // 0x15550c: 0x79660020  lq          $a2, 0x20($t3)
    ctx->pc = 0x15550cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x155510: 0x2529ba60  addiu       $t1, $t1, -0x45A0
    ctx->pc = 0x155510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294949472));
    // 0x155514: 0x79620030  lq          $v0, 0x30($t3)
    ctx->pc = 0x155514u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x155518: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x155518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15551c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15551cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155520: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x155520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x155524: 0x24a5ba30  addiu       $a1, $a1, -0x45D0
    ctx->pc = 0x155524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949424));
    // 0x155528: 0x7d480000  sq          $t0, 0x0($t2)
    ctx->pc = 0x155528u;
    do { __m128i _value = (GPR_VEC(ctx, 8)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x32BA20u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x32BA20u, _value); } while (0);
    // 0x15552c: 0x7d470010  sq          $a3, 0x10($t2)
    ctx->pc = 0x15552cu;
    do { __m128i _value = (GPR_VEC(ctx, 7)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x32BA30u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x32BA30u, _value); } while (0);
    // 0x155530: 0x7d460020  sq          $a2, 0x20($t2)
    ctx->pc = 0x155530u;
    do { __m128i _value = (GPR_VEC(ctx, 6)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x32BA40u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x32BA40u, _value); } while (0);
    // 0x155534: 0x7d420030  sq          $v0, 0x30($t2)
    ctx->pc = 0x155534u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x32BA50u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x32BA50u, _value); } while (0);
    // 0x155538: 0x79680000  lq          $t0, 0x0($t3)
    ctx->pc = 0x155538u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x15553c: 0x79670010  lq          $a3, 0x10($t3)
    ctx->pc = 0x15553cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x155540: 0x79660020  lq          $a2, 0x20($t3)
    ctx->pc = 0x155540u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x155544: 0x79620030  lq          $v0, 0x30($t3)
    ctx->pc = 0x155544u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x155548: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x155548u;
    do { __m128i _value = (GPR_VEC(ctx, 8)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x32BA60u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x32BA60u, _value); } while (0);
    // 0x15554c: 0x7d270010  sq          $a3, 0x10($t1)
    ctx->pc = 0x15554cu;
    do { __m128i _value = (GPR_VEC(ctx, 7)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x32BA70u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x32BA70u, _value); } while (0);
    // 0x155550: 0x7d260020  sq          $a2, 0x20($t1)
    ctx->pc = 0x155550u;
    do { __m128i _value = (GPR_VEC(ctx, 6)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x32BA80u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x32BA80u, _value); } while (0);
    // 0x155554: 0x7d220030  sq          $v0, 0x30($t1)
    ctx->pc = 0x155554u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x32BA90u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x32BA90u, _value); } while (0);
    // 0x155558: 0xac23b9ac  sw          $v1, -0x4654($at)
    ctx->pc = 0x155558u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x32B9ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9ACu, _value); } while (0);
    // 0x15555c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15555cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155560: 0xc422ba20  lwc1        $f2, -0x45E0($at)
    ctx->pc = 0x155560u;
    { uint32_t bits = FAST_READ32(0x32BA20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x155564: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155568: 0xc421ba24  lwc1        $f1, -0x45DC($at)
    ctx->pc = 0x155568u;
    { uint32_t bits = FAST_READ32(0x32BA24u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15556c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15556cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155570: 0xc420ba28  lwc1        $f0, -0x45D8($at)
    ctx->pc = 0x155570u;
    { uint32_t bits = FAST_READ32(0x32BA28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155574: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155578: 0xe422b9a0  swc1        $f2, -0x4660($at)
    ctx->pc = 0x155578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9A0u, _value); } while (0); }
    // 0x15557c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15557cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155580: 0xe421b9a4  swc1        $f1, -0x465C($at)
    ctx->pc = 0x155580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9A4u, _value); } while (0); }
    // 0x155584: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155588: 0xc066e14  jal         func_19B850
    ctx->pc = 0x155588u;
    SET_GPR_U32(ctx, 31, 0x155590u);
    ctx->pc = 0x15558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155588u;
    // 0x15558c: 0xe420b9a8  swc1        $f0, -0x4658($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x155588u, 0x155590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155590u;
label_155590:
    // 0x155590: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x155590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x155594: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155598: 0xac20b9bc  sw          $zero, -0x4644($at)
    ctx->pc = 0x155598u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x32B9BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9BCu, _value); } while (0);
    // 0x15559c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x15559cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1555a0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1555a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1555a4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1555a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1555a8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1555a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1555ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1555acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1555b0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1555b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1555b4: 0x24a5ba40  addiu       $a1, $a1, -0x45C0
    ctx->pc = 0x1555b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949440));
    // 0x1555b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1555b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1555bc: 0xe422b9b0  swc1        $f2, -0x4650($at)
    ctx->pc = 0x1555bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9B0u, _value); } while (0); }
    // 0x1555c0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1555c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1555c4: 0xe421b9b4  swc1        $f1, -0x464C($at)
    ctx->pc = 0x1555c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9B4u, _value); } while (0); }
    // 0x1555c8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1555c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1555cc: 0xc066e14  jal         func_19B850
    ctx->pc = 0x1555CCu;
    SET_GPR_U32(ctx, 31, 0x1555D4u);
    ctx->pc = 0x1555D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1555CCu;
    // 0x1555d0: 0xe420b9b8  swc1        $f0, -0x4648($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949304), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1555CCu, 0x1555D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1555D4u;
label_1555d4:
    // 0x1555d4: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1555d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1555d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1555d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1555dc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1555dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1555e0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1555e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1555e4: 0xac22ba0c  sw          $v0, -0x45F4($at)
    ctx->pc = 0x1555e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x32BA0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32BA0Cu, _value); } while (0);
    // 0x1555e8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1555e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1555ec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1555ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1555f0: 0xe422ba00  swc1        $f2, -0x4600($at)
    ctx->pc = 0x1555f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32BA00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32BA00u, _value); } while (0); }
    // 0x1555f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1555f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1555f8: 0xe421ba04  swc1        $f1, -0x45FC($at)
    ctx->pc = 0x1555f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32BA04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32BA04u, _value); } while (0); }
    // 0x1555fc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1555fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155600: 0xe420ba08  swc1        $f0, -0x45F8($at)
    ctx->pc = 0x155600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32BA08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32BA08u, _value); } while (0); }
label_155604:
    // 0x155604: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155608: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x155608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x15560c: 0xac20ba18  sw          $zero, -0x45E8($at)
    ctx->pc = 0x15560cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x32BA18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32BA18u, _value); } while (0);
    // 0x155610: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x155610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x155614: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155618: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x155618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15561c: 0xac23ba10  sw          $v1, -0x45F0($at)
    ctx->pc = 0x15561cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x32BA10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32BA10u, _value); } while (0);
    // 0x155620: 0x2484b970  addiu       $a0, $a0, -0x4690
    ctx->pc = 0x155620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949232));
    // 0x155624: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155628: 0xac22ba14  sw          $v0, -0x45EC($at)
    ctx->pc = 0x155628u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x32BA14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32BA14u, _value); } while (0);
    // 0x15562c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15562cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155630: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x155630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155634: 0xac20ba1c  sw          $zero, -0x45E4($at)
    ctx->pc = 0x155634u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x32BA1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32BA1Cu, _value); } while (0);
    // 0x155638: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15563c: 0xac23b9cc  sw          $v1, -0x4634($at)
    ctx->pc = 0x15563cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x32B9CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9CCu, _value); } while (0);
    // 0x155640: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155644: 0xac23b9ec  sw          $v1, -0x4614($at)
    ctx->pc = 0x155644u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x32B9ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9ECu, _value); } while (0);
    // 0x155648: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15564c: 0xac20b9dc  sw          $zero, -0x4624($at)
    ctx->pc = 0x15564cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x32B9DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9DCu, _value); } while (0);
    // 0x155650: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155654: 0xac20b9fc  sw          $zero, -0x4604($at)
    ctx->pc = 0x155654u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x32B9FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9FCu, _value); } while (0);
    // 0x155658: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x155658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x15565c: 0xc4202fa0  lwc1        $f0, 0x2FA0($at)
    ctx->pc = 0x15565cu;
    { uint32_t bits = FAST_READ32(0x282FA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155660: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x155660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x155664: 0xc4212fa4  lwc1        $f1, 0x2FA4($at)
    ctx->pc = 0x155664u;
    { uint32_t bits = FAST_READ32(0x282FA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155668: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x155668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x15566c: 0xc4222fa8  lwc1        $f2, 0x2FA8($at)
    ctx->pc = 0x15566cu;
    { uint32_t bits = FAST_READ32(0x282FA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x155670: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155674: 0xe420b9c0  swc1        $f0, -0x4640($at)
    ctx->pc = 0x155674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9C0u, _value); } while (0); }
    // 0x155678: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15567c: 0xe421b9c4  swc1        $f1, -0x463C($at)
    ctx->pc = 0x15567cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9C4u, _value); } while (0); }
    // 0x155680: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155684: 0xe422b9c8  swc1        $f2, -0x4638($at)
    ctx->pc = 0x155684u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9C8u, _value); } while (0); }
    // 0x155688: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15568c: 0xe420b9d0  swc1        $f0, -0x4630($at)
    ctx->pc = 0x15568cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9D0u, _value); } while (0); }
    // 0x155690: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155694: 0xe421b9d4  swc1        $f1, -0x462C($at)
    ctx->pc = 0x155694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9D4u, _value); } while (0); }
    // 0x155698: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15569c: 0xe422b9d8  swc1        $f2, -0x4628($at)
    ctx->pc = 0x15569cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9D8u, _value); } while (0); }
    // 0x1556a0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1556a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1556a4: 0xe420b9e0  swc1        $f0, -0x4620($at)
    ctx->pc = 0x1556a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9E0u, _value); } while (0); }
    // 0x1556a8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1556a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1556ac: 0xe420b9f0  swc1        $f0, -0x4610($at)
    ctx->pc = 0x1556acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9F0u, _value); } while (0); }
    // 0x1556b0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1556b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1556b4: 0xe421b9e4  swc1        $f1, -0x461C($at)
    ctx->pc = 0x1556b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9E4u, _value); } while (0); }
    // 0x1556b8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1556b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1556bc: 0xe421b9f4  swc1        $f1, -0x460C($at)
    ctx->pc = 0x1556bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9F4u, _value); } while (0); }
    // 0x1556c0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1556c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1556c4: 0xe422b9e8  swc1        $f2, -0x4618($at)
    ctx->pc = 0x1556c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9E8u, _value); } while (0); }
    // 0x1556c8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1556c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1556cc: 0xe422b9f8  swc1        $f2, -0x4608($at)
    ctx->pc = 0x1556ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9F8u, _value); } while (0); }
label_1556d0:
    // 0x1556d0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1556d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1556d4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1556d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1556d8: 0x0  nop
    ctx->pc = 0x1556d8u;
    // NOP
    // 0x1556dc: 0x0  nop
    ctx->pc = 0x1556dcu;
    // NOP
    // 0x1556e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1556e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1556e4: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1556e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1556e8: 0x1840fff9  blez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1556E8u;
    {
        const bool branch_taken_0x1556e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1556e8) {
            ctx->pc = 0x1556D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1556d0;
        }
    }
    ctx->pc = 0x1556F0u;
    // 0x1556f0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1556f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1556f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1556f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1556f8: 0x2484b970  addiu       $a0, $a0, -0x4690
    ctx->pc = 0x1556f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949232));
label_1556fc:
    // 0x1556fc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1556fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x155700: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155700u;
    {
        const bool branch_taken_0x155700 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x155700) {
            ctx->pc = 0x155720u;
            goto label_155720;
        }
    }
    ctx->pc = 0x155708u;
    // 0x155708: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x155708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x15570c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x155710: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155710u;
    {
        const bool branch_taken_0x155710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155710u;
        // 0x155714: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155710) {
            ctx->pc = 0x155720u;
            goto label_155720;
        }
    }
    ctx->pc = 0x155718u;
    // 0x155718: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x155718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x15571c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x15571cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_155720:
    // 0x155720: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x155720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x155724: 0x1860fff5  blez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x155724u;
    {
        const bool branch_taken_0x155724 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x155728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155724u;
        // 0x155728: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155724) {
            ctx->pc = 0x1556FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1556fc;
        }
    }
    ctx->pc = 0x15572Cu;
    // 0x15572c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x15572cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x155730: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x155730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x155734: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x155734u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x155738: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x155738u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x15573c: 0x2484b930  addiu       $a0, $a0, -0x46D0
    ctx->pc = 0x15573cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949168));
    // 0x155740: 0x24a5b9a0  addiu       $a1, $a1, -0x4660
    ctx->pc = 0x155740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949280));
    // 0x155744: 0x24c6b9c0  addiu       $a2, $a2, -0x4640
    ctx->pc = 0x155744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949312));
    // 0x155748: 0xc066f34  jal         func_19BCD0
    ctx->pc = 0x155748u;
    SET_GPR_U32(ctx, 31, 0x155750u);
    ctx->pc = 0x15574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155748u;
    // 0x15574c: 0x24e7b9e0  addiu       $a3, $a3, -0x4620 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCD0u, 0x155748u, 0x155750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155750u;
label_155750:
    // 0x155750: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x155750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x155754: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x155754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x155758: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x155758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x15575c: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x15575cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x155760: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x155760u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x155764: 0x2484b8f0  addiu       $a0, $a0, -0x4710
    ctx->pc = 0x155764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949104));
    // 0x155768: 0x24a5b9b0  addiu       $a1, $a1, -0x4650
    ctx->pc = 0x155768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949296));
    // 0x15576c: 0x24c6b9d0  addiu       $a2, $a2, -0x4630
    ctx->pc = 0x15576cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949328));
    // 0x155770: 0x24e7b9f0  addiu       $a3, $a3, -0x4610
    ctx->pc = 0x155770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949360));
    // 0x155774: 0xc066f64  jal         func_19BD90
    ctx->pc = 0x155774u;
    SET_GPR_U32(ctx, 31, 0x15577Cu);
    ctx->pc = 0x155778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155774u;
    // 0x155778: 0x2508ba00  addiu       $t0, $t0, -0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BD90u, 0x155774u, 0x15577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15577Cu;
}
