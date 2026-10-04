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

// Function: FUN_0012b4f0
// Address: 0x12b4f0 - 0x12b6fc
void FUN_0012b4f0_0x12b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012b4f0_0x12b4f0");
#endif

    switch (ctx->pc) {
        case 0x12b518u: goto label_12b518;
        case 0x12b54cu: goto label_12b54c;
        case 0x12b554u: goto label_12b554;
        case 0x12b55cu: goto label_12b55c;
        case 0x12b59cu: goto label_12b59c;
        case 0x12b628u: goto label_12b628;
        case 0x12b648u: goto label_12b648;
        case 0x12b684u: goto label_12b684;
        default: break;
    }

    ctx->pc = 0x12b4f0u;

    // 0x12b4f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12b4f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12b4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12b4f8: 0x27a2003c  addiu       $v0, $sp, 0x3C
    ctx->pc = 0x12b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x12b4fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12b4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12b500: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12b500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12b504: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12b504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b508: 0xc78080e8  lwc1        $f0, -0x7F18($gp)
    ctx->pc = 0x12b508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b50c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12b50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b510: 0xc0590dc  jal         func_164370
    ctx->pc = 0x12B510u;
    SET_GPR_U32(ctx, 31, 0x12B518u);
    ctx->pc = 0x12B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B510u;
    // 0x12b514: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x12B510u, 0x12B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B518u;
label_12b518:
    // 0x12b518: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12b518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b51c: 0x12000076  beqz        $s0, . + 4 + (0x76 << 2)
    ctx->pc = 0x12B51Cu;
    {
        const bool branch_taken_0x12b51c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B51Cu;
        // 0x12b520: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b51c) {
            ctx->pc = 0x12B6F8u;
            goto label_12b6f8;
        }
    }
    ctx->pc = 0x12B524u;
    // 0x12b524: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x12b524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x12b528: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x12b528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x12b52c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12b52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12b530: 0xdf868ae8  ld          $a2, -0x7518($gp)
    ctx->pc = 0x12b530u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937320)));
    // 0x12b534: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12b534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b53c: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x12b53cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12b540: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x12b540u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x12b544: 0xc0717e8  jal         func_1C5FA0
    ctx->pc = 0x12B544u;
    SET_GPR_U32(ctx, 31, 0x12B54Cu);
    ctx->pc = 0x12B548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B544u;
    // 0x12b548: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5FA0u, 0x12B544u, 0x12B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B54Cu;
label_12b54c:
    // 0x12b54c: 0xc0717c8  jal         func_1C5F20
    ctx->pc = 0x12B54Cu;
    SET_GPR_U32(ctx, 31, 0x12B554u);
    ctx->pc = 0x12B550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B54Cu;
    // 0x12b550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F20u, 0x12B54Cu, 0x12B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B554u;
label_12b554:
    // 0x12b554: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x12B554u;
    SET_GPR_U32(ctx, 31, 0x12B55Cu);
    ctx->pc = 0x12B558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B554u;
    // 0x12b558: 0x921102e9  lbu         $s1, 0x2E9($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 745)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x12B554u, 0x12B55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B55Cu;
label_12b55c:
    // 0x12b55c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12b55cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b560: 0x920302ea  lbu         $v1, 0x2EA($s0)
    ctx->pc = 0x12b560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 746)));
    // 0x12b564: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x12b564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12b568: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x12b568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x12b56c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x12b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x12b570: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12b570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b574: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12b574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12b578: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12b578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12b57c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12b57cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12b580: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x12b580u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x12b584: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12b584u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12b588: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12b588u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12b58c: 0x0  nop
    ctx->pc = 0x12b58cu;
    // NOP
    // 0x12b590: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12b590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12b594: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x12B594u;
    SET_GPR_U32(ctx, 31, 0x12B59Cu);
    ctx->pc = 0x12B598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B594u;
    // 0x12b598: 0xa20202e8  sb          $v0, 0x2E8($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x12B594u, 0x12B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B59Cu;
label_12b59c:
    // 0x12b59c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12b59cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b5a0: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x12b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x12b5a4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x12b5a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12b5a8: 0x0  nop
    ctx->pc = 0x12b5a8u;
    // NOP
    // 0x12b5ac: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x12b5acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12b5b0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x12b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x12b5b4: 0x34450fdb  ori         $a1, $v0, 0xFDB
    ctx->pc = 0x12b5b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12b5b8: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x12b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x12b5bc: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x12b5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12b5c0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x12b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x12b5c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12b5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12b5c8: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x12b5c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12b5cc: 0xc60002a8  lwc1        $f0, 0x2A8($s0)
    ctx->pc = 0x12b5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b5d0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x12b5d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x12b5d4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x12b5d4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x12b5d8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x12b5d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12b5dc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x12b5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12b5e0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x12b5e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x12b5e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b5e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b5e8: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x12b5e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b5ec: 0x0  nop
    ctx->pc = 0x12b5ecu;
    // NOP
    // 0x12b5f0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x12B5F0u;
    {
        const bool branch_taken_0x12b5f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5F0u;
        // 0x12b5f4: 0xe60002a8  swc1        $f0, 0x2A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5f0) {
            ctx->pc = 0x12B604u;
            goto label_12b604;
        }
    }
    ctx->pc = 0x12B5F8u;
    // 0x12b5f8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x12b5f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x12b5fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12B5FCu;
    {
        const bool branch_taken_0x12b5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5FCu;
        // 0x12b600: 0xe60002a8  swc1        $f0, 0x2A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5fc) {
            ctx->pc = 0x12B61Cu;
            goto label_12b61c;
        }
    }
    ctx->pc = 0x12B604u;
label_12b604:
    // 0x12b604: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x12b604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b608: 0x0  nop
    ctx->pc = 0x12b608u;
    // NOP
    // 0x12b60c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x12B60Cu;
    {
        const bool branch_taken_0x12b60c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B60Cu;
        // 0x12b610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b60c) {
            ctx->pc = 0x12B620u;
            goto label_12b620;
        }
    }
    ctx->pc = 0x12B614u;
    // 0x12b614: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x12b614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x12b618: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x12b618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
label_12b61c:
    // 0x12b61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12b620:
    // 0x12b620: 0xc04be88  jal         func_12FA20
    ctx->pc = 0x12B620u;
    SET_GPR_U32(ctx, 31, 0x12B628u);
    ctx->pc = 0x12B624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B620u;
    // 0x12b624: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FA20u, 0x12B620u, 0x12B628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B628u;
label_12b628:
    // 0x12b628: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12b628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b62c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x12b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x12b630: 0xa20302e1  sb          $v1, 0x2E1($s0)
    ctx->pc = 0x12b630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 737), (uint8_t)GPR_U32(ctx, 3));
    // 0x12b634: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12b634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12b638: 0xae0202a0  sw          $v0, 0x2A0($s0)
    ctx->pc = 0x12b638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 2));
    // 0x12b63c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x12b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12b640: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x12B640u;
    SET_GPR_U32(ctx, 31, 0x12B648u);
    ctx->pc = 0x12B644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B640u;
    // 0x12b644: 0xa20202e2  sb          $v0, 0x2E2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 738), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x12B640u, 0x12B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B648u;
label_12b648:
    // 0x12b648: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12b648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12b64c: 0x0  nop
    ctx->pc = 0x12b64cu;
    // NOP
    // 0x12b650: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12b650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12b654: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x12b654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x12b658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12b658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b65c: 0x0  nop
    ctx->pc = 0x12b65cu;
    // NOP
    // 0x12b660: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x12b660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12b664: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x12b664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x12b668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12b668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b66c: 0x0  nop
    ctx->pc = 0x12b66cu;
    // NOP
    // 0x12b670: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x12b670u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x12b674: 0x0  nop
    ctx->pc = 0x12b674u;
    // NOP
    // 0x12b678: 0x0  nop
    ctx->pc = 0x12b678u;
    // NOP
    // 0x12b67c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x12B67Cu;
    SET_GPR_U32(ctx, 31, 0x12B684u);
    ctx->pc = 0x12B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B67Cu;
    // 0x12b680: 0xe6000300  swc1        $f0, 0x300($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x12B67Cu, 0x12B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B684u;
label_12b684:
    // 0x12b684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12b684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b688: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x12b688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x12b68c: 0x3468cccd  ori         $t0, $v1, 0xCCCD
    ctx->pc = 0x12b68cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x12b690: 0x3c074f00  lui         $a3, 0x4F00
    ctx->pc = 0x12b690u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20224 << 16));
    // 0x12b694: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x12b694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12b698: 0x3c03be4c  lui         $v1, 0xBE4C
    ctx->pc = 0x12b698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48716 << 16));
    // 0x12b69c: 0x3466cccd  ori         $a2, $v1, 0xCCCD
    ctx->pc = 0x12b69cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x12b6a0: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x12b6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
    // 0x12b6a4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x12b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x12b6a8: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x12b6a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x12b6ac: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x12b6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x12b6b0: 0x2463b710  addiu       $v1, $v1, -0x48F0
    ctx->pc = 0x12b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948624));
    // 0x12b6b4: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x12b6b4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12b6b8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x12b6b8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b6bc: 0x0  nop
    ctx->pc = 0x12b6bcu;
    // NOP
    // 0x12b6c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12b6c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x12b6c4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x12b6c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x12b6c8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x12b6c8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b6cc: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x12b6ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12b6d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b6d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b6d4: 0xe6000304  swc1        $f0, 0x304($s0)
    ctx->pc = 0x12b6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 772), bits); }
    // 0x12b6d8: 0xc6010304  lwc1        $f1, 0x304($s0)
    ctx->pc = 0x12b6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b6dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x12b6dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b6e0: 0x0  nop
    ctx->pc = 0x12b6e0u;
    // NOP
    // 0x12b6e4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12b6e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12b6e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x12b6e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x12b6ec: 0xe6000304  swc1        $f0, 0x304($s0)
    ctx->pc = 0x12b6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 772), bits); }
    // 0x12b6f0: 0xa60002e6  sh          $zero, 0x2E6($s0)
    ctx->pc = 0x12b6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 0));
    // 0x12b6f4: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x12b6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
label_12b6f8:
    // 0x12b6f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12b6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x12b6fcu;
}
