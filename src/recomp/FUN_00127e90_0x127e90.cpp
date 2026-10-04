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

// Function: FUN_00127e90
// Address: 0x127e90 - 0x127f68
void FUN_00127e90_0x127e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127e90_0x127e90");
#endif

    switch (ctx->pc) {
        case 0x127ec0u: goto label_127ec0;
        case 0x127efcu: goto label_127efc;
        case 0x127f14u: goto label_127f14;
        case 0x127f1cu: goto label_127f1c;
        case 0x127f50u: goto label_127f50;
        default: break;
    }

    ctx->pc = 0x127e90u;

    // 0x127e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x127e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x127e94: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x127e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x127e98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x127e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x127e9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x127e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x127ea0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x127ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x127ea4: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x127ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A3EAu));
    // 0x127ea8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127EA8u;
    {
        const bool branch_taken_0x127ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x127EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EA8u;
        // 0x127eac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ea8) {
            ctx->pc = 0x127EB8u;
            goto label_127eb8;
        }
    }
    ctx->pc = 0x127EB0u;
    // 0x127eb0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x127EB0u;
    {
        const bool branch_taken_0x127eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x127eb0) {
            ctx->pc = 0x127EC8u;
            goto label_127ec8;
        }
    }
    ctx->pc = 0x127EB8u;
label_127eb8:
    // 0x127eb8: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x127EB8u;
    SET_GPR_U32(ctx, 31, 0x127EC0u);
    ctx->pc = 0x127EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127EB8u;
    // 0x127ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x127EB8u, 0x127EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127EC0u;
label_127ec0:
    // 0x127ec0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x127EC0u;
    {
        const bool branch_taken_0x127ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EC0u;
        // 0x127ec4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ec0) {
            ctx->pc = 0x128064u;
            return;
        }
    }
    ctx->pc = 0x127EC8u;
label_127ec8:
    // 0x127ec8: 0x960202e6  lhu         $v0, 0x2E6($s0)
    ctx->pc = 0x127ec8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x127ecc: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x127eccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x127ed0: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x127ED0u;
    {
        const bool branch_taken_0x127ed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x127ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127ED0u;
        // 0x127ed4: 0x2841003d  slti        $at, $v0, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ed0) {
            ctx->pc = 0x127F04u;
            goto label_127f04;
        }
    }
    ctx->pc = 0x127ED8u;
    // 0x127ed8: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x127ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127edc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x127edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x127ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127ee4: 0x26040330  addiu       $a0, $s0, 0x330
    ctx->pc = 0x127ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x127ee8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x127ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x127eec: 0xe6000300  swc1        $f0, 0x300($s0)
    ctx->pc = 0x127eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    // 0x127ef0: 0xc60c0304  lwc1        $f12, 0x304($s0)
    ctx->pc = 0x127ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x127ef4: 0xc066e14  jal         func_19B850
    ctx->pc = 0x127EF4u;
    SET_GPR_U32(ctx, 31, 0x127EFCu);
    ctx->pc = 0x127EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127EF4u;
    // 0x127ef8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x127EF4u, 0x127EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127EFCu;
label_127efc:
    // 0x127efc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x127EFCu;
    {
        const bool branch_taken_0x127efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EFCu;
        // 0x127f00: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127efc) {
            ctx->pc = 0x127F5Cu;
            goto label_127f5c;
        }
    }
    ctx->pc = 0x127F04u;
label_127f04:
    // 0x127f04: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x127F04u;
    {
        const bool branch_taken_0x127f04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x127f04) {
            ctx->pc = 0x127F58u;
            goto label_127f58;
        }
    }
    ctx->pc = 0x127F0Cu;
    // 0x127f0c: 0xc071740  jal         func_1C5D00
    ctx->pc = 0x127F0Cu;
    SET_GPR_U32(ctx, 31, 0x127F14u);
    ctx->pc = 0x1C5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D00u, 0x127F0Cu, 0x127F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127F14u;
label_127f14:
    // 0x127f14: 0xc071728  jal         func_1C5CA0
    ctx->pc = 0x127F14u;
    SET_GPR_U32(ctx, 31, 0x127F1Cu);
    ctx->pc = 0x127F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F14u;
    // 0x127f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CA0u, 0x127F14u, 0x127F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127F1Cu;
label_127f1c:
    // 0x127f1c: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x127f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127f20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x127f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x127f24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x127f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x127f28: 0x0  nop
    ctx->pc = 0x127f28u;
    // NOP
    // 0x127f2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x127f2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127f30: 0x0  nop
    ctx->pc = 0x127f30u;
    // NOP
    // 0x127f34: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x127F34u;
    {
        const bool branch_taken_0x127f34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x127F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F34u;
        // 0x127f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f34) {
            ctx->pc = 0x127F48u;
            goto label_127f48;
        }
    }
    ctx->pc = 0x127F3Cu;
    // 0x127f3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x127f3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x127f40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x127F40u;
    {
        const bool branch_taken_0x127f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F40u;
        // 0x127f44: 0xe6000300  swc1        $f0, 0x300($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f40) {
            ctx->pc = 0x127F58u;
            goto label_127f58;
        }
    }
    ctx->pc = 0x127F48u;
label_127f48:
    // 0x127f48: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x127F48u;
    SET_GPR_U32(ctx, 31, 0x127F50u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x127F48u, 0x127F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127F50u;
label_127f50:
    // 0x127f50: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x127F50u;
    {
        const bool branch_taken_0x127f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f50) {
            ctx->pc = 0x128060u;
            return;
        }
    }
    ctx->pc = 0x127F58u;
label_127f58:
    // 0x127f58: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x127f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_127f5c:
    // 0x127f5c: 0x26060330  addiu       $a2, $s0, 0x330
    ctx->pc = 0x127f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x127f60: 0xc066e02  jal         func_19B808
    ctx->pc = 0x127F60u;
    SET_GPR_U32(ctx, 31, 0x127F68u);
    ctx->pc = 0x127F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F60u;
    // 0x127f64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x127F60u, 0x127F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127F68u;
}
