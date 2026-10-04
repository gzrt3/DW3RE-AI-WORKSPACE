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

// Function: entry_002300e8
// Address: 0x2300e8 - 0x2303c0
void entry_002300e8_0x2300e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002300e8_0x2300e8");
#endif

    switch (ctx->pc) {
        case 0x230134u: goto label_230134;
        case 0x230148u: goto label_230148;
        case 0x230158u: goto label_230158;
        case 0x23016cu: goto label_23016c;
        case 0x23017cu: goto label_23017c;
        case 0x2301a0u: goto label_2301a0;
        case 0x230220u: goto label_230220;
        case 0x230250u: goto label_230250;
        case 0x230274u: goto label_230274;
        case 0x230304u: goto label_230304;
        default: break;
    }

    ctx->pc = 0x2300e8u;

    // 0x2300e8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2300e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2300ec: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2300ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x2300f0: 0x244204a0  addiu       $v0, $v0, 0x4A0
    ctx->pc = 0x2300f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1184));
    // 0x2300f4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2300f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2300f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2300f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2300fc: 0xc4a00150  lwc1        $f0, 0x150($a1)
    ctx->pc = 0x2300fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230100: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x230100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x230104: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x230104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x230108: 0xc4a00154  lwc1        $f0, 0x154($a1)
    ctx->pc = 0x230108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23010c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x23010cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x230110: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x230110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x230114: 0xc4a00158  lwc1        $f0, 0x158($a1)
    ctx->pc = 0x230114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230118: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x230118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x23011c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x23011cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x230120: 0xc4a0015c  lwc1        $f0, 0x15C($a1)
    ctx->pc = 0x230120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230124: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x230124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x230128: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x230128u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x2904A0u));
    // 0x23012c: 0xc066e44  jal         func_19B910
    ctx->pc = 0x23012Cu;
    SET_GPR_U32(ctx, 31, 0x230134u);
    ctx->pc = 0x230130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23012Cu;
    // 0x230130: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x23012Cu, 0x230134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230134u;
label_230134:
    // 0x230134: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x230134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x230138: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x230138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23013c: 0xc42ca644  lwc1        $f12, -0x59BC($at)
    ctx->pc = 0x23013cu;
    { uint32_t bits = FAST_READ32(0x58A644u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x230140: 0xc066ec0  jal         func_19BB00
    ctx->pc = 0x230140u;
    SET_GPR_U32(ctx, 31, 0x230148u);
    ctx->pc = 0x230144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230140u;
    // 0x230144: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x230140u, 0x230148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230148u;
label_230148:
    // 0x230148: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x230148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x23014c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x23014cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x230150: 0xc066d7a  jal         func_19B5E8
    ctx->pc = 0x230150u;
    SET_GPR_U32(ctx, 31, 0x230158u);
    ctx->pc = 0x230154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230150u;
    // 0x230154: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x230150u, 0x230158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230158u;
label_230158:
    // 0x230158: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x230158u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x23015c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x23015cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x230160: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x230160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x230164: 0xc066e02  jal         func_19B808
    ctx->pc = 0x230164u;
    SET_GPR_U32(ctx, 31, 0x23016Cu);
    ctx->pc = 0x230168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230164u;
    // 0x230168: 0x24c6a650  addiu       $a2, $a2, -0x59B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x230164u, 0x23016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23016Cu;
label_23016c:
    // 0x23016c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x23016cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x230170: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x230170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x230174: 0xc066e08  jal         func_19B820
    ctx->pc = 0x230174u;
    SET_GPR_U32(ctx, 31, 0x23017Cu);
    ctx->pc = 0x230178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230174u;
    // 0x230178: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B820u, 0x230174u, 0x23017Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23017Cu;
label_23017c:
    // 0x23017c: 0x8203002a  lb          $v1, 0x2A($s0)
    ctx->pc = 0x23017cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x230180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230184: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230184u;
    {
        const bool branch_taken_0x230184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x230188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230184u;
        // 0x230188: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230184) {
            ctx->pc = 0x230194u;
            goto label_230194;
        }
    }
    ctx->pc = 0x23018Cu;
    // 0x23018c: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x23018Cu;
    {
        const bool branch_taken_0x23018c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23018c) {
            ctx->pc = 0x230228u;
            goto label_230228;
        }
    }
    ctx->pc = 0x230194u;
label_230194:
    // 0x230194: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x230194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x230198: 0xc06d51e  jal         func_1B5478
    ctx->pc = 0x230198u;
    SET_GPR_U32(ctx, 31, 0x2301A0u);
    ctx->pc = 0x23019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230198u;
    // 0x23019c: 0xc7ac0050  lwc1        $f12, 0x50($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5478u, 0x230198u, 0x2301A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2301A0u;
label_2301a0:
    // 0x2301a0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2301a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2301a4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2301a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2301a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2301a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2301ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2301acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2301b0: 0x0  nop
    ctx->pc = 0x2301b0u;
    // NOP
    // 0x2301b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2301b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2301b8: 0xc4620044  lwc1        $f2, 0x44($v1)
    ctx->pc = 0x2301b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2301bc: 0x46020301  sub.s       $f12, $f0, $f2
    ctx->pc = 0x2301bcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2301c0: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x2301c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2301c4: 0x0  nop
    ctx->pc = 0x2301c4u;
    // NOP
    // 0x2301c8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2301C8u;
    {
        const bool branch_taken_0x2301c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2301CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301C8u;
        // 0x2301cc: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301c8) {
            ctx->pc = 0x2301E4u;
            goto label_2301e4;
        }
    }
    ctx->pc = 0x2301D0u;
    // 0x2301d0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2301d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x2301d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2301d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2301d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2301d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2301dc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2301DCu;
    {
        const bool branch_taken_0x2301dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2301E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301DCu;
        // 0x2301e0: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301dc) {
            ctx->pc = 0x230214u;
            goto label_230214;
        }
    }
    ctx->pc = 0x2301E4u;
label_2301e4:
    // 0x2301e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2301e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2301e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2301e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2301ec: 0x0  nop
    ctx->pc = 0x2301ecu;
    // NOP
    // 0x2301f0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2301f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2301f4: 0x0  nop
    ctx->pc = 0x2301f4u;
    // NOP
    // 0x2301f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2301F8u;
    {
        const bool branch_taken_0x2301f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2301f8) {
            ctx->pc = 0x230214u;
            goto label_230214;
        }
    }
    ctx->pc = 0x230200u;
    // 0x230200: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x230200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x230204: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x230204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x230208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23020c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x23020Cu;
    {
        const bool branch_taken_0x23020c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23020Cu;
        // 0x230210: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23020c) {
            ctx->pc = 0x230214u;
            goto label_230214;
        }
    }
    ctx->pc = 0x230214u;
label_230214:
    // 0x230214: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x230214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x230218: 0xc054560  jal         func_151580
    ctx->pc = 0x230218u;
    SET_GPR_U32(ctx, 31, 0x230220u);
    ctx->pc = 0x23021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230218u;
    // 0x23021c: 0x8044021f  lb          $a0, 0x21F($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 543)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151580u, 0x230218u, 0x230220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230220u;
label_230220:
    // 0x230220: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x230220u;
    {
        const bool branch_taken_0x230220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230220u;
        // 0x230224: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230220) {
            ctx->pc = 0x230230u;
            goto label_230230;
        }
    }
    ctx->pc = 0x230228u;
label_230228:
    // 0x230228: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x230228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x23022c: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x23022cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_230230:
    // 0x230230: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x230230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230234: 0x3c03432a  lui         $v1, 0x432A
    ctx->pc = 0x230234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17194 << 16));
    // 0x230238: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x230238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23023c: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23023cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x230240: 0x4483b800  mtc1        $v1, $f23
    ctx->pc = 0x230240u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x230244: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x230244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x230248: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x230248u;
    SET_GPR_U32(ctx, 31, 0x230250u);
    ctx->pc = 0x23024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230248u;
    // 0x23024c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x230248u, 0x230250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230250u;
label_230250:
    // 0x230250: 0x4617b040  add.s       $f1, $f22, $f23
    ctx->pc = 0x230250u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x230254: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x230254u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230258: 0x0  nop
    ctx->pc = 0x230258u;
    // NOP
    // 0x23025c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x23025Cu;
    {
        const bool branch_taken_0x23025c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23025Cu;
        // 0x230260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23025c) {
            ctx->pc = 0x23028Cu;
            goto label_23028c;
        }
    }
    ctx->pc = 0x230264u;
    // 0x230264: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x230264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230268: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x230268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23026c: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x23026Cu;
    SET_GPR_U32(ctx, 31, 0x230274u);
    ctx->pc = 0x230270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23026Cu;
    // 0x230270: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x23026Cu, 0x230274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230274u;
label_230274:
    // 0x230274: 0x4617b040  add.s       $f1, $f22, $f23
    ctx->pc = 0x230274u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x230278: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x230278u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23027c: 0x0  nop
    ctx->pc = 0x23027cu;
    // NOP
    // 0x230280: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x230280u;
    {
        const bool branch_taken_0x230280 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x230284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230280u;
        // 0x230284: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230280) {
            ctx->pc = 0x230294u;
            goto label_230294;
        }
    }
    ctx->pc = 0x230288u;
    // 0x230288: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x230288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23028c:
    // 0x23028c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x23028Cu;
    {
        const bool branch_taken_0x23028c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23028c) {
            ctx->pc = 0x2303BCu;
            goto label_2303bc;
        }
    }
    ctx->pc = 0x230294u;
label_230294:
    // 0x230294: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x230294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x230298: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x230298u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23029c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x23029cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2302a0: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x2302a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2302a4: 0x4a0002ff  vnop
    ctx->pc = 0x2302a4u;
    // NOP operation, no action needed for VU0
    // 0x2302a8: 0x4a0002ff  vnop
    ctx->pc = 0x2302a8u;
    // NOP operation, no action needed for VU0
    // 0x2302ac: 0x4a0002ff  vnop
    ctx->pc = 0x2302acu;
    // NOP operation, no action needed for VU0
    // 0x2302b0: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x2302b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2302b4: 0x4a0002ff  vnop
    ctx->pc = 0x2302b4u;
    // NOP operation, no action needed for VU0
    // 0x2302b8: 0x4a0002ff  vnop
    ctx->pc = 0x2302b8u;
    // NOP operation, no action needed for VU0
    // 0x2302bc: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x2302bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x2302c0: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x2302c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2302c4: 0x4a0002ff  vnop
    ctx->pc = 0x2302c4u;
    // NOP operation, no action needed for VU0
    // 0x2302c8: 0x4a0002ff  vnop
    ctx->pc = 0x2302c8u;
    // NOP operation, no action needed for VU0
    // 0x2302cc: 0x4a0002ff  vnop
    ctx->pc = 0x2302ccu;
    // NOP operation, no action needed for VU0
    // 0x2302d0: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2302d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x2302d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2302d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2302d8: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x2302d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x2302dc: 0x4489a000  mtc1        $t1, $f20
    ctx->pc = 0x2302dcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2302e0: 0x0  nop
    ctx->pc = 0x2302e0u;
    // NOP
    // 0x2302e4: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x2302e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2302e8: 0x0  nop
    ctx->pc = 0x2302e8u;
    // NOP
    // 0x2302ec: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x2302ECu;
    {
        const bool branch_taken_0x2302ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2302F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302ECu;
        // 0x2302f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302ec) {
            ctx->pc = 0x2303BCu;
            goto label_2303bc;
        }
    }
    ctx->pc = 0x2302F4u;
    // 0x2302f4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2302f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2302f8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2302f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2302fc: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x2302FCu;
    SET_GPR_U32(ctx, 31, 0x230304u);
    ctx->pc = 0x230300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2302FCu;
    // 0x230300: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x2302FCu, 0x230304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230304u;
label_230304:
    // 0x230304: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x230304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230308: 0x0  nop
    ctx->pc = 0x230308u;
    // NOP
    // 0x23030c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x23030Cu;
    {
        const bool branch_taken_0x23030c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23030c) {
            ctx->pc = 0x2303B8u;
            goto label_2303b8;
        }
    }
    ctx->pc = 0x230314u;
    // 0x230314: 0x4617b000  add.s       $f0, $f22, $f23
    ctx->pc = 0x230314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x230318: 0x46140081  sub.s       $f2, $f0, $f20
    ctx->pc = 0x230318u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x23031c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23031cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230320: 0x0  nop
    ctx->pc = 0x230320u;
    // NOP
    // 0x230324: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x230324u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230328: 0x0  nop
    ctx->pc = 0x230328u;
    // NOP
    // 0x23032c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x23032Cu;
    {
        const bool branch_taken_0x23032c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23032c) {
            ctx->pc = 0x230340u;
            goto label_230340;
        }
    }
    ctx->pc = 0x230334u;
    // 0x230334: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x230334u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x230338: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x230338u;
    {
        const bool branch_taken_0x230338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230338u;
        // 0x23033c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230338) {
            ctx->pc = 0x230360u;
            goto label_230360;
        }
    }
    ctx->pc = 0x230340u;
label_230340:
    // 0x230340: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x230340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230344: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x230344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230348: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x230348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x23034c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x23034cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x230350: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x230350u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[20];
    // 0x230354: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x230354u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x230358: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x230358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23035c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x23035cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_230360:
    // 0x230360: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x230360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x230364: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x230364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23036c: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x23036cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230370: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230374: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x230374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x230378: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x230378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23037c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x23037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230380: 0xc4610058  lwc1        $f1, 0x58($v1)
    ctx->pc = 0x230380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230384: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230388: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x230388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x23038c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x23038cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x230390: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x230390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230394: 0xc4610150  lwc1        $f1, 0x150($v1)
    ctx->pc = 0x230394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230398: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230398u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23039c: 0xe4600150  swc1        $f0, 0x150($v1)
    ctx->pc = 0x23039cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 336), bits); }
    // 0x2303a0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2303a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2303a4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2303a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2303a8: 0xc4610158  lwc1        $f1, 0x158($v1)
    ctx->pc = 0x2303a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2303ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2303acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2303b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2303B0u;
    {
        const bool branch_taken_0x2303b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2303B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303B0u;
        // 0x2303b4: 0xe4600158  swc1        $f0, 0x158($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 344), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2303b0) {
            ctx->pc = 0x2303BCu;
            goto label_2303bc;
        }
    }
    ctx->pc = 0x2303B8u;
label_2303b8:
    // 0x2303b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2303b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2303bc:
    // 0x2303bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2303bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x2303c0u;
}
