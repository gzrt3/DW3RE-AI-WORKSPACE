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

// Function: FUN_001ef660
// Address: 0x1ef660 - 0x1ef6dc
void FUN_001ef660_0x1ef660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ef660_0x1ef660");
#endif

    ctx->pc = 0x1ef660u;

    // 0x1ef660: 0x8f848f58  lw          $a0, -0x70A8($gp)
    ctx->pc = 0x1ef660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938456)));
    // 0x1ef664: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef668: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1EF668u;
    {
        const bool branch_taken_0x1ef668 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EF66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF668u;
        // 0x1ef66c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef668) {
            ctx->pc = 0x1EF6A8u;
            goto label_1ef6a8;
        }
    }
    ctx->pc = 0x1EF670u;
    // 0x1ef670: 0x8f848f54  lw          $a0, -0x70AC($gp)
    ctx->pc = 0x1ef670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938452)));
    // 0x1ef674: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1ef674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ef678: 0x28810008  slti        $at, $a0, 0x8
    ctx->pc = 0x1ef678u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ef67c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF67Cu;
    {
        const bool branch_taken_0x1ef67c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF67Cu;
        // 0x1ef680: 0xaf838f54  sw          $v1, -0x70AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef67c) {
            ctx->pc = 0x1EF68Cu;
            goto label_1ef68c;
        }
    }
    ctx->pc = 0x1EF684u;
    // 0x1ef684: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF684u;
    {
        const bool branch_taken_0x1ef684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF684u;
        // 0x1ef688: 0x8f838f54  lw          $v1, -0x70AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef684) {
            ctx->pc = 0x1EF690u;
            goto label_1ef690;
        }
    }
    ctx->pc = 0x1EF68Cu;
label_1ef68c:
    // 0x1ef68c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1ef68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ef690:
    // 0x1ef690: 0xaf838f54  sw          $v1, -0x70AC($gp)
    ctx->pc = 0x1ef690u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938452), GPR_U32(ctx, 3));
    // 0x1ef694: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x1ef694u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ef698: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EF698u;
    {
        const bool branch_taken_0x1ef698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef698) {
            ctx->pc = 0x1EF6DCu;
            return;
        }
    }
    ctx->pc = 0x1EF6A0u;
    // 0x1ef6a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EF6A0u;
    {
        const bool branch_taken_0x1ef6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6A0u;
        // 0x1ef6a4: 0xaf808f58  sw          $zero, -0x70A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6a0) {
            ctx->pc = 0x1EF6DCu;
            return;
        }
    }
    ctx->pc = 0x1EF6A8u;
label_1ef6a8:
    // 0x1ef6a8: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1EF6A8u;
    {
        const bool branch_taken_0x1ef6a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ef6a8) {
            ctx->pc = 0x1EF6DCu;
            return;
        }
    }
    ctx->pc = 0x1EF6B0u;
    // 0x1ef6b0: 0x8f848f54  lw          $a0, -0x70AC($gp)
    ctx->pc = 0x1ef6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938452)));
    // 0x1ef6b4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1ef6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ef6b8: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x1ef6b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ef6bc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF6BCu;
    {
        const bool branch_taken_0x1ef6bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6BCu;
        // 0x1ef6c0: 0xaf838f54  sw          $v1, -0x70AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6bc) {
            ctx->pc = 0x1EF6CCu;
            goto label_1ef6cc;
        }
    }
    ctx->pc = 0x1EF6C4u;
    // 0x1ef6c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF6C4u;
    {
        const bool branch_taken_0x1ef6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6C4u;
        // 0x1ef6c8: 0x8f838f54  lw          $v1, -0x70AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6c4) {
            ctx->pc = 0x1EF6D0u;
            goto label_1ef6d0;
        }
    }
    ctx->pc = 0x1EF6CCu;
label_1ef6cc:
    // 0x1ef6cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ef6ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef6d0:
    // 0x1ef6d0: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF6D0u;
    {
        const bool branch_taken_0x1ef6d0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1EF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6D0u;
        // 0x1ef6d4: 0xaf838f54  sw          $v1, -0x70AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6d0) {
            ctx->pc = 0x1EF6DCu;
            return;
        }
    }
    ctx->pc = 0x1EF6D8u;
    // 0x1ef6d8: 0xaf808f58  sw          $zero, -0x70A8($gp)
    ctx->pc = 0x1ef6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938456), GPR_U32(ctx, 0));
    ctx->pc = 0x1ef6dcu;
}
