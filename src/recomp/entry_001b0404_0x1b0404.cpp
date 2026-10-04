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

// Function: entry_001b0404
// Address: 0x1b0404 - 0x1b0478
void entry_001b0404_0x1b0404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0404_0x1b0404");
#endif

    switch (ctx->pc) {
        case 0x1b040cu: goto label_1b040c;
        default: break;
    }

    ctx->pc = 0x1b0404u;

    // 0x1b0404: 0xc06be60  jal         func_1AF980
    ctx->pc = 0x1B0404u;
    SET_GPR_U32(ctx, 31, 0x1B040Cu);
    ctx->pc = 0x1B0408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0404u;
    // 0x1b0408: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF980u, 0x1B0404u, 0x1B040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B040Cu;
label_1b040c:
    // 0x1b040c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1B040Cu;
    {
        const bool branch_taken_0x1b040c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B040Cu;
        // 0x1b0410: 0x3c080029  lui         $t0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b040c) {
            ctx->pc = 0x1B0544u;
            return;
        }
    }
    ctx->pc = 0x1B0414u;
    // 0x1b0414: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x1b0414u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x1b0418: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x1b0418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x1b041c: 0x3c130029  lui         $s3, 0x29
    ctx->pc = 0x1b041cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)41 << 16));
    // 0x1b0420: 0xae540008  sw          $s4, 0x8($s2)
    ctx->pc = 0x1b0420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
    // 0x1b0424: 0x26648380  addiu       $a0, $s3, -0x7C80
    ctx->pc = 0x1b0424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935424));
    // 0x1b0428: 0x25058440  addiu       $a1, $t0, -0x7BC0
    ctx->pc = 0x1b0428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935616));
    // 0x1b042c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b042cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0430: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b0430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0434: 0xa242000c  sb          $v0, 0xC($s2)
    ctx->pc = 0x1b0434u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b0438: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b0438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b043c: 0xa243000d  sb          $v1, 0xD($s2)
    ctx->pc = 0x1b043cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b0440: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1b0440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1b0444: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x1b0444u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x1b0448: 0xa242000e  sb          $v0, 0xE($s2)
    ctx->pc = 0x1b0448u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b044c: 0xae450014  sw          $a1, 0x14($s2)
    ctx->pc = 0x1b044cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 5));
    // 0x1b0450: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x1b0450u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1b0454: 0x10e60008  beq         $a3, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0454u;
    {
        const bool branch_taken_0x1b0454 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1B0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0454u;
        // 0x1b0458: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0454) {
            ctx->pc = 0x1B0478u;
            return;
        }
    }
    ctx->pc = 0x1B045Cu;
    // 0x1b045c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B045Cu;
    {
        const bool branch_taken_0x1b045c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B045Cu;
        // 0x1b0460: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b045c) {
            ctx->pc = 0x1B0488u;
            return;
        }
    }
    ctx->pc = 0x1B0464u;
    // 0x1b0464: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b0464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0468: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0468u;
    {
        const bool branch_taken_0x1b0468 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0468u;
        // 0x1b046c: 0x24020924  addiu       $v0, $zero, 0x924 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0468) {
            ctx->pc = 0x1B0484u;
            return;
        }
    }
    ctx->pc = 0x1B0470u;
    // 0x1b0470: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0470u;
    {
        const bool branch_taken_0x1b0470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0470) {
            ctx->pc = 0x1B0488u;
            return;
        }
    }
    ctx->pc = 0x1B0478u;
}
