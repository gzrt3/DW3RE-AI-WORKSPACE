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

// Function: entry_002174b8
// Address: 0x2174b8 - 0x217570
void entry_002174b8_0x2174b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002174b8_0x2174b8");
#endif

    ctx->pc = 0x2174b8u;

    // 0x2174b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2174b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2174bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2174bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2174c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2174C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2174C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174C0u;
        // 0x2174c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2174C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2174C8u;
    // 0x2174c8: 0x0  nop
    ctx->pc = 0x2174c8u;
    // NOP
    // 0x2174cc: 0x0  nop
    ctx->pc = 0x2174ccu;
    // NOP
    // 0x2174d0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2174d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2174d4: 0xc4208a98  lwc1        $f0, -0x7568($at)
    ctx->pc = 0x2174d4u;
    { uint32_t bits = FAST_READ32(0x588A98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2174d8: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x2174d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x2174dc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2174dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2174e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2174E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2174E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174E0u;
        // 0x2174e4: 0xe4208a98  swc1        $f0, -0x7568($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2174E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2174E8u;
    // 0x2174e8: 0x0  nop
    ctx->pc = 0x2174e8u;
    // NOP
    // 0x2174ec: 0x0  nop
    ctx->pc = 0x2174ecu;
    // NOP
    // 0x2174f0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2174f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2174f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2174F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2174F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174F4u;
        // 0x2174f8: 0xc4208a98  lwc1        $f0, -0x7568($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2174F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2174FCu;
    // 0x2174fc: 0x0  nop
    ctx->pc = 0x2174fcu;
    // NOP
    // 0x217500: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x217500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x217504: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x217504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x217508: 0x9025490c  lbu         $a1, 0x490C($at)
    ctx->pc = 0x217508u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x21750c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21750Cu;
    {
        const bool branch_taken_0x21750c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x217510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21750Cu;
        // 0x217510: 0x24030049  addiu       $v1, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21750c) {
            ctx->pc = 0x21751Cu;
            goto label_21751c;
        }
    }
    ctx->pc = 0x217514u;
    // 0x217514: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x217514u;
    {
        const bool branch_taken_0x217514 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x217514) {
            ctx->pc = 0x217530u;
            goto label_217530;
        }
    }
    ctx->pc = 0x21751Cu;
label_21751c:
    // 0x21751c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21751cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217520: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x217520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217524: 0x64280a  movz        $a1, $v1, $a0
    ctx->pc = 0x217524u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x217528: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x217528u;
    {
        const bool branch_taken_0x217528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217528u;
        // 0x21752c: 0xaf859248  sw          $a1, -0x6DB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217528) {
            ctx->pc = 0x21753Cu;
            goto label_21753c;
        }
    }
    ctx->pc = 0x217530u;
label_217530:
    // 0x217530: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x217530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217534: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x217534u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x217538: 0xaf839248  sw          $v1, -0x6DB8($gp)
    ctx->pc = 0x217538u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 3));
label_21753c:
    // 0x21753c: 0x3e00008  jr          $ra
    ctx->pc = 0x21753Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21753Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217544u;
    // 0x217544: 0x0  nop
    ctx->pc = 0x217544u;
    // NOP
    // 0x217548: 0x0  nop
    ctx->pc = 0x217548u;
    // NOP
    // 0x21754c: 0x0  nop
    ctx->pc = 0x21754cu;
    // NOP
    // 0x217550: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x217550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x217554: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x217554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x217558: 0x2442d8b0  addiu       $v0, $v0, -0x2750
    ctx->pc = 0x217558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957232));
    // 0x21755c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21755cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217560: 0x3e00008  jr          $ra
    ctx->pc = 0x217560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217560u;
        // 0x217564: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217568u;
    // 0x217568: 0x0  nop
    ctx->pc = 0x217568u;
    // NOP
    // 0x21756c: 0x0  nop
    ctx->pc = 0x21756cu;
    // NOP
    ctx->pc = 0x217570u;
}
