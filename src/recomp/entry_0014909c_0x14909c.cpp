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

// Function: entry_0014909c
// Address: 0x14909c - 0x149170
void entry_0014909c_0x14909c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014909c_0x14909c");
#endif

    switch (ctx->pc) {
        case 0x149150u: goto label_149150;
        default: break;
    }

    ctx->pc = 0x14909cu;

    // 0x14909c: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x14909cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x1490a0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1490a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1490a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1490a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1490a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1490a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1490ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1490acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1490b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1490b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1490b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1490b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1490b8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1490b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1490bc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1490bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1490c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1490c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1490c4: 0x0  nop
    ctx->pc = 0x1490c4u;
    // NOP
    // 0x1490c8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1490c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1490cc: 0x0  nop
    ctx->pc = 0x1490ccu;
    // NOP
    // 0x1490d0: 0x0  nop
    ctx->pc = 0x1490d0u;
    // NOP
    // 0x1490d4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1490d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1490d8: 0x0  nop
    ctx->pc = 0x1490d8u;
    // NOP
    // 0x1490dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1490DCu;
    {
        const bool branch_taken_0x1490dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1490dc) {
            ctx->pc = 0x1490E8u;
            goto label_1490e8;
        }
    }
    ctx->pc = 0x1490E4u;
    // 0x1490e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1490e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1490e8:
    // 0x1490e8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1490E8u;
    {
        const bool branch_taken_0x1490e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1490ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1490E8u;
        // 0x1490ec: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1490e8) {
            ctx->pc = 0x149104u;
            goto label_149104;
        }
    }
    ctx->pc = 0x1490F0u;
    // 0x1490f0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1490f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1490f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1490f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1490f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1490f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1490fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1490FCu;
    {
        const bool branch_taken_0x1490fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1490FCu;
        // 0x149100: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1490fc) {
            ctx->pc = 0x149134u;
            goto label_149134;
        }
    }
    ctx->pc = 0x149104u;
label_149104:
    // 0x149104: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x149104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x149108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14910c: 0x0  nop
    ctx->pc = 0x14910cu;
    // NOP
    // 0x149110: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x149110u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149114: 0x0  nop
    ctx->pc = 0x149114u;
    // NOP
    // 0x149118: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x149118u;
    {
        const bool branch_taken_0x149118 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x149118) {
            ctx->pc = 0x149134u;
            goto label_149134;
        }
    }
    ctx->pc = 0x149120u;
    // 0x149120: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x149120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x149124: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x149124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x149128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14912c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14912Cu;
    {
        const bool branch_taken_0x14912c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14912Cu;
        // 0x149130: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14912c) {
            ctx->pc = 0x149134u;
            goto label_149134;
        }
    }
    ctx->pc = 0x149134u;
label_149134:
    // 0x149134: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x149134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x149138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14913c: 0x92220034  lbu         $v0, 0x34($s1)
    ctx->pc = 0x14913cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x149140: 0x26260038  addiu       $a2, $s1, 0x38
    ctx->pc = 0x149140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x149144: 0x27a7003f  addiu       $a3, $sp, 0x3F
    ctx->pc = 0x149144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 63));
    // 0x149148: 0xc052d84  jal         func_14B610
    ctx->pc = 0x149148u;
    SET_GPR_U32(ctx, 31, 0x149150u);
    ctx->pc = 0x14914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149148u;
    // 0x14914c: 0x38450001  xori        $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B610u, 0x149148u, 0x149150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149150u;
label_149150:
    // 0x149150: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x149150u;
    {
        const bool branch_taken_0x149150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149150) {
            ctx->pc = 0x1491B0u;
            return;
        }
    }
    ctx->pc = 0x149158u;
    // 0x149158: 0x93a3003f  lbu         $v1, 0x3F($sp)
    ctx->pc = 0x149158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 63)));
    // 0x14915c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x14915cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x149160: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x149160u;
    {
        const bool branch_taken_0x149160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x149160) {
            ctx->pc = 0x1491B0u;
            return;
        }
    }
    ctx->pc = 0x149168u;
    // 0x149168: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x149168u;
    {
        const bool branch_taken_0x149168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149168u;
        // 0x14916c: 0xa620002c  sh          $zero, 0x2C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149168) {
            ctx->pc = 0x1491B0u;
            return;
        }
    }
    ctx->pc = 0x149170u;
}
