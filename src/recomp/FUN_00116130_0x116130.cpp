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

// Function: FUN_00116130
// Address: 0x116130 - 0x1162a8
void FUN_00116130_0x116130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00116130_0x116130");
#endif

    switch (ctx->pc) {
        case 0x1161b8u: goto label_1161b8;
        default: break;
    }

    ctx->pc = 0x116130u;

    // 0x116130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x116130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x116134: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x116134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x116138: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x116138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11613c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x11613cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x116140: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x116140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x116144: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x116144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x116148: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x116148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x11614c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11614cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116150: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x116150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x116154: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x116154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x116158: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x116158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x11615c: 0xac8301cc  sw          $v1, 0x1CC($a0)
    ctx->pc = 0x11615cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 460), GPR_U32(ctx, 3));
    // 0x116160: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x116160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x116164: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x116164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x116168: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x116168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x11616c: 0x240201ff  addiu       $v0, $zero, 0x1FF
    ctx->pc = 0x11616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x116170: 0xac8301e0  sw          $v1, 0x1E0($a0)
    ctx->pc = 0x116170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 3));
    // 0x116174: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x116174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x116178: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x116178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x11617c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x11617cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x116180: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x116180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x116184: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x116184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x116188: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x116188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x11618c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x11618cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x116190: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x116190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x116194: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x116194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x116198: 0xa480003c  sh          $zero, 0x3C($a0)
    ctx->pc = 0x116198u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x11619c: 0xa482003e  sh          $v0, 0x3E($a0)
    ctx->pc = 0x11619cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x1161a0: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x1161a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1161a4: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x1161a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x1161a8: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x1161a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1161ac: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x1161acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x1161b0: 0xc053b5c  jal         func_14ED70
    ctx->pc = 0x1161B0u;
    SET_GPR_U32(ctx, 31, 0x1161B8u);
    ctx->pc = 0x1161B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161B0u;
    // 0x1161b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ED70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ED70u, 0x1161B0u, 0x1161B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161B8u;
label_1161b8:
    // 0x1161b8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1161b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1161bc: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x1161bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1161c0: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1161c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1161c4: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x1161c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1161c8: 0xae0400c0  sw          $a0, 0xC0($s0)
    ctx->pc = 0x1161c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 4));
    // 0x1161cc: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1161ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1161d0: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x1161d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
    // 0x1161d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1161d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1161d8: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x1161d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x1161dc: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1161dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1161e0: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x1161e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x1161e4: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1161e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1161e8: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x1161e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
    // 0x1161ec: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x1161ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x1161f0: 0xae06015c  sw          $a2, 0x15C($s0)
    ctx->pc = 0x1161f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 6));
    // 0x1161f4: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x1161f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
    // 0x1161f8: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x1161f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x1161fc: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x1161fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
    // 0x116200: 0xae06016c  sw          $a2, 0x16C($s0)
    ctx->pc = 0x116200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 6));
    // 0x116204: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x116204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
    // 0x116208: 0xae060174  sw          $a2, 0x174($s0)
    ctx->pc = 0x116208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 6));
    // 0x11620c: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x11620cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
    // 0x116210: 0xae06017c  sw          $a2, 0x17C($s0)
    ctx->pc = 0x116210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 6));
    // 0x116214: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x116214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116218: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x116218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    // 0x11621c: 0xa600018c  sh          $zero, 0x18C($s0)
    ctx->pc = 0x11621cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 396), (uint16_t)GPR_U32(ctx, 0));
    // 0x116220: 0xa200018e  sb          $zero, 0x18E($s0)
    ctx->pc = 0x116220u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 398), (uint8_t)GPR_U32(ctx, 0));
    // 0x116224: 0xa205018f  sb          $a1, 0x18F($s0)
    ctx->pc = 0x116224u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 399), (uint8_t)GPR_U32(ctx, 5));
    // 0x116228: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x116228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
    // 0x11622c: 0xae0001f0  sw          $zero, 0x1F0($s0)
    ctx->pc = 0x11622cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 0));
    // 0x116230: 0xae0001f4  sw          $zero, 0x1F4($s0)
    ctx->pc = 0x116230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 0));
    // 0x116234: 0xae000194  sw          $zero, 0x194($s0)
    ctx->pc = 0x116234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 0));
    // 0x116238: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x116238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
    // 0x11623c: 0xa600019c  sh          $zero, 0x19C($s0)
    ctx->pc = 0x11623cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 412), (uint16_t)GPR_U32(ctx, 0));
    // 0x116240: 0xa600019e  sh          $zero, 0x19E($s0)
    ctx->pc = 0x116240u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x116244: 0xa20001a0  sb          $zero, 0x1A0($s0)
    ctx->pc = 0x116244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 416), (uint8_t)GPR_U32(ctx, 0));
    // 0x116248: 0xa20001a1  sb          $zero, 0x1A1($s0)
    ctx->pc = 0x116248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 417), (uint8_t)GPR_U32(ctx, 0));
    // 0x11624c: 0xa20001a2  sb          $zero, 0x1A2($s0)
    ctx->pc = 0x11624cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 418), (uint8_t)GPR_U32(ctx, 0));
    // 0x116250: 0xa20001a6  sb          $zero, 0x1A6($s0)
    ctx->pc = 0x116250u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 422), (uint8_t)GPR_U32(ctx, 0));
    // 0x116254: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x116254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x116258: 0xa20001a7  sb          $zero, 0x1A7($s0)
    ctx->pc = 0x116258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 423), (uint8_t)GPR_U32(ctx, 0));
    // 0x11625c: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x11625cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x116260: 0xa60001a8  sh          $zero, 0x1A8($s0)
    ctx->pc = 0x116260u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 424), (uint16_t)GPR_U32(ctx, 0));
    // 0x116264: 0xa60001aa  sh          $zero, 0x1AA($s0)
    ctx->pc = 0x116264u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 426), (uint16_t)GPR_U32(ctx, 0));
    // 0x116268: 0xa60001ac  sh          $zero, 0x1AC($s0)
    ctx->pc = 0x116268u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 428), (uint16_t)GPR_U32(ctx, 0));
    // 0x11626c: 0xa60001ae  sh          $zero, 0x1AE($s0)
    ctx->pc = 0x11626cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 430), (uint16_t)GPR_U32(ctx, 0));
    // 0x116270: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x116270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x116274: 0xae0401bc  sw          $a0, 0x1BC($s0)
    ctx->pc = 0x116274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 4));
    // 0x116278: 0xae0001c0  sw          $zero, 0x1C0($s0)
    ctx->pc = 0x116278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    // 0x11627c: 0xae0301c4  sw          $v1, 0x1C4($s0)
    ctx->pc = 0x11627cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 3));
    // 0x116280: 0xae0001c8  sw          $zero, 0x1C8($s0)
    ctx->pc = 0x116280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 0));
    // 0x116284: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x116284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116288: 0xe60001d8  swc1        $f0, 0x1D8($s0)
    ctx->pc = 0x116288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 472), bits); }
    // 0x11628c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x11628cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116290: 0xe60001dc  swc1        $f0, 0x1DC($s0)
    ctx->pc = 0x116290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 476), bits); }
    // 0x116294: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x116294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116298: 0xe60001d0  swc1        $f0, 0x1D0($s0)
    ctx->pc = 0x116298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 464), bits); }
    // 0x11629c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x11629cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1162a0: 0xe60001d4  swc1        $f0, 0x1D4($s0)
    ctx->pc = 0x1162a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 468), bits); }
    // 0x1162a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1162a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1162a8u;
}
