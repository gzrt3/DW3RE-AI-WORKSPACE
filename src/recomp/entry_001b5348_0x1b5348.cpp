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

// Function: entry_001b5348
// Address: 0x1b5348 - 0x1b53a0
void entry_001b5348_0x1b5348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5348_0x1b5348");
#endif

    switch (ctx->pc) {
        case 0x1b5350u: goto label_1b5350;
        case 0x1b5394u: goto label_1b5394;
        default: break;
    }

    ctx->pc = 0x1b5348u;

    // 0x1b5348: 0xc06ce88  jal         func_1B3A20
    ctx->pc = 0x1B5348u;
    SET_GPR_U32(ctx, 31, 0x1B5350u);
    ctx->pc = 0x1B534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5348u;
    // 0x1b534c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A20u, 0x1B5348u, 0x1B5350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5350u;
label_1b5350:
    // 0x1b5350: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b5350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5354: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x1b5354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1b5358: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B5358u;
    {
        const bool branch_taken_0x1b5358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5358u;
        // 0x1b535c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5358) {
            ctx->pc = 0x1B53A0u;
            return;
        }
    }
    ctx->pc = 0x1B5360u;
    // 0x1b5360: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5360u;
    {
        const bool branch_taken_0x1b5360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5360) {
            ctx->pc = 0x1B5364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5360u;
            // 0x1b5364: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5378u;
            goto label_1b5378;
        }
    }
    ctx->pc = 0x1B5368u;
    // 0x1b5368: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5368u;
    {
        const bool branch_taken_0x1b5368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5368u;
        // 0x1b536c: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5368) {
            ctx->pc = 0x1B5388u;
            goto label_1b5388;
        }
    }
    ctx->pc = 0x1B5370u;
    // 0x1b5370: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B5370u;
    {
        const bool branch_taken_0x1b5370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5370) {
            ctx->pc = 0x1B53D0u;
            return;
        }
    }
    ctx->pc = 0x1B5378u;
label_1b5378:
    // 0x1b5378: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B5378u;
    {
        const bool branch_taken_0x1b5378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5378u;
        // 0x1b537c: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5378) {
            ctx->pc = 0x1B53B8u;
            return;
        }
    }
    ctx->pc = 0x1B5380u;
    // 0x1b5380: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B5380u;
    {
        const bool branch_taken_0x1b5380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5380) {
            ctx->pc = 0x1B53D0u;
            return;
        }
    }
    ctx->pc = 0x1B5388u;
label_1b5388:
    // 0x1b5388: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b5388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b538c: 0xc06d236  jal         func_1B48D8
    ctx->pc = 0x1B538Cu;
    SET_GPR_U32(ctx, 31, 0x1B5394u);
    ctx->pc = 0x1B5390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B538Cu;
    // 0x1b5390: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B48D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B48D8u, 0x1B538Cu, 0x1B5394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5394u;
label_1b5394:
    // 0x1b5394: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B5394u;
    {
        const bool branch_taken_0x1b5394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5394u;
        // 0x1b5398: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5394) {
            ctx->pc = 0x1B53E0u;
            return;
        }
    }
    ctx->pc = 0x1B539Cu;
    // 0x1b539c: 0x0  nop
    ctx->pc = 0x1b539cu;
    // NOP
    ctx->pc = 0x1b53a0u;
}
