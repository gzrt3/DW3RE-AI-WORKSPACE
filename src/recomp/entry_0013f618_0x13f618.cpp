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

// Function: entry_0013f618
// Address: 0x13f618 - 0x13f880
void entry_0013f618_0x13f618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f618_0x13f618");
#endif

    switch (ctx->pc) {
        case 0x13f654u: goto label_13f654;
        case 0x13f670u: goto label_13f670;
        case 0x13f720u: goto label_13f720;
        case 0x13f72cu: goto label_13f72c;
        case 0x13f848u: goto label_13f848;
        default: break;
    }

    ctx->pc = 0x13f618u;

    // 0x13f618: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x13f618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13f61c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x13f61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f620: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13f620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f624: 0x0  nop
    ctx->pc = 0x13f624u;
    // NOP
    // 0x13f628: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13F628u;
    {
        const bool branch_taken_0x13f628 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F628u;
        // 0x13f62c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f628) {
            ctx->pc = 0x13F634u;
            goto label_13f634;
        }
    }
    ctx->pc = 0x13F630u;
    // 0x13f630: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13f630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13f634:
    // 0x13f634: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F634u;
    {
        const bool branch_taken_0x13f634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f634) {
            ctx->pc = 0x13F660u;
            goto label_13f660;
        }
    }
    ctx->pc = 0x13F63Cu;
    // 0x13f63c: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x13f63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x13f640: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x13f640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x13f644: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F644u;
    {
        const bool branch_taken_0x13f644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f644) {
            ctx->pc = 0x13F660u;
            goto label_13f660;
        }
    }
    ctx->pc = 0x13F64Cu;
    // 0x13f64c: 0xc050d04  jal         func_143410
    ctx->pc = 0x13F64Cu;
    SET_GPR_U32(ctx, 31, 0x13F654u);
    ctx->pc = 0x13F650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F64Cu;
    // 0x13f650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143410u, 0x13F64Cu, 0x13F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F654u;
label_13f654:
    // 0x13f654: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F654u;
    {
        const bool branch_taken_0x13f654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F654u;
        // 0x13f658: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f654) {
            ctx->pc = 0x13F660u;
            goto label_13f660;
        }
    }
    ctx->pc = 0x13F65Cu;
    // 0x13f65c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x13f65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_13f660:
    // 0x13f660: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F660u;
    {
        const bool branch_taken_0x13f660 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f660) {
            ctx->pc = 0x13F670u;
            goto label_13f670;
        }
    }
    ctx->pc = 0x13F668u;
    // 0x13f668: 0xc050620  jal         func_141880
    ctx->pc = 0x13F668u;
    SET_GPR_U32(ctx, 31, 0x13F670u);
    ctx->pc = 0x13F66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F668u;
    // 0x13f66c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141880u, 0x13F668u, 0x13F670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F670u;
label_13f670:
    // 0x13f670: 0x8603003c  lh          $v1, 0x3C($s0)
    ctx->pc = 0x13f670u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x13f674: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x13f674u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x13f678: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F678u;
    {
        const bool branch_taken_0x13f678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F678u;
        // 0x13f67c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f678) {
            ctx->pc = 0x13F684u;
            goto label_13f684;
        }
    }
    ctx->pc = 0x13F680u;
    // 0x13f680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13f680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13f684:
    // 0x13f684: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x13F684u;
    {
        const bool branch_taken_0x13f684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f684) {
            ctx->pc = 0x13F880u;
            return;
        }
    }
    ctx->pc = 0x13F68Cu;
    // 0x13f68c: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x13f68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x13f690: 0x90a3000d  lbu         $v1, 0xD($a1)
    ctx->pc = 0x13f690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13)));
    // 0x13f694: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F694u;
    {
        const bool branch_taken_0x13f694 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x13F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F694u;
        // 0x13f698: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f694) {
            ctx->pc = 0x13F6A8u;
            goto label_13f6a8;
        }
    }
    ctx->pc = 0x13F69Cu;
    // 0x13f69c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f69cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f6a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13F6A0u;
    {
        const bool branch_taken_0x13f6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6A0u;
        // 0x13f6a4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6a0) {
            ctx->pc = 0x13F6C0u;
            goto label_13f6c0;
        }
    }
    ctx->pc = 0x13F6A8u;
label_13f6a8:
    // 0x13f6a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x13f6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13f6ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x13f6acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13f6b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13f6b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f6b4: 0x0  nop
    ctx->pc = 0x13f6b4u;
    // NOP
    // 0x13f6b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x13f6b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13f6bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x13f6bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_13f6c0:
    // 0x13f6c0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x13f6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f6c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13f6c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f6c8: 0x0  nop
    ctx->pc = 0x13f6c8u;
    // NOP
    // 0x13f6cc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x13F6CCu;
    {
        const bool branch_taken_0x13f6cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f6cc) {
            ctx->pc = 0x13F6ECu;
            goto label_13f6ec;
        }
    }
    ctx->pc = 0x13F6D4u;
    // 0x13f6d4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x13f6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13f6d8: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x13f6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x13f6dc: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x13F6DCu;
    {
        const bool branch_taken_0x13f6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6DCu;
        // 0x13f6e0: 0x30834000  andi        $v1, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6dc) {
            ctx->pc = 0x13F87Cu;
            goto label_13f87c;
        }
    }
    ctx->pc = 0x13F6E4u;
    // 0x13f6e4: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x13F6E4u;
    {
        const bool branch_taken_0x13f6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f6e4) {
            ctx->pc = 0x13F87Cu;
            goto label_13f87c;
        }
    }
    ctx->pc = 0x13F6ECu;
label_13f6ec:
    // 0x13f6ec: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x13f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13f6f0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x13f6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x13f6f4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x13F6F4u;
    {
        const bool branch_taken_0x13f6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6F4u;
        // 0x13f6f8: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6f4) {
            ctx->pc = 0x13F778u;
            goto label_13f778;
        }
    }
    ctx->pc = 0x13F6FCu;
    // 0x13f6fc: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x13f6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x13f700: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x13F700u;
    {
        const bool branch_taken_0x13f700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f700) {
            ctx->pc = 0x13F774u;
            goto label_13f774;
        }
    }
    ctx->pc = 0x13F708u;
    // 0x13f708: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x13f708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x13f70c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x13F70Cu;
    {
        const bool branch_taken_0x13f70c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F70Cu;
        // 0x13f710: 0x24650150  addiu       $a1, $v1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f70c) {
            ctx->pc = 0x13F774u;
            goto label_13f774;
        }
    }
    ctx->pc = 0x13F714u;
    // 0x13f714: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13f714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13f718: 0xc066e08  jal         func_19B820
    ctx->pc = 0x13F718u;
    SET_GPR_U32(ctx, 31, 0x13F720u);
    ctx->pc = 0x13F71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F718u;
    // 0x13f71c: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B820u, 0x13F718u, 0x13F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F720u;
label_13f720:
    // 0x13f720: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x13f720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13f724: 0xc06d51e  jal         func_1B5478
    ctx->pc = 0x13F724u;
    SET_GPR_U32(ctx, 31, 0x13F72Cu);
    ctx->pc = 0x13F728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F724u;
    // 0x13f728: 0xc7ac0020  lwc1        $f12, 0x20($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5478u, 0x13F724u, 0x13F72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F72Cu;
label_13f72c:
    // 0x13f72c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x13f72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x13f730: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x13f730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x13f734: 0x90630009  lbu         $v1, 0x9($v1)
    ctx->pc = 0x13f734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x13f738: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F738u;
    {
        const bool branch_taken_0x13f738 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x13F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F738u;
        // 0x13f73c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f738) {
            ctx->pc = 0x13F74Cu;
            goto label_13f74c;
        }
    }
    ctx->pc = 0x13F740u;
    // 0x13f740: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f744: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13F744u;
    {
        const bool branch_taken_0x13f744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F744u;
        // 0x13f748: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f744) {
            ctx->pc = 0x13F764u;
            goto label_13f764;
        }
    }
    ctx->pc = 0x13F74Cu;
label_13f74c:
    // 0x13f74c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x13f74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13f750: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x13f750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13f754: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13f754u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f758: 0x0  nop
    ctx->pc = 0x13f758u;
    // NOP
    // 0x13f75c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x13f75cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13f760: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x13f760u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_13f764:
    // 0x13f764: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x13f764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f768: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13f768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13f76c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x13F76Cu;
    {
        const bool branch_taken_0x13f76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F76Cu;
        // 0x13f770: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f76c) {
            ctx->pc = 0x13F880u;
            return;
        }
    }
    ctx->pc = 0x13F774u;
label_13f774:
    // 0x13f774: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x13f774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_13f778:
    // 0x13f778: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x13f778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x13f77c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13f77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13f780: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F780u;
    {
        const bool branch_taken_0x13f780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f780) {
            ctx->pc = 0x13F794u;
            goto label_13f794;
        }
    }
    ctx->pc = 0x13F788u;
    // 0x13f788: 0xc60001bc  lwc1        $f0, 0x1BC($s0)
    ctx->pc = 0x13f788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f78c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13F78Cu;
    {
        const bool branch_taken_0x13f78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F78Cu;
        // 0x13f790: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f78c) {
            ctx->pc = 0x13F7C8u;
            goto label_13f7c8;
        }
    }
    ctx->pc = 0x13F794u;
label_13f794:
    // 0x13f794: 0xc60101c4  lwc1        $f1, 0x1C4($s0)
    ctx->pc = 0x13f794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13f798: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x13f798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x13f79c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f79cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f7a0: 0x0  nop
    ctx->pc = 0x13f7a0u;
    // NOP
    // 0x13f7a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13f7a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f7a8: 0x0  nop
    ctx->pc = 0x13f7a8u;
    // NOP
    // 0x13f7ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13F7ACu;
    {
        const bool branch_taken_0x13f7ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f7ac) {
            ctx->pc = 0x13F7C0u;
            goto label_13f7c0;
        }
    }
    ctx->pc = 0x13F7B4u;
    // 0x13f7b4: 0xc60001c8  lwc1        $f0, 0x1C8($s0)
    ctx->pc = 0x13f7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f7b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13F7B8u;
    {
        const bool branch_taken_0x13f7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F7B8u;
        // 0x13f7bc: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f7b8) {
            ctx->pc = 0x13F7C8u;
            goto label_13f7c8;
        }
    }
    ctx->pc = 0x13F7C0u;
label_13f7c0:
    // 0x13f7c0: 0xc60001bc  lwc1        $f0, 0x1BC($s0)
    ctx->pc = 0x13f7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f7c4: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x13f7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_13f7c8:
    // 0x13f7c8: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x13f7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13f7cc: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x13f7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x13f7d0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f7d4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x13f7d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13f7d8: 0x0  nop
    ctx->pc = 0x13f7d8u;
    // NOP
    // 0x13f7dc: 0x46021832  c.eq.s      $f3, $f2
    ctx->pc = 0x13f7dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f7e0: 0x0  nop
    ctx->pc = 0x13f7e0u;
    // NOP
    // 0x13f7e4: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x13F7E4u;
    {
        const bool branch_taken_0x13f7e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f7e4) {
            ctx->pc = 0x13F874u;
            goto label_13f874;
        }
    }
    ctx->pc = 0x13F7ECu;
    // 0x13f7ec: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x13f7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13f7f0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x13f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x13f7f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13f7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x13f7f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13f7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f7fc: 0x0  nop
    ctx->pc = 0x13f7fcu;
    // NOP
    // 0x13f800: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x13f800u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x13f804: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x13f804u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f808: 0x0  nop
    ctx->pc = 0x13f808u;
    // NOP
    // 0x13f80c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x13F80Cu;
    {
        const bool branch_taken_0x13f80c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F80Cu;
        // 0x13f810: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f80c) {
            ctx->pc = 0x13F81Cu;
            goto label_13f81c;
        }
    }
    ctx->pc = 0x13F814u;
    // 0x13f814: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13F814u;
    {
        const bool branch_taken_0x13f814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F814u;
        // 0x13f818: 0x46036301  sub.s       $f12, $f12, $f3 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f814) {
            ctx->pc = 0x13F840u;
            goto label_13f840;
        }
    }
    ctx->pc = 0x13F81Cu;
label_13f81c:
    // 0x13f81c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13f81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x13f820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13f820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f824: 0x0  nop
    ctx->pc = 0x13f824u;
    // NOP
    // 0x13f828: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x13f828u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f82c: 0x0  nop
    ctx->pc = 0x13f82cu;
    // NOP
    // 0x13f830: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13F830u;
    {
        const bool branch_taken_0x13f830 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f830) {
            ctx->pc = 0x13F840u;
            goto label_13f840;
        }
    }
    ctx->pc = 0x13F838u;
    // 0x13f838: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x13F838u;
    {
        const bool branch_taken_0x13f838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F838u;
        // 0x13f83c: 0x460c1b00  add.s       $f12, $f3, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f838) {
            ctx->pc = 0x13F840u;
            goto label_13f840;
        }
    }
    ctx->pc = 0x13F840u;
label_13f840:
    // 0x13f840: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x13F840u;
    SET_GPR_U32(ctx, 31, 0x13F848u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x13F840u, 0x13F848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F848u;
label_13f848:
    // 0x13f848: 0x3c043db2  lui         $a0, 0x3DB2
    ctx->pc = 0x13f848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15794 << 16));
    // 0x13f84c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13f84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x13f850: 0x3484b8c3  ori         $a0, $a0, 0xB8C3
    ctx->pc = 0x13f850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)47299);
    // 0x13f854: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x13f854u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13f858: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13f858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f85c: 0x0  nop
    ctx->pc = 0x13f85cu;
    // NOP
    // 0x13f860: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x13f860u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x13f864: 0x0  nop
    ctx->pc = 0x13f864u;
    // NOP
    // 0x13f868: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13f868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13f86c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13F86Cu;
    {
        const bool branch_taken_0x13f86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F86Cu;
        // 0x13f870: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f86c) {
            ctx->pc = 0x13F880u;
            return;
        }
    }
    ctx->pc = 0x13F874u;
label_13f874:
    // 0x13f874: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F874u;
    {
        const bool branch_taken_0x13f874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F874u;
        // 0x13f878: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f874) {
            ctx->pc = 0x13F880u;
            return;
        }
    }
    ctx->pc = 0x13F87Cu;
label_13f87c:
    // 0x13f87c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x13f87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x13f880u;
}
