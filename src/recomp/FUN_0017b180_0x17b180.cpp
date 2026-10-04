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

// Function: FUN_0017b180
// Address: 0x17b180 - 0x17b2e4
void FUN_0017b180_0x17b180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017b180_0x17b180");
#endif

    switch (ctx->pc) {
        case 0x17b27cu: goto label_17b27c;
        case 0x17b28cu: goto label_17b28c;
        default: break;
    }

    ctx->pc = 0x17b180u;

    // 0x17b180: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x17b184: 0x3c046c84  lui         $a0, 0x6C84
    ctx->pc = 0x17b184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27780 << 16));
    // 0x17b188: 0xac2021b4  sw          $zero, 0x21B4($at)
    ctx->pc = 0x17b188u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2821B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2821B4u, _value); } while (0);
    // 0x17b18c: 0x348501a8  ori         $a1, $a0, 0x1A8
    ctx->pc = 0x17b18cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)424);
    // 0x17b190: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x17b194: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x17b194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x17b198: 0xac2021b8  sw          $zero, 0x21B8($at)
    ctx->pc = 0x17b198u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2821B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2821B8u, _value); } while (0);
    // 0x17b19c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x17b19cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17b1a0: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x17b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x17b1a4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x17b1a8: 0xac2321b0  sw          $v1, 0x21B0($at)
    ctx->pc = 0x17b1a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2821B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2821B0u, _value); } while (0);
    // 0x17b1ac: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x17b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x17b1b0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x17b1b4: 0xdf8788d0  ld          $a3, -0x7730($gp)
    ctx->pc = 0x17b1b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294936784)));
    // 0x17b1b8: 0xac2521bc  sw          $a1, 0x21BC($at)
    ctx->pc = 0x17b1b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x2821BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2821BCu, _value); } while (0);
    // 0x17b1bc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x17b1bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1c0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x17b1c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17b1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b1c8: 0xfc2421c8  sd          $a0, 0x21C8($at)
    ctx->pc = 0x17b1c8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2821C8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2821C8u, _value); } while (0);
    // 0x17b1cc: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x17b1ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x17b1d0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x17b1d4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x17b1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17b1d8: 0xfc242858  sd          $a0, 0x2858($at)
    ctx->pc = 0x17b1d8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x282858u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x282858u, _value); } while (0);
    // 0x17b1dc: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x17b1dcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1e0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x17b1e4: 0x3c04311d  lui         $a0, 0x311D
    ctx->pc = 0x17b1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12573 << 16));
    // 0x17b1e8: 0xfc2521c0  sd          $a1, 0x21C0($at)
    ctx->pc = 0x17b1e8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x2821C0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2821C0u, _value); } while (0);
    // 0x17b1ec: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x17b1ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x17b1f0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x17b1f4: 0xfc252850  sd          $a1, 0x2850($at)
    ctx->pc = 0x17b1f4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x282850u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x282850u, _value); } while (0);
    // 0x17b1f8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x17b1fc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x17b1fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17b200: 0xfc2621d8  sd          $a2, 0x21D8($at)
    ctx->pc = 0x17b200u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 8664), GPR_U64(ctx, 6));
    // 0x17b204: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x17b204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x17b208: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x17b20c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17b20cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x17b210: 0xfc262868  sd          $a2, 0x2868($at)
    ctx->pc = 0x17b210u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 6)); ps2TraceGuestWrite(rdram, 0x282868u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x282868u, _value); } while (0);
    // 0x17b214: 0x24050412  addiu       $a1, $zero, 0x412
    ctx->pc = 0x17b214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x17b218: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x17b21c: 0xdf8688c8  ld          $a2, -0x7738($gp)
    ctx->pc = 0x17b21cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294936776)));
    // 0x17b220: 0xfc2421e0  sd          $a0, 0x21E0($at)
    ctx->pc = 0x17b220u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2821E0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2821E0u, _value); } while (0);
    // 0x17b224: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x17b228: 0x3c04313d  lui         $a0, 0x313D
    ctx->pc = 0x17b228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12605 << 16));
    // 0x17b22c: 0xfc2521e8  sd          $a1, 0x21E8($at)
    ctx->pc = 0x17b22cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x2821E8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2821E8u, _value); } while (0);
    // 0x17b230: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x17b230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x17b234: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x17b238: 0xfc252878  sd          $a1, 0x2878($at)
    ctx->pc = 0x17b238u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x282878u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x282878u, _value); } while (0);
    // 0x17b23c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x17b23cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17b240: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x17b244: 0x3404800c  ori         $a0, $zero, 0x800C
    ctx->pc = 0x17b244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32780);
    // 0x17b248: 0xfc2721d0  sd          $a3, 0x21D0($at)
    ctx->pc = 0x17b248u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 7)); ps2TraceGuestWrite(rdram, 0x2821D0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2821D0u, _value); } while (0);
    // 0x17b24c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17b24cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x17b250: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x17b254: 0xfc242870  sd          $a0, 0x2870($at)
    ctx->pc = 0x17b254u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x282870u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x282870u, _value); } while (0);
    // 0x17b258: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x17b25c: 0xfc262860  sd          $a2, 0x2860($at)
    ctx->pc = 0x17b25cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 6)); ps2TraceGuestWrite(rdram, 0x282860u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x282860u, _value); } while (0);
    // 0x17b260: 0x3c046cfb  lui         $a0, 0x6CFB
    ctx->pc = 0x17b260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27899 << 16));
    // 0x17b264: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x17b264u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
    // 0x17b268: 0x34870010  ori         $a3, $a0, 0x10
    ctx->pc = 0x17b268u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x17b26c: 0x25295270  addiu       $t1, $t1, 0x5270
    ctx->pc = 0x17b26cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21104));
    // 0x17b270: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x17b270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
    // 0x17b274: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x17b274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x17b278: 0x34850004  ori         $a1, $a0, 0x4
    ctx->pc = 0x17b278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_17b27c:
    // 0x17b27c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17b27cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b280: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x17b280u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b284: 0x12e2021  addu        $a0, $t1, $t6
    ctx->pc = 0x17b284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x17b288: 0x24880000  addiu       $t0, $a0, 0x0
    ctx->pc = 0x17b288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_17b28c:
    // 0x17b28c: 0x0  nop
    ctx->pc = 0x17b28cu;
    // NOP
    // 0x17b290: 0x10d5021  addu        $t2, $t0, $t5
    ctx->pc = 0x17b290u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x17b294: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x17b294u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x17b298: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x17b298u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x17b29c: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x17b29cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x17b2a0: 0x29640002  slti        $a0, $t3, 0x2
    ctx->pc = 0x17b2a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17b2a4: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x17b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    // 0x17b2a8: 0x25ad0fd0  addiu       $t5, $t5, 0xFD0
    ctx->pc = 0x17b2a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4048));
    // 0x17b2ac: 0xad47000c  sw          $a3, 0xC($t2)
    ctx->pc = 0x17b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 7));
    // 0x17b2b0: 0xad460010  sw          $a2, 0x10($t2)
    ctx->pc = 0x17b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 6));
    // 0x17b2b4: 0xad400014  sw          $zero, 0x14($t2)
    ctx->pc = 0x17b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 0));
    // 0x17b2b8: 0xad400018  sw          $zero, 0x18($t2)
    ctx->pc = 0x17b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 0));
    // 0x17b2bc: 0xad40001c  sw          $zero, 0x1C($t2)
    ctx->pc = 0x17b2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 0));
    // 0x17b2c0: 0xad450fc0  sw          $a1, 0xFC0($t2)
    ctx->pc = 0x17b2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4032), GPR_U32(ctx, 5));
    // 0x17b2c4: 0xad400fc4  sw          $zero, 0xFC4($t2)
    ctx->pc = 0x17b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4036), GPR_U32(ctx, 0));
    // 0x17b2c8: 0xad400fc8  sw          $zero, 0xFC8($t2)
    ctx->pc = 0x17b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4040), GPR_U32(ctx, 0));
    // 0x17b2cc: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x17B2CCu;
    {
        const bool branch_taken_0x17b2cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2CCu;
        // 0x17b2d0: 0xad400fcc  sw          $zero, 0xFCC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4044), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2cc) {
            ctx->pc = 0x17B28Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b28c;
        }
    }
    ctx->pc = 0x17B2D4u;
    // 0x17b2d4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x17b2d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x17b2d8: 0x29840002  slti        $a0, $t4, 0x2
    ctx->pc = 0x17b2d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17b2dc: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x17B2DCu;
    {
        const bool branch_taken_0x17b2dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2DCu;
        // 0x17b2e0: 0x25ce1fa0  addiu       $t6, $t6, 0x1FA0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2dc) {
            ctx->pc = 0x17B27Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b27c;
        }
    }
    ctx->pc = 0x17B2E4u;
}
