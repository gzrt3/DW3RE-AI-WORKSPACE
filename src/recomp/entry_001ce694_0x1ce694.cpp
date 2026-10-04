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

// Function: entry_001ce694
// Address: 0x1ce694 - 0x1ce6f4
void entry_001ce694_0x1ce694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce694_0x1ce694");
#endif

    switch (ctx->pc) {
        case 0x1ce6acu: goto label_1ce6ac;
        case 0x1ce6b4u: goto label_1ce6b4;
        case 0x1ce6e8u: goto label_1ce6e8;
        default: break;
    }

    ctx->pc = 0x1ce694u;

    // 0x1ce694: 0x960202e6  lhu         $v0, 0x2E6($s0)
    ctx->pc = 0x1ce694u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x1ce698: 0x28410043  slti        $at, $v0, 0x43
    ctx->pc = 0x1ce698u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)67) ? 1 : 0);
    // 0x1ce69c: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CE69Cu;
    {
        const bool branch_taken_0x1ce69c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE69Cu;
        // 0x1ce6a0: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce69c) {
            ctx->pc = 0x1CE6F4u;
            return;
        }
    }
    ctx->pc = 0x1CE6A4u;
    // 0x1ce6a4: 0xc071740  jal         func_1C5D00
    ctx->pc = 0x1CE6A4u;
    SET_GPR_U32(ctx, 31, 0x1CE6ACu);
    ctx->pc = 0x1CE6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6A4u;
    // 0x1ce6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D00u, 0x1CE6A4u, 0x1CE6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE6ACu;
label_1ce6ac:
    // 0x1ce6ac: 0xc071728  jal         func_1C5CA0
    ctx->pc = 0x1CE6ACu;
    SET_GPR_U32(ctx, 31, 0x1CE6B4u);
    ctx->pc = 0x1CE6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6ACu;
    // 0x1ce6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CA0u, 0x1CE6ACu, 0x1CE6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE6B4u;
label_1ce6b4:
    // 0x1ce6b4: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x1ce6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce6b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ce6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce6bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce6bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce6c0: 0x0  nop
    ctx->pc = 0x1ce6c0u;
    // NOP
    // 0x1ce6c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ce6c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce6c8: 0x0  nop
    ctx->pc = 0x1ce6c8u;
    // NOP
    // 0x1ce6cc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE6CCu;
    {
        const bool branch_taken_0x1ce6cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6CCu;
        // 0x1ce6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce6cc) {
            ctx->pc = 0x1CE6E0u;
            goto label_1ce6e0;
        }
    }
    ctx->pc = 0x1CE6D4u;
    // 0x1ce6d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ce6d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ce6d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE6D8u;
    {
        const bool branch_taken_0x1ce6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6D8u;
        // 0x1ce6dc: 0xe6000300  swc1        $f0, 0x300($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce6d8) {
            ctx->pc = 0x1CE6F0u;
            goto label_1ce6f0;
        }
    }
    ctx->pc = 0x1CE6E0u;
label_1ce6e0:
    // 0x1ce6e0: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x1CE6E0u;
    SET_GPR_U32(ctx, 31, 0x1CE6E8u);
    ctx->pc = 0x1CE6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6E0u;
    // 0x1ce6e4: 0xae000300  sw          $zero, 0x300($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1CE6E0u, 0x1CE6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE6E8u;
label_1ce6e8:
    // 0x1ce6e8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1CE6E8u;
    {
        const bool branch_taken_0x1ce6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce6e8) {
            ctx->pc = 0x1CE7F8u;
            return;
        }
    }
    ctx->pc = 0x1CE6F0u;
label_1ce6f0:
    // 0x1ce6f0: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1ce6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->pc = 0x1ce6f4u;
}
