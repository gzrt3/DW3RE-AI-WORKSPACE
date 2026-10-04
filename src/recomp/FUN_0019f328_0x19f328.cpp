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

// Function: FUN_0019f328
// Address: 0x19f328 - 0x19f3d0
void FUN_0019f328_0x19f328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019f328_0x19f328");
#endif

    switch (ctx->pc) {
        case 0x19f388u: goto label_19f388;
        case 0x19f39cu: goto label_19f39c;
        default: break;
    }

    ctx->pc = 0x19f328u;

    // 0x19f328: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19f328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19f32c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19f330: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19f330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19f334: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19f334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x19f338: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19f338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19f33c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19f33cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f340: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19f340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f348: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f34c: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x19f34cu;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002000u));
    // 0x19f350: 0x481001b  bgez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x19F350u;
    {
        const bool branch_taken_0x19f350 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F350u;
        // 0x19f354: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f350) {
            ctx->pc = 0x19F3C0u;
            goto label_19f3c0;
        }
    }
    ctx->pc = 0x19F358u;
    // 0x19f358: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19f35c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19f35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x19f360: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f360u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19f364: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x19f364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x19f368: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x19F368u;
    {
        const bool branch_taken_0x19f368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F368u;
        // 0x19f36c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f368) {
            ctx->pc = 0x19F3C4u;
            goto label_19f3c4;
        }
    }
    ctx->pc = 0x19F370u;
    // 0x19f370: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x19f370u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x19f374: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x19f374u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x19f378: 0x36312000  ori         $s1, $s1, 0x2000
    ctx->pc = 0x19f378u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8192);
    // 0x19f37c: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x19f37cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
    // 0x19f380: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19f380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f384: 0x0  nop
    ctx->pc = 0x19f384u;
    // NOP
label_19f388:
    // 0x19f388: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x19f38c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F38Cu;
    {
        const bool branch_taken_0x19f38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F38Cu;
        // 0x19f390: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f38c) {
            ctx->pc = 0x19F3A0u;
            goto label_19f3a0;
        }
    }
    ctx->pc = 0x19F394u;
    // 0x19f394: 0xc068b26  jal         func_1A2C98
    ctx->pc = 0x19F394u;
    SET_GPR_U32(ctx, 31, 0x19F39Cu);
    ctx->pc = 0x19F398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F394u;
    // 0x19f398: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C98u, 0x19F394u, 0x19F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F39Cu;
label_19f39c:
    // 0x19f39c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f3a0:
    // 0x19f3a0: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x19f3a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19f3a4: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19F3A4u;
    {
        const bool branch_taken_0x19f3a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3A4u;
        // 0x19f3a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3a4) {
            ctx->pc = 0x19F3C0u;
            goto label_19f3c0;
        }
    }
    ctx->pc = 0x19F3ACu;
    // 0x19f3ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19f3b0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x19f3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x19f3b4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x19F3B4u;
    {
        const bool branch_taken_0x19f3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3B4u;
        // 0x19f3b8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3b4) {
            ctx->pc = 0x19F388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f388;
        }
    }
    ctx->pc = 0x19F3BCu;
    // 0x19f3bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19f3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19f3c0:
    // 0x19f3c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19f3c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f3c4:
    // 0x19f3c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19f3c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f3c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f3c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f3cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f3ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x19f3d0u;
}
