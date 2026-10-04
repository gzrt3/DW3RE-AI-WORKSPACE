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

// Function: FUN_0011a270
// Address: 0x11a270 - 0x11a318
void FUN_0011a270_0x11a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011a270_0x11a270");
#endif

    switch (ctx->pc) {
        case 0x11a28cu: goto label_11a28c;
        case 0x11a2a0u: goto label_11a2a0;
        case 0x11a2c4u: goto label_11a2c4;
        case 0x11a2ccu: goto label_11a2cc;
        case 0x11a2d4u: goto label_11a2d4;
        default: break;
    }

    ctx->pc = 0x11a270u;

    // 0x11a270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11a270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11a274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11a274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11a278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11a278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11a27c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a27cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a280: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11a280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11a284: 0xc0590dc  jal         func_164370
    ctx->pc = 0x11A284u;
    SET_GPR_U32(ctx, 31, 0x11A28Cu);
    ctx->pc = 0x11A288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A284u;
    // 0x11a288: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x11A284u, 0x11A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A28Cu;
label_11a28c:
    // 0x11a28c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a290: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x11A290u;
    {
        const bool branch_taken_0x11a290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A290u;
        // 0x11a294: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a290) {
            ctx->pc = 0x11A314u;
            goto label_11a314;
        }
    }
    ctx->pc = 0x11A298u;
    // 0x11a298: 0xc066e26  jal         func_19B898
    ctx->pc = 0x11A298u;
    SET_GPR_U32(ctx, 31, 0x11A2A0u);
    ctx->pc = 0x11A29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A298u;
    // 0x11a29c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x11A298u, 0x11A2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A2A0u;
label_11a2a0:
    // 0x11a2a0: 0xdf868be0  ld          $a2, -0x7420($gp)
    ctx->pc = 0x11a2a0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937568)));
    // 0x11a2a4: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x11a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x11a2a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11a2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11a2ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2b0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x11a2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11a2b4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x11a2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11a2b8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x11a2b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x11a2bc: 0xc0717e8  jal         func_1C5FA0
    ctx->pc = 0x11A2BCu;
    SET_GPR_U32(ctx, 31, 0x11A2C4u);
    ctx->pc = 0x11A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A2BCu;
    // 0x11a2c0: 0x24080038  addiu       $t0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5FA0u, 0x11A2BCu, 0x11A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A2C4u;
label_11a2c4:
    // 0x11a2c4: 0xc0717c8  jal         func_1C5F20
    ctx->pc = 0x11A2C4u;
    SET_GPR_U32(ctx, 31, 0x11A2CCu);
    ctx->pc = 0x11A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A2C4u;
    // 0x11a2c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F20u, 0x11A2C4u, 0x11A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A2CCu;
label_11a2cc:
    // 0x11a2cc: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x11A2CCu;
    SET_GPR_U32(ctx, 31, 0x11A2D4u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x11A2CCu, 0x11A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A2D4u;
label_11a2d4:
    // 0x11a2d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11a2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a2d8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x11a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x11a2dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11a2dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a2e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11a2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a2e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11a2e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x11a2e8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x11a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x11a2ec: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x11a2ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x11a2f0: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x11a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
    // 0x11a2f4: 0x24636000  addiu       $v1, $v1, 0x6000
    ctx->pc = 0x11a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24576));
    // 0x11a2f8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x11a2f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x11a2fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x11a2fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a300: 0x0  nop
    ctx->pc = 0x11a300u;
    // NOP
    // 0x11a304: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11a304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11a308: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x11a308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
    // 0x11a30c: 0xa20402eb  sb          $a0, 0x2EB($s0)
    ctx->pc = 0x11a30cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 747), (uint8_t)GPR_U32(ctx, 4));
    // 0x11a310: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x11a310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
label_11a314:
    // 0x11a314: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11a314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11a318u;
}
