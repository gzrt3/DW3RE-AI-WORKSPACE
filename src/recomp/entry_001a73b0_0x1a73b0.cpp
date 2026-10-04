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

// Function: entry_001a73b0
// Address: 0x1a73b0 - 0x1a7420
void entry_001a73b0_0x1a73b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a73b0_0x1a73b0");
#endif

    switch (ctx->pc) {
        case 0x1a73c8u: goto label_1a73c8;
        case 0x1a73fcu: goto label_1a73fc;
        case 0x1a7404u: goto label_1a7404;
        default: break;
    }

    ctx->pc = 0x1a73b0u;

label_1a73b0:
    // 0x1a73b0: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x1a73b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1a73b4:
    // 0x1a73b4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1a73b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a73b8:
    // 0x1a73b8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1a73bc:
    if (ctx->pc == 0x1A73BCu) {
        ctx->pc = 0x1A73BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73B8u;
        // 0x1a73bc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A73C0u;
        goto label_1a73c0;
    }
    ctx->pc = 0x1A73B8u;
    {
        const bool branch_taken_0x1a73b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a73b8) {
            ctx->pc = 0x1A73BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A73B8u;
            // 0x1a73bc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A73ECu;
            goto label_1a73ec;
        }
    }
    ctx->pc = 0x1A73C0u;
label_1a73c0:
    // 0x1a73c0: 0x40f809  jalr        $v0
label_1a73c4:
    if (ctx->pc == 0x1A73C4u) {
        ctx->pc = 0x1A73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73C0u;
        // 0x1a73c4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A73C8u;
        goto label_1a73c8;
    }
    ctx->pc = 0x1A73C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A73C8u);
        ctx->pc = 0x1A73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73C0u;
        // 0x1a73c4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A73C0u, 0x1A73C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A73C8u;
label_1a73c8:
    // 0x1a73c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a73cc:
    if (ctx->pc == 0x1A73CCu) {
        ctx->pc = 0x1A73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73C8u;
        // 0x1a73cc: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A73D0u;
        goto label_1a73d0;
    }
    ctx->pc = 0x1A73C8u;
    {
        const bool branch_taken_0x1a73c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73C8u;
        // 0x1a73cc: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73c8) {
            ctx->pc = 0x1A73E8u;
            goto label_1a73e8;
        }
    }
    ctx->pc = 0x1A73D0u;
label_1a73d0:
    // 0x1a73d0: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x1a73d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1a73d4:
    // 0x1a73d4: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1a73d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1a73d8:
    // 0x1a73d8: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1a73d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1a73dc:
    // 0x1a73dc: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1a73dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_1a73e0:
    // 0x1a73e0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1a73e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1a73e4:
    // 0x1a73e4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1a73e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_1a73e8:
    // 0x1a73e8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a73e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a73ec:
    // 0x1a73ec: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_1a73f0:
    if (ctx->pc == 0x1A73F0u) {
        ctx->pc = 0x1A73F4u;
        goto label_1a73f4;
    }
    ctx->pc = 0x1A73ECu;
    {
        const bool branch_taken_0x1a73ec = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1a73ec) {
            ctx->pc = 0x1A73FCu;
            goto label_1a73fc;
        }
    }
    ctx->pc = 0x1A73F4u;
label_1a73f4:
    // 0x1a73f4: 0xc069214  jal         func_1A4850
label_1a73f8:
    if (ctx->pc == 0x1A73F8u) {
        ctx->pc = 0x1A73FCu;
        goto label_1a73fc;
    }
    ctx->pc = 0x1A73F4u;
    SET_GPR_U32(ctx, 31, 0x1A73FCu);
    ctx->pc = 0x1A4850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4850u, 0x1A73F4u, 0x1A73FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A73FCu;
label_1a73fc:
    // 0x1a73fc: 0xc069cb6  jal         func_1A72D8
label_1a7400:
    if (ctx->pc == 0x1A7400u) {
        ctx->pc = 0x1A7400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73FCu;
        // 0x1a7400: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7404u;
        goto label_1a7404;
    }
    ctx->pc = 0x1A73FCu;
    SET_GPR_U32(ctx, 31, 0x1A7404u);
    ctx->pc = 0x1A7400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A73FCu;
    // 0x1a7400: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72D8u, 0x1A73FCu, 0x1A7404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7404u;
label_1a7404:
    // 0x1a7404: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a7404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1a7408:
    // 0x1a7408: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a740c:
    // 0x1a740c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a740cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a7410:
    // 0x1a7410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7414:
    // 0x1a7414: 0x3e00008  jr          $ra
label_1a7418:
    if (ctx->pc == 0x1A7418u) {
        ctx->pc = 0x1A7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7414u;
        // 0x1a7418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A741Cu;
        goto label_1a741c;
    }
    ctx->pc = 0x1A7414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7414u;
        // 0x1a7418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A741Cu;
label_1a741c:
    // 0x1a741c: 0x0  nop
    ctx->pc = 0x1a741cu;
    // NOP
    ctx->pc = 0x1a7420u;
}
