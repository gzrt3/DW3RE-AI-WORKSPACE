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

// Function: FUN_001fa090
// Address: 0x1fa090 - 0x1fa16c
void FUN_001fa090_0x1fa090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fa090_0x1fa090");
#endif

    switch (ctx->pc) {
        case 0x1fa0acu: goto label_1fa0ac;
        case 0x1fa0c0u: goto label_1fa0c0;
        case 0x1fa0e0u: goto label_1fa0e0;
        case 0x1fa0e8u: goto label_1fa0e8;
        case 0x1fa148u: goto label_1fa148;
        default: break;
    }

    ctx->pc = 0x1fa090u;

    // 0x1fa090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fa090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fa094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fa094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fa098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fa098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fa09c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fa09cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa0a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fa0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fa0a4: 0xc0590dc  jal         func_164370
    ctx->pc = 0x1FA0A4u;
    SET_GPR_U32(ctx, 31, 0x1FA0ACu);
    ctx->pc = 0x1FA0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA0A4u;
    // 0x1fa0a8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1FA0A4u, 0x1FA0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA0ACu;
label_1fa0ac:
    // 0x1fa0ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa0b0: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1FA0B0u;
    {
        const bool branch_taken_0x1fa0b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0B0u;
        // 0x1fa0b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0b0) {
            ctx->pc = 0x1FA168u;
            goto label_1fa168;
        }
    }
    ctx->pc = 0x1FA0B8u;
    // 0x1fa0b8: 0xc0646d4  jal         func_191B50
    ctx->pc = 0x1FA0B8u;
    SET_GPR_U32(ctx, 31, 0x1FA0C0u);
    ctx->pc = 0x1FA0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA0B8u;
    // 0x1fa0bc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191B50u, 0x1FA0B8u, 0x1FA0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA0C0u;
label_1fa0c0:
    // 0x1fa0c0: 0xdf868b50  ld          $a2, -0x74B0($gp)
    ctx->pc = 0x1fa0c0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937424)));
    // 0x1fa0c4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1fa0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1fa0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa0cc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fa0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fa0d0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1fa0d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa0d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fa0d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa0d8: 0xc05c810  jal         func_172040
    ctx->pc = 0x1FA0D8u;
    SET_GPR_U32(ctx, 31, 0x1FA0E0u);
    ctx->pc = 0x1FA0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA0D8u;
    // 0x1fa0dc: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172040u, 0x1FA0D8u, 0x1FA0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA0E0u;
label_1fa0e0:
    // 0x1fa0e0: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1FA0E0u;
    SET_GPR_U32(ctx, 31, 0x1FA0E8u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1FA0E0u, 0x1FA0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA0E8u;
label_1fa0e8:
    // 0x1fa0e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa0ec: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fa0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1fa0f0: 0x3c064080  lui         $a2, 0x4080
    ctx->pc = 0x1fa0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16512 << 16));
    // 0x1fa0f4: 0x3c0540c0  lui         $a1, 0x40C0
    ctx->pc = 0x1fa0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16576 << 16));
    // 0x1fa0f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fa0f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fa0fc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fa0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1fa100: 0x2463a180  addiu       $v1, $v1, -0x5E80
    ctx->pc = 0x1fa100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943104));
    // 0x1fa104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa10c: 0x0  nop
    ctx->pc = 0x1fa10cu;
    // NOP
    // 0x1fa110: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1fa110u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
    // 0x1fa114: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1fa114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x1fa118: 0x24421e80  addiu       $v0, $v0, 0x1E80
    ctx->pc = 0x1fa118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7808));
    // 0x1fa11c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1fa11cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa120: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1fa120u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa124: 0x0  nop
    ctx->pc = 0x1fa124u;
    // NOP
    // 0x1fa128: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1fa128u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1fa12c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1fa12cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fa130: 0xe602113c  swc1        $f2, 0x113C($s0)
    ctx->pc = 0x1fa130u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4412), bits); }
    // 0x1fa134: 0xe6021140  swc1        $f2, 0x1140($s0)
    ctx->pc = 0x1fa134u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4416), bits); }
    // 0x1fa138: 0xa2111134  sb          $s1, 0x1134($s0)
    ctx->pc = 0x1fa138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4404), (uint8_t)GPR_U32(ctx, 17));
    // 0x1fa13c: 0xae031998  sw          $v1, 0x1998($s0)
    ctx->pc = 0x1fa13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6552), GPR_U32(ctx, 3));
    // 0x1fa140: 0xc07e9ac  jal         func_1FA6B0
    ctx->pc = 0x1FA140u;
    SET_GPR_U32(ctx, 31, 0x1FA148u);
    ctx->pc = 0x1FA144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA140u;
    // 0x1fa144: 0xae02199c  sw          $v0, 0x199C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6556), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6B0u, 0x1FA140u, 0x1FA148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA148u;
label_1fa148:
    // 0x1fa148: 0xae001980  sw          $zero, 0x1980($s0)
    ctx->pc = 0x1fa148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6528), GPR_U32(ctx, 0));
    // 0x1fa14c: 0x27838268  addiu       $v1, $gp, -0x7D98
    ctx->pc = 0x1fa14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935144));
    // 0x1fa150: 0x92041134  lbu         $a0, 0x1134($s0)
    ctx->pc = 0x1fa150u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4404)));
    // 0x1fa154: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fa154u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fa158: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fa158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fa15c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fa15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa160: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fa160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fa164: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fa164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fa168:
    // 0x1fa168: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fa168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1fa16cu;
}
