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

// Function: entry_0012f68c
// Address: 0x12f68c - 0x12fa08
void entry_0012f68c_0x12f68c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f68c_0x12f68c");
#endif

    switch (ctx->pc) {
        case 0x12f694u: goto label_12f694;
        case 0x12f69cu: goto label_12f69c;
        case 0x12f740u: goto label_12f740;
        case 0x12f750u: goto label_12f750;
        default: break;
    }

    ctx->pc = 0x12f68cu;

    // 0x12f68c: 0xc071740  jal         func_1C5D00
    ctx->pc = 0x12F68Cu;
    SET_GPR_U32(ctx, 31, 0x12F694u);
    ctx->pc = 0x1C5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D00u, 0x12F68Cu, 0x12F694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F694u;
label_12f694:
    // 0x12f694: 0xc071728  jal         func_1C5CA0
    ctx->pc = 0x12F694u;
    SET_GPR_U32(ctx, 31, 0x12F69Cu);
    ctx->pc = 0x12F698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F694u;
    // 0x12f698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CA0u, 0x12F694u, 0x12F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F69Cu;
label_12f69c:
    // 0x12f69c: 0x960202f6  lhu         $v0, 0x2F6($s0)
    ctx->pc = 0x12f69cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x12f6a0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x12f6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x12f6a4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x12F6A4u;
    {
        const bool branch_taken_0x12f6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6A4u;
        // 0x12f6a8: 0x260402d0  addiu       $a0, $s0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f6a4) {
            ctx->pc = 0x12F734u;
            goto label_12f734;
        }
    }
    ctx->pc = 0x12F6ACu;
    // 0x12f6ac: 0xc60202a8  lwc1        $f2, 0x2A8($s0)
    ctx->pc = 0x12f6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12f6b0: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x12f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x12f6b4: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x12f6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x12f6b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12f6b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f6bc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x12f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x12f6c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12f6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12f6c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f6c8: 0x0  nop
    ctx->pc = 0x12f6c8u;
    // NOP
    // 0x12f6cc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x12f6ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x12f6d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12f6d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f6d4: 0x0  nop
    ctx->pc = 0x12f6d4u;
    // NOP
    // 0x12f6d8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x12F6D8u;
    {
        const bool branch_taken_0x12f6d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6D8u;
        // 0x12f6dc: 0xe60102a8  swc1        $f1, 0x2A8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f6d8) {
            ctx->pc = 0x12F6FCu;
            goto label_12f6fc;
        }
    }
    ctx->pc = 0x12F6E0u;
    // 0x12f6e0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x12f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x12f6e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12f6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12f6e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f6ec: 0x0  nop
    ctx->pc = 0x12f6ecu;
    // NOP
    // 0x12f6f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12f6f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12f6f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12F6F4u;
    {
        const bool branch_taken_0x12f6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6F4u;
        // 0x12f6f8: 0xe60002a8  swc1        $f0, 0x2A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f6f4) {
            ctx->pc = 0x12F730u;
            goto label_12f730;
        }
    }
    ctx->pc = 0x12F6FCu;
label_12f6fc:
    // 0x12f6fc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x12f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x12f700: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12f700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12f704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f708: 0x0  nop
    ctx->pc = 0x12f708u;
    // NOP
    // 0x12f70c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12f70cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f710: 0x0  nop
    ctx->pc = 0x12f710u;
    // NOP
    // 0x12f714: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x12F714u;
    {
        const bool branch_taken_0x12f714 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F714u;
        // 0x12f718: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f714) {
            ctx->pc = 0x12F730u;
            goto label_12f730;
        }
    }
    ctx->pc = 0x12F71Cu;
    // 0x12f71c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12f71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12f720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f724: 0x0  nop
    ctx->pc = 0x12f724u;
    // NOP
    // 0x12f728: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12f728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12f72c: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x12f72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
label_12f730:
    // 0x12f730: 0x260402d0  addiu       $a0, $s0, 0x2D0
    ctx->pc = 0x12f730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
label_12f734:
    // 0x12f734: 0x26060330  addiu       $a2, $s0, 0x330
    ctx->pc = 0x12f734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x12f738: 0xc066e02  jal         func_19B808
    ctx->pc = 0x12F738u;
    SET_GPR_U32(ctx, 31, 0x12F740u);
    ctx->pc = 0x12F73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F738u;
    // 0x12f73c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x12F738u, 0x12F740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F740u;
label_12f740:
    // 0x12f740: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x12f740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x12f744: 0x26060340  addiu       $a2, $s0, 0x340
    ctx->pc = 0x12f744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    // 0x12f748: 0xc066e02  jal         func_19B808
    ctx->pc = 0x12F748u;
    SET_GPR_U32(ctx, 31, 0x12F750u);
    ctx->pc = 0x12F74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F748u;
    // 0x12f74c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x12F748u, 0x12F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F750u;
label_12f750:
    // 0x12f750: 0x960402f6  lhu         $a0, 0x2F6($s0)
    ctx->pc = 0x12f750u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x12f754: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x12f754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x12f758: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x12F758u;
    {
        const bool branch_taken_0x12f758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F758u;
        // 0x12f75c: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f758) {
            ctx->pc = 0x12F844u;
            goto label_12f844;
        }
    }
    ctx->pc = 0x12F760u;
    // 0x12f760: 0x960702f8  lhu         $a3, 0x2F8($s0)
    ctx->pc = 0x12f760u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x12f764: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x12f764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x12f768: 0x346a6667  ori         $t2, $v1, 0x6667
    ctx->pc = 0x12f768u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x12f76c: 0x960502e6  lhu         $a1, 0x2E6($s0)
    ctx->pc = 0x12f76cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12f770: 0x1470018  mult        $zero, $t2, $a3
    ctx->pc = 0x12f770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12f774: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x12f774u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x12f778: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x12f778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x12f77c: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x12f77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x12f780: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x12f780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x12f784: 0x74fc2  srl         $t1, $a3, 31
    ctx->pc = 0x12f784u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x12f788: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x12f788u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x12f78c: 0x4010  mfhi        $t0
    ctx->pc = 0x12f78cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x12f790: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x12f790u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x12f794: 0x1460018  mult        $zero, $t2, $a2
    ctx->pc = 0x12f794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12f798: 0x83043  sra         $a2, $t0, 1
    ctx->pc = 0x12f798u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 1));
    // 0x12f79c: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x12f79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x12f7a0: 0x30c8ffff  andi        $t0, $a2, 0xFFFF
    ctx->pc = 0x12f7a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x12f7a4: 0x3010  mfhi        $a2
    ctx->pc = 0x12f7a4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x12f7a8: 0x1430018  mult        $zero, $t2, $v1
    ctx->pc = 0x12f7a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12f7ac: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x12f7acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
    // 0x12f7b0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x12f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x12f7b4: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x12f7b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12f7b8: 0x1810  mfhi        $v1
    ctx->pc = 0x12f7b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x12f7bc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x12f7bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x12f7c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12f7c4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x12f7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12f7c8: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x12f7c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12f7cc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x12F7CCu;
    {
        const bool branch_taken_0x12f7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F7CCu;
        // 0x12f7d0: 0x3104ffff  andi        $a0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f7cc) {
            ctx->pc = 0x12F800u;
            goto label_12f800;
        }
    }
    ctx->pc = 0x12F7D4u;
    // 0x12f7d4: 0x920402e3  lbu         $a0, 0x2E3($s0)
    ctx->pc = 0x12f7d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x12f7d8: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x12f7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x12f7dc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x12f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12f7e0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x12f7e0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12f7e4: 0x0  nop
    ctx->pc = 0x12f7e4u;
    // NOP
    // 0x12f7e8: 0x0  nop
    ctx->pc = 0x12f7e8u;
    // NOP
    // 0x12f7ec: 0x1812  mflo        $v1
    ctx->pc = 0x12f7ecu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x12f7f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12f7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12f7f4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x12f7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12f7f8: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x12F7F8u;
    {
        const bool branch_taken_0x12f7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F7F8u;
        // 0x12f7fc: 0xa20302e3  sb          $v1, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f7f8) {
            ctx->pc = 0x12F9FCu;
            goto label_12f9fc;
        }
    }
    ctx->pc = 0x12F800u;
label_12f800:
    // 0x12f800: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x12f800u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x12f804: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F804u;
    {
        const bool branch_taken_0x12f804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F804u;
        // 0x12f808: 0x851823  subu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f804) {
            ctx->pc = 0x12F818u;
            goto label_12f818;
        }
    }
    ctx->pc = 0x12F80Cu;
    // 0x12f80c: 0x920302fa  lbu         $v1, 0x2FA($s0)
    ctx->pc = 0x12f80cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 762)));
    // 0x12f810: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x12F810u;
    {
        const bool branch_taken_0x12f810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F810u;
        // 0x12f814: 0xa20302e3  sb          $v1, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f810) {
            ctx->pc = 0x12F9FCu;
            goto label_12f9fc;
        }
    }
    ctx->pc = 0x12F818u;
label_12f818:
    // 0x12f818: 0x960402fa  lhu         $a0, 0x2FA($s0)
    ctx->pc = 0x12f818u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 762)));
    // 0x12f81c: 0x920502e3  lbu         $a1, 0x2E3($s0)
    ctx->pc = 0x12f81cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x12f820: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x12f820u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12f824: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x12f824u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12f828: 0x0  nop
    ctx->pc = 0x12f828u;
    // NOP
    // 0x12f82c: 0x0  nop
    ctx->pc = 0x12f82cu;
    // NOP
    // 0x12f830: 0x1812  mflo        $v1
    ctx->pc = 0x12f830u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x12f834: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12f834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12f838: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x12f838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12f83c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x12F83Cu;
    {
        const bool branch_taken_0x12f83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F83Cu;
        // 0x12f840: 0xa20302e3  sb          $v1, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f83c) {
            ctx->pc = 0x12F9FCu;
            goto label_12f9fc;
        }
    }
    ctx->pc = 0x12F844u;
label_12f844:
    // 0x12f844: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x12F844u;
    {
        const bool branch_taken_0x12f844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f844) {
            ctx->pc = 0x12F930u;
            goto label_12f930;
        }
    }
    ctx->pc = 0x12F84Cu;
    // 0x12f84c: 0x960602f8  lhu         $a2, 0x2F8($s0)
    ctx->pc = 0x12f84cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x12f850: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x12f850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x12f854: 0x346a6667  ori         $t2, $v1, 0x6667
    ctx->pc = 0x12f854u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x12f858: 0x960502e6  lhu         $a1, 0x2E6($s0)
    ctx->pc = 0x12f858u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12f85c: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x12f85cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x12f860: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x12f860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12f864: 0x1440018  mult        $zero, $t2, $a0
    ctx->pc = 0x12f864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12f868: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x12f868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12f86c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x12f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x12f870: 0x44fc2  srl         $t1, $a0, 31
    ctx->pc = 0x12f870u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x12f874: 0x337c2  srl         $a2, $v1, 31
    ctx->pc = 0x12f874u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x12f878: 0x4010  mfhi        $t0
    ctx->pc = 0x12f878u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x12f87c: 0x727c2  srl         $a0, $a3, 31
    ctx->pc = 0x12f87cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x12f880: 0x1430018  mult        $zero, $t2, $v1
    ctx->pc = 0x12f880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12f884: 0x81883  sra         $v1, $t0, 2
    ctx->pc = 0x12f884u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 2));
    // 0x12f888: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x12f888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x12f88c: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x12f88cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12f890: 0x1810  mfhi        $v1
    ctx->pc = 0x12f890u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x12f894: 0x1470018  mult        $zero, $t2, $a3
    ctx->pc = 0x12f894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12f898: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x12f898u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x12f89c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x12f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12f8a0: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x12f8a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12f8a4: 0x1810  mfhi        $v1
    ctx->pc = 0x12f8a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x12f8a8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x12f8a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x12f8ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12f8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12f8b0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x12f8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12f8b4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x12f8b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12f8b8: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x12F8B8u;
    {
        const bool branch_taken_0x12f8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8B8u;
        // 0x12f8bc: 0x3104ffff  andi        $a0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8b8) {
            ctx->pc = 0x12F8ECu;
            goto label_12f8ec;
        }
    }
    ctx->pc = 0x12F8C0u;
    // 0x12f8c0: 0x920402e3  lbu         $a0, 0x2E3($s0)
    ctx->pc = 0x12f8c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x12f8c4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x12f8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x12f8c8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x12f8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12f8cc: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x12f8ccu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12f8d0: 0x0  nop
    ctx->pc = 0x12f8d0u;
    // NOP
    // 0x12f8d4: 0x0  nop
    ctx->pc = 0x12f8d4u;
    // NOP
    // 0x12f8d8: 0x1812  mflo        $v1
    ctx->pc = 0x12f8d8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x12f8dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12f8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12f8e0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x12f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12f8e4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x12F8E4u;
    {
        const bool branch_taken_0x12f8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8E4u;
        // 0x12f8e8: 0xa20302e3  sb          $v1, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8e4) {
            ctx->pc = 0x12F9FCu;
            goto label_12f9fc;
        }
    }
    ctx->pc = 0x12F8ECu;
label_12f8ec:
    // 0x12f8ec: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x12f8ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x12f8f0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F8F0u;
    {
        const bool branch_taken_0x12f8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8F0u;
        // 0x12f8f4: 0x851823  subu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8f0) {
            ctx->pc = 0x12F904u;
            goto label_12f904;
        }
    }
    ctx->pc = 0x12F8F8u;
    // 0x12f8f8: 0x920302fa  lbu         $v1, 0x2FA($s0)
    ctx->pc = 0x12f8f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 762)));
    // 0x12f8fc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x12F8FCu;
    {
        const bool branch_taken_0x12f8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8FCu;
        // 0x12f900: 0xa20302e3  sb          $v1, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8fc) {
            ctx->pc = 0x12F9FCu;
            goto label_12f9fc;
        }
    }
    ctx->pc = 0x12F904u;
label_12f904:
    // 0x12f904: 0x960402fa  lhu         $a0, 0x2FA($s0)
    ctx->pc = 0x12f904u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 762)));
    // 0x12f908: 0x920502e3  lbu         $a1, 0x2E3($s0)
    ctx->pc = 0x12f908u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x12f90c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x12f90cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12f910: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x12f910u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12f914: 0x0  nop
    ctx->pc = 0x12f914u;
    // NOP
    // 0x12f918: 0x0  nop
    ctx->pc = 0x12f918u;
    // NOP
    // 0x12f91c: 0x1812  mflo        $v1
    ctx->pc = 0x12f91cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x12f920: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12f920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12f924: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x12f924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12f928: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x12F928u;
    {
        const bool branch_taken_0x12f928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F928u;
        // 0x12f92c: 0xa20302e3  sb          $v1, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f928) {
            ctx->pc = 0x12F9FCu;
            goto label_12f9fc;
        }
    }
    ctx->pc = 0x12F930u;
label_12f930:
    // 0x12f930: 0x960702f8  lhu         $a3, 0x2F8($s0)
    ctx->pc = 0x12f930u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x12f934: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F934u;
    {
        const bool branch_taken_0x12f934 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x12F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F934u;
        // 0x12f938: 0x71883  sra         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f934) {
            ctx->pc = 0x12F944u;
            goto label_12f944;
        }
    }
    ctx->pc = 0x12F93Cu;
    // 0x12f93c: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x12f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x12f940: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x12f940u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_12f944:
    // 0x12f944: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x12f944u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12f948: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x12f948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x12f94c: 0x718bc  dsll32      $v1, $a3, 2
    ctx->pc = 0x12f94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 2));
    // 0x12f950: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F950u;
    {
        const bool branch_taken_0x12f950 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x12F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F950u;
        // 0x12f954: 0x318bf  dsra32      $v1, $v1, 2 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f950) {
            ctx->pc = 0x12F960u;
            goto label_12f960;
        }
    }
    ctx->pc = 0x12F958u;
    // 0x12f958: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x12f958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x12f95c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x12f95cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_12f960:
    // 0x12f960: 0x960802e6  lhu         $t0, 0x2E6($s0)
    ctx->pc = 0x12f960u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12f964: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x12f964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12f968: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x12f968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x12f96c: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x12f96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x12f970: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F970u;
    {
        const bool branch_taken_0x12f970 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x12F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F970u;
        // 0x12f974: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f970) {
            ctx->pc = 0x12F980u;
            goto label_12f980;
        }
    }
    ctx->pc = 0x12F978u;
    // 0x12f978: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x12f978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x12f97c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x12f97cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_12f980:
    // 0x12f980: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x12f980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12f984: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x12f984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12f988: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x12F988u;
    {
        const bool branch_taken_0x12f988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F988u;
        // 0x12f98c: 0x30c4ffff  andi        $a0, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f988) {
            ctx->pc = 0x12F9BCu;
            goto label_12f9bc;
        }
    }
    ctx->pc = 0x12F990u;
    // 0x12f990: 0x920402e3  lbu         $a0, 0x2E3($s0)
    ctx->pc = 0x12f990u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x12f994: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x12f994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x12f998: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x12f998u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x12f99c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x12f99cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12f9a0: 0x0  nop
    ctx->pc = 0x12f9a0u;
    // NOP
    // 0x12f9a4: 0x0  nop
    ctx->pc = 0x12f9a4u;
    // NOP
    // 0x12f9a8: 0x1812  mflo        $v1
    ctx->pc = 0x12f9a8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x12f9ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12f9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12f9b0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x12f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12f9b4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12F9B4u;
    {
        const bool branch_taken_0x12f9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9B4u;
        // 0x12f9b8: 0xa20302e3  sb          $v1, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9b4) {
            ctx->pc = 0x12F9FCu;
            goto label_12f9fc;
        }
    }
    ctx->pc = 0x12F9BCu;
label_12f9bc:
    // 0x12f9bc: 0x104182a  slt         $v1, $t0, $a0
    ctx->pc = 0x12f9bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x12f9c0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F9C0u;
    {
        const bool branch_taken_0x12f9c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9C0u;
        // 0x12f9c4: 0x881823  subu        $v1, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9c0) {
            ctx->pc = 0x12F9D4u;
            goto label_12f9d4;
        }
    }
    ctx->pc = 0x12F9C8u;
    // 0x12f9c8: 0x920302fa  lbu         $v1, 0x2FA($s0)
    ctx->pc = 0x12f9c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 762)));
    // 0x12f9cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12F9CCu;
    {
        const bool branch_taken_0x12f9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9CCu;
        // 0x12f9d0: 0xa20302e3  sb          $v1, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9cc) {
            ctx->pc = 0x12F9FCu;
            goto label_12f9fc;
        }
    }
    ctx->pc = 0x12F9D4u;
label_12f9d4:
    // 0x12f9d4: 0x920502e3  lbu         $a1, 0x2E3($s0)
    ctx->pc = 0x12f9d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x12f9d8: 0x960402fa  lhu         $a0, 0x2FA($s0)
    ctx->pc = 0x12f9d8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 762)));
    // 0x12f9dc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x12f9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12f9e0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x12f9e0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12f9e4: 0x0  nop
    ctx->pc = 0x12f9e4u;
    // NOP
    // 0x12f9e8: 0x0  nop
    ctx->pc = 0x12f9e8u;
    // NOP
    // 0x12f9ec: 0x1812  mflo        $v1
    ctx->pc = 0x12f9ecu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x12f9f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12f9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12f9f4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x12f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12f9f8: 0xa20302e3  sb          $v1, 0x2E3($s0)
    ctx->pc = 0x12f9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
label_12f9fc:
    // 0x12f9fc: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x12f9fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12fa00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12fa04: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x12fa04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x12fa08u;
}
