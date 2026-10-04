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

// Function: FUN_00136120
// Address: 0x136120 - 0x1362d4
void FUN_00136120_0x136120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00136120_0x136120");
#endif

    switch (ctx->pc) {
        case 0x136288u: goto label_136288;
        case 0x1362a0u: goto label_1362a0;
        case 0x1362b0u: goto label_1362b0;
        case 0x1362b8u: goto label_1362b8;
        case 0x1362d0u: goto label_1362d0;
        default: break;
    }

    ctx->pc = 0x136120u;

    // 0x136120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x136120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x136124: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13612c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13612cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x136130: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x136130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136134: 0x90249fc0  lbu         $a0, -0x6040($at)
    ctx->pc = 0x136134u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x309FC0u));
    // 0x136138: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x136138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13613c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13613cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136140: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x136140u;
    {
        const bool branch_taken_0x136140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x136144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136140u;
        // 0x136144: 0xa0239fc0  sb          $v1, -0x6040($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294942656), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136140) {
            ctx->pc = 0x1361E4u;
            goto label_1361e4;
        }
    }
    ctx->pc = 0x136148u;
    // 0x136148: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13614c: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x13614cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x136150: 0x90259fc1  lbu         $a1, -0x603F($at)
    ctx->pc = 0x136150u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x309FC1u));
    // 0x136154: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x136154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136158: 0x24639f20  addiu       $v1, $v1, -0x60E0
    ctx->pc = 0x136158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942496));
    // 0x13615c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x13615cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x136160: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136164: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x136164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x136168: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x136168u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13616c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13616cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x136170: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x136170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x136174: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x136174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136178: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x136178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x13617c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x13617cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136180: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x136180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x136184: 0x82030014  lb          $v1, 0x14($s0)
    ctx->pc = 0x136184u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x136188: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x136188u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x13618c: 0x82030018  lb          $v1, 0x18($s0)
    ctx->pc = 0x13618cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x136190: 0xa083000d  sb          $v1, 0xD($a0)
    ctx->pc = 0x136190u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x136194: 0x8203001c  lb          $v1, 0x1C($s0)
    ctx->pc = 0x136194u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x136198: 0xa083000e  sb          $v1, 0xE($a0)
    ctx->pc = 0x136198u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x13619c: 0x82030028  lb          $v1, 0x28($s0)
    ctx->pc = 0x13619cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1361a0: 0xa0830011  sb          $v1, 0x11($a0)
    ctx->pc = 0x1361a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x1361a4: 0x82030020  lb          $v1, 0x20($s0)
    ctx->pc = 0x1361a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1361a8: 0xa083000f  sb          $v1, 0xF($a0)
    ctx->pc = 0x1361a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x1361ac: 0x82030024  lb          $v1, 0x24($s0)
    ctx->pc = 0x1361acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1361b0: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x1361b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x1361b4: 0x8203002c  lb          $v1, 0x2C($s0)
    ctx->pc = 0x1361b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1361b8: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x1361b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x1361bc: 0x90239fc1  lbu         $v1, -0x603F($at)
    ctx->pc = 0x1361bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294942657)));
    // 0x1361c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1361c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1361c4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1361c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1361c8: 0xa0239fc1  sb          $v1, -0x603F($at)
    ctx->pc = 0x1361c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x309FC1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x309FC1u, _value); } while (0);
    // 0x1361cc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1361ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1361d0: 0x90239fc1  lbu         $v1, -0x603F($at)
    ctx->pc = 0x1361d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x309FC1u));
    // 0x1361d4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1361d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1361d8: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1361d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1361dc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1361DCu;
    {
        const bool branch_taken_0x1361dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1361E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1361DCu;
        // 0x1361e0: 0xa0239fc1  sb          $v1, -0x603F($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294942657), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1361dc) {
            ctx->pc = 0x1362D0u;
            goto label_1362d0;
        }
    }
    ctx->pc = 0x1361E4u;
label_1361e4:
    // 0x1361e4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1361e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1361e8: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1361e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1361ec: 0xac20a3e0  sw          $zero, -0x5C20($at)
    ctx->pc = 0x1361ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A3E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A3E0u, _value); } while (0);
    // 0x1361f0: 0x82030014  lb          $v1, 0x14($s0)
    ctx->pc = 0x1361f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1361f4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1361f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1361f8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1361f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1361fc: 0xa023a400  sb          $v1, -0x5C00($at)
    ctx->pc = 0x1361fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A400u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A400u, _value); } while (0);
    // 0x136200: 0x82030018  lb          $v1, 0x18($s0)
    ctx->pc = 0x136200u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x136204: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136208: 0xa023a403  sb          $v1, -0x5BFD($at)
    ctx->pc = 0x136208u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A403u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A403u, _value); } while (0);
    // 0x13620c: 0x8203001c  lb          $v1, 0x1C($s0)
    ctx->pc = 0x13620cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x136210: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136214: 0xa023a404  sb          $v1, -0x5BFC($at)
    ctx->pc = 0x136214u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A404u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A404u, _value); } while (0);
    // 0x136218: 0x82030020  lb          $v1, 0x20($s0)
    ctx->pc = 0x136218u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13621c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13621cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136220: 0xa023a405  sb          $v1, -0x5BFB($at)
    ctx->pc = 0x136220u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A405u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A405u, _value); } while (0);
    // 0x136224: 0x82030024  lb          $v1, 0x24($s0)
    ctx->pc = 0x136224u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x136228: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13622c: 0xa023a406  sb          $v1, -0x5BFA($at)
    ctx->pc = 0x13622cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A406u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A406u, _value); } while (0);
    // 0x136230: 0x82030028  lb          $v1, 0x28($s0)
    ctx->pc = 0x136230u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x136234: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136238: 0xa023a407  sb          $v1, -0x5BF9($at)
    ctx->pc = 0x136238u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A407u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A407u, _value); } while (0);
    // 0x13623c: 0x8203002c  lb          $v1, 0x2C($s0)
    ctx->pc = 0x13623cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x136240: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136244: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x136244u;
    {
        const bool branch_taken_0x136244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136244u;
        // 0x136248: 0xa023a408  sb          $v1, -0x5BF8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294943752), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136244) {
            ctx->pc = 0x136258u;
            goto label_136258;
        }
    }
    ctx->pc = 0x13624Cu;
    // 0x13624c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13624cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136250: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x136250u;
    {
        const bool branch_taken_0x136250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136250u;
        // 0x136254: 0xa020a401  sb          $zero, -0x5BFF($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294943745), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136250) {
            ctx->pc = 0x136278u;
            goto label_136278;
        }
    }
    ctx->pc = 0x136258u;
label_136258:
    // 0x136258: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x136258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x13625c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x13625cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x136260: 0x8c224970  lw          $v0, 0x4970($at)
    ctx->pc = 0x136260u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x334970u));
    // 0x136264: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x136264u;
    {
        const bool branch_taken_0x136264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x136268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136264u;
        // 0x136268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136264) {
            ctx->pc = 0x136270u;
            goto label_136270;
        }
    }
    ctx->pc = 0x13626Cu;
    // 0x13626c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13626cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136270:
    // 0x136270: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136274: 0xa022a401  sb          $v0, -0x5BFF($at)
    ctx->pc = 0x136274u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x30A401u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A401u, _value); } while (0);
label_136278:
    // 0x136278: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x136278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x13627c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13627cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136280: 0xc066e26  jal         func_19B898
    ctx->pc = 0x136280u;
    SET_GPR_U32(ctx, 31, 0x136288u);
    ctx->pc = 0x136284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136280u;
    // 0x136284: 0x2484a3f0  addiu       $a0, $a0, -0x5C10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x136280u, 0x136288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136288u;
label_136288:
    // 0x136288: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x136288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x13628c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x13628cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x136290: 0x2484a3f0  addiu       $a0, $a0, -0x5C10
    ctx->pc = 0x136290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943728));
    // 0x136294: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x136294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x136298: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x136298u;
    SET_GPR_U32(ctx, 31, 0x1362A0u);
    ctx->pc = 0x13629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136298u;
    // 0x13629c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x136298u, 0x1362A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1362A0u;
label_1362a0:
    // 0x1362a0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1362a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1362a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1362a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1362a8: 0xc04d920  jal         func_136480
    ctx->pc = 0x1362A8u;
    SET_GPR_U32(ctx, 31, 0x1362B0u);
    ctx->pc = 0x1362ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1362A8u;
    // 0x1362ac: 0xe420a3f4  swc1        $f0, -0x5C0C($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943732), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x136480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136480u, 0x1362A8u, 0x1362B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1362B0u;
label_1362b0:
    // 0x1362b0: 0xc05a67c  jal         func_1699F0
    ctx->pc = 0x1362B0u;
    SET_GPR_U32(ctx, 31, 0x1362B8u);
    ctx->pc = 0x1362B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1362B0u;
    // 0x1362b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1699F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1699F0u, 0x1362B0u, 0x1362B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1362B8u;
label_1362b8:
    // 0x1362b8: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1362b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1362bc: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x1362bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1362c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1362C0u;
    {
        const bool branch_taken_0x1362c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1362C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362C0u;
        // 0x1362c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362c0) {
            ctx->pc = 0x1362D0u;
            goto label_1362d0;
        }
    }
    ctx->pc = 0x1362C8u;
    // 0x1362c8: 0xc05a67c  jal         func_1699F0
    ctx->pc = 0x1362C8u;
    SET_GPR_U32(ctx, 31, 0x1362D0u);
    ctx->pc = 0x1699F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1699F0u, 0x1362C8u, 0x1362D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1362D0u;
label_1362d0:
    // 0x1362d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1362d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1362d4u;
}
