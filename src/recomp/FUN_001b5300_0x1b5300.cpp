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

// Function: FUN_001b5300
// Address: 0x1b5300 - 0x1b53b4
void FUN_001b5300_0x1b5300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b5300_0x1b5300");
#endif

    switch (ctx->pc) {
        case 0x1b5340u: goto label_1b5340;
        case 0x1b5350u: goto label_1b5350;
        case 0x1b5394u: goto label_1b5394;
        case 0x1b53acu: goto label_1b53ac;
        default: break;
    }

    ctx->pc = 0x1b5300u;

    // 0x1b5300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b5304: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b5304u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1b5308: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b5308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b530c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b530cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1b5310: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b5310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1b5314: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x1b5314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x1b5318: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b5318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b531c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b531cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b5320: 0x34630fd8  ori         $v1, $v1, 0xFD8
    ctx->pc = 0x1b5320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4056);
    // 0x1b5324: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1b5324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1b5328: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1b5328u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b532c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B532Cu;
    {
        const bool branch_taken_0x1b532c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b532c) {
            ctx->pc = 0x1B5348u;
            goto label_1b5348;
        }
    }
    ctx->pc = 0x1B5334u;
    // 0x1b5334: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1b5334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b5338: 0xc06d236  jal         func_1B48D8
    ctx->pc = 0x1B5338u;
    SET_GPR_U32(ctx, 31, 0x1B5340u);
    ctx->pc = 0x1B533Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5338u;
    // 0x1b533c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B48D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B48D8u, 0x1B5338u, 0x1B5340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5340u;
label_1b5340:
    // 0x1b5340: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1B5340u;
    {
        const bool branch_taken_0x1b5340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5340u;
        // 0x1b5344: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5340) {
            ctx->pc = 0x1B53E0u;
            return;
        }
    }
    ctx->pc = 0x1B5348u;
label_1b5348:
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
            goto label_1b53a0;
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
label_1b53a0:
    // 0x1b53a0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1b53a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b53a4: 0xc06cfb0  jal         func_1B3EC0
    ctx->pc = 0x1B53A4u;
    SET_GPR_U32(ctx, 31, 0x1B53ACu);
    ctx->pc = 0x1B53A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53A4u;
    // 0x1b53a8: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3EC0u, 0x1B53A4u, 0x1B53ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53ACu;
label_1b53ac:
    // 0x1b53ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B53ACu;
    {
        const bool branch_taken_0x1b53ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53ACu;
        // 0x1b53b0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53ac) {
            ctx->pc = 0x1B53E0u;
            return;
        }
    }
    ctx->pc = 0x1B53B4u;
}
