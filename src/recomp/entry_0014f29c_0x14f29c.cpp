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

// Function: entry_0014f29c
// Address: 0x14f29c - 0x14f3b4
void entry_0014f29c_0x14f29c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f29c_0x14f29c");
#endif

    switch (ctx->pc) {
        case 0x14f2a4u: goto label_14f2a4;
        case 0x14f2acu: goto label_14f2ac;
        case 0x14f2b4u: goto label_14f2b4;
        case 0x14f2c8u: goto label_14f2c8;
        case 0x14f2d4u: goto label_14f2d4;
        case 0x14f308u: goto label_14f308;
        case 0x14f314u: goto label_14f314;
        case 0x14f328u: goto label_14f328;
        case 0x14f334u: goto label_14f334;
        case 0x14f34cu: goto label_14f34c;
        case 0x14f370u: goto label_14f370;
        case 0x14f388u: goto label_14f388;
        default: break;
    }

    ctx->pc = 0x14f29cu;

    // 0x14f29c: 0xc053d20  jal         func_14F480
    ctx->pc = 0x14F29Cu;
    SET_GPR_U32(ctx, 31, 0x14F2A4u);
    ctx->pc = 0x14F480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F480u, 0x14F29Cu, 0x14F2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2A4u;
label_14f2a4:
    // 0x14f2a4: 0xc05409c  jal         func_150270
    ctx->pc = 0x14F2A4u;
    SET_GPR_U32(ctx, 31, 0x14F2ACu);
    ctx->pc = 0x14F2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2A4u;
    // 0x14f2a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150270u, 0x14F2A4u, 0x14F2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2ACu;
label_14f2ac:
    // 0x14f2ac: 0xc053db0  jal         func_14F6C0
    ctx->pc = 0x14F2ACu;
    SET_GPR_U32(ctx, 31, 0x14F2B4u);
    ctx->pc = 0x14F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2ACu;
    // 0x14f2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F6C0u, 0x14F2ACu, 0x14F2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2B4u;
label_14f2b4:
    // 0x14f2b4: 0x920301a2  lbu         $v1, 0x1A2($s0)
    ctx->pc = 0x14f2b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 418)));
    // 0x14f2b8: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x14F2B8u;
    {
        const bool branch_taken_0x14f2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2B8u;
        // 0x14f2bc: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2b8) {
            ctx->pc = 0x14F3B4u;
            return;
        }
    }
    ctx->pc = 0x14F2C0u;
    // 0x14f2c0: 0xc066e26  jal         func_19B898
    ctx->pc = 0x14F2C0u;
    SET_GPR_U32(ctx, 31, 0x14F2C8u);
    ctx->pc = 0x14F2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2C0u;
    // 0x14f2c4: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x14F2C0u, 0x14F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2C8u;
label_14f2c8:
    // 0x14f2c8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x14f2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14f2cc: 0xc066e26  jal         func_19B898
    ctx->pc = 0x14F2CCu;
    SET_GPR_U32(ctx, 31, 0x14F2D4u);
    ctx->pc = 0x14F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2CCu;
    // 0x14f2d0: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x14F2CCu, 0x14F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2D4u;
label_14f2d4:
    // 0x14f2d4: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x14f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x14f2d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F2D8u;
    {
        const bool branch_taken_0x14f2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2D8u;
        // 0x14f2dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2d8) {
            ctx->pc = 0x14F2E8u;
            goto label_14f2e8;
        }
    }
    ctx->pc = 0x14F2E0u;
    // 0x14f2e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14F2E0u;
    {
        const bool branch_taken_0x14f2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2E0u;
        // 0x14f2e4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2e0) {
            ctx->pc = 0x14F2FCu;
            goto label_14f2fc;
        }
    }
    ctx->pc = 0x14F2E8u;
label_14f2e8:
    // 0x14f2e8: 0x90430232  lbu         $v1, 0x232($v0)
    ctx->pc = 0x14f2e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 562)));
    // 0x14f2ec: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x14f2ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14f2f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14f2f4: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x14f2f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x14f2f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14f2fc:
    // 0x14f2fc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14f300: 0xc066e08  jal         func_19B820
    ctx->pc = 0x14F300u;
    SET_GPR_U32(ctx, 31, 0x14F308u);
    ctx->pc = 0x14F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F300u;
    // 0x14f304: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B820u, 0x14F300u, 0x14F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F308u;
label_14f308:
    // 0x14f308: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14f308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14f30c: 0xc066daa  jal         func_19B6A8
    ctx->pc = 0x14F30Cu;
    SET_GPR_U32(ctx, 31, 0x14F314u);
    ctx->pc = 0x14F310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F30Cu;
    // 0x14f310: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x14F30Cu, 0x14F314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F314u;
label_14f314:
    // 0x14f314: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x14f314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x14f318: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14f318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14f31c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f31cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f320: 0xc066e14  jal         func_19B850
    ctx->pc = 0x14F320u;
    SET_GPR_U32(ctx, 31, 0x14F328u);
    ctx->pc = 0x14F324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F320u;
    // 0x14f324: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x14F320u, 0x14F328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F328u;
label_14f328:
    // 0x14f328: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14f328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14f32c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x14F32Cu;
    SET_GPR_U32(ctx, 31, 0x14F334u);
    ctx->pc = 0x14F330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F32Cu;
    // 0x14f330: 0x26050160  addiu       $a1, $s0, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x14F32Cu, 0x14F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F334u;
label_14f334:
    // 0x14f334: 0xc6000184  lwc1        $f0, 0x184($s0)
    ctx->pc = 0x14f334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f338: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14f338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14f33c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14f33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14f340: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14f340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f344: 0xc066e02  jal         func_19B808
    ctx->pc = 0x14F344u;
    SET_GPR_U32(ctx, 31, 0x14F34Cu);
    ctx->pc = 0x14F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F344u;
    // 0x14f348: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x14F344u, 0x14F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F34Cu;
label_14f34c:
    // 0x14f34c: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x14f34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f350: 0x11443c  dsll32      $t0, $s1, 16
    ctx->pc = 0x14f350u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 16));
    // 0x14f354: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x14f354u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x14f358: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x14f358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14f35c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x14f35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14f360: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x14f360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14f364: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x14f364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14f368: 0xc043274  jal         func_10C9D0
    ctx->pc = 0x14F368u;
    SET_GPR_U32(ctx, 31, 0x14F370u);
    ctx->pc = 0x14F36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F368u;
    // 0x14f36c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C9D0u, 0x14F368u, 0x14F370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F370u;
label_14f370:
    // 0x14f370: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14F370u;
    {
        const bool branch_taken_0x14f370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F370u;
        // 0x14f374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f370) {
            ctx->pc = 0x14F3ACu;
            goto label_14f3ac;
        }
    }
    ctx->pc = 0x14F378u;
    // 0x14f378: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14f378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14f37c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x14f37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14f380: 0xc066e08  jal         func_19B820
    ctx->pc = 0x14F380u;
    SET_GPR_U32(ctx, 31, 0x14F388u);
    ctx->pc = 0x14F384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F380u;
    // 0x14f384: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B820u, 0x14F380u, 0x14F388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F388u;
label_14f388:
    // 0x14f388: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x14f388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f38c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x14f38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f390: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f394: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x14f394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x14f398: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x14f398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f39c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x14f39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f3a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f3a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f3a4: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x14f3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x14f3a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14f3ac:
    // 0x14f3ac: 0xc0511f0  jal         func_1447C0
    ctx->pc = 0x14F3ACu;
    SET_GPR_U32(ctx, 31, 0x14F3B4u);
    ctx->pc = 0x1447C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1447C0u, 0x14F3ACu, 0x14F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F3B4u;
}
