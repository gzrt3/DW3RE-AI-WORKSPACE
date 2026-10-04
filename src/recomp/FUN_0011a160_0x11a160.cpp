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

// Function: FUN_0011a160
// Address: 0x11a160 - 0x11a25c
void FUN_0011a160_0x11a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011a160_0x11a160");
#endif

    switch (ctx->pc) {
        case 0x11a17cu: goto label_11a17c;
        case 0x11a190u: goto label_11a190;
        case 0x11a1b4u: goto label_11a1b4;
        case 0x11a1bcu: goto label_11a1bc;
        case 0x11a1c4u: goto label_11a1c4;
        case 0x11a20cu: goto label_11a20c;
        default: break;
    }

    ctx->pc = 0x11a160u;

    // 0x11a160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11a164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11a164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11a168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11a16c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a16cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a170: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11a170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11a174: 0xc0590dc  jal         func_164370
    ctx->pc = 0x11A174u;
    SET_GPR_U32(ctx, 31, 0x11A17Cu);
    ctx->pc = 0x11A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A174u;
    // 0x11a178: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x11A174u, 0x11A17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A17Cu;
label_11a17c:
    // 0x11a17c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a180: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x11A180u;
    {
        const bool branch_taken_0x11a180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A180u;
        // 0x11a184: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a180) {
            ctx->pc = 0x11A258u;
            goto label_11a258;
        }
    }
    ctx->pc = 0x11A188u;
    // 0x11a188: 0xc066e26  jal         func_19B898
    ctx->pc = 0x11A188u;
    SET_GPR_U32(ctx, 31, 0x11A190u);
    ctx->pc = 0x11A18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A188u;
    // 0x11a18c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x11A188u, 0x11A190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A190u;
label_11a190:
    // 0x11a190: 0xdf868bd0  ld          $a2, -0x7430($gp)
    ctx->pc = 0x11a190u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937552)));
    // 0x11a194: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x11a194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x11a198: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11a198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11a19c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1a0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x11a1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11a1a4: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x11a1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11a1a8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x11a1a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x11a1ac: 0xc0717e8  jal         func_1C5FA0
    ctx->pc = 0x11A1ACu;
    SET_GPR_U32(ctx, 31, 0x11A1B4u);
    ctx->pc = 0x11A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1ACu;
    // 0x11a1b0: 0x24080038  addiu       $t0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5FA0u, 0x11A1ACu, 0x11A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1B4u;
label_11a1b4:
    // 0x11a1b4: 0xc0717c8  jal         func_1C5F20
    ctx->pc = 0x11A1B4u;
    SET_GPR_U32(ctx, 31, 0x11A1BCu);
    ctx->pc = 0x11A1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1B4u;
    // 0x11a1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F20u, 0x11A1B4u, 0x11A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1BCu;
label_11a1bc:
    // 0x11a1bc: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x11A1BCu;
    SET_GPR_U32(ctx, 31, 0x11A1C4u);
    ctx->pc = 0x11A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1BCu;
    // 0x11a1c0: 0x921102e9  lbu         $s1, 0x2E9($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 745)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x11A1BCu, 0x11A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1C4u;
label_11a1c4:
    // 0x11a1c4: 0x920302ea  lbu         $v1, 0x2EA($s0)
    ctx->pc = 0x11a1c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 746)));
    // 0x11a1c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a1c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a1cc: 0x0  nop
    ctx->pc = 0x11a1ccu;
    // NOP
    // 0x11a1d0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x11a1d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11a1d4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x11a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x11a1d8: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x11a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x11a1dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x11a1dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a1e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a1e4: 0x0  nop
    ctx->pc = 0x11a1e4u;
    // NOP
    // 0x11a1e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11a1e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x11a1ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x11a1ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x11a1f0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x11a1f0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x11a1f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a1f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11a1f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x11a1f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11a1fc: 0x0  nop
    ctx->pc = 0x11a1fcu;
    // NOP
    // 0x11a200: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11a200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11a204: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x11A204u;
    SET_GPR_U32(ctx, 31, 0x11A20Cu);
    ctx->pc = 0x11A208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A204u;
    // 0x11a208: 0xa20202e8  sb          $v0, 0x2E8($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x11A204u, 0x11A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A20Cu;
label_11a20c:
    // 0x11a20c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11a20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a210: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x11a210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x11a214: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11a214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a218: 0x3c040012  lui         $a0, 0x12
    ctx->pc = 0x11a218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18 << 16));
    // 0x11a21c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11a21cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x11a220: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11a220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a224: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x11a224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x11a228: 0x248460b0  addiu       $a0, $a0, 0x60B0
    ctx->pc = 0x11a228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24752));
    // 0x11a22c: 0x34660fdb  ori         $a2, $v1, 0xFDB
    ctx->pc = 0x11a22cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x11a230: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x11a230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x11a234: 0x24637180  addiu       $v1, $v1, 0x7180
    ctx->pc = 0x11a234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29056));
    // 0x11a238: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x11a238u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x11a23c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x11a23cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a240: 0x0  nop
    ctx->pc = 0x11a240u;
    // NOP
    // 0x11a244: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11a244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11a248: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x11a248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
    // 0x11a24c: 0xa20502eb  sb          $a1, 0x2EB($s0)
    ctx->pc = 0x11a24cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 747), (uint8_t)GPR_U32(ctx, 5));
    // 0x11a250: 0xae040364  sw          $a0, 0x364($s0)
    ctx->pc = 0x11a250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 4));
    // 0x11a254: 0xae030368  sw          $v1, 0x368($s0)
    ctx->pc = 0x11a254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 3));
label_11a258:
    // 0x11a258: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11a258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11a25cu;
}
