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

// Function: entry_0020553c
// Address: 0x20553c - 0x205578
void entry_0020553c_0x20553c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020553c_0x20553c");
#endif

    ctx->pc = 0x20553cu;

    // 0x20553c: 0x8f8590f8  lw          $a1, -0x6F08($gp)
    ctx->pc = 0x20553cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x205540: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x205540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205544: 0x8ca42480  lw          $a0, 0x2480($a1)
    ctx->pc = 0x205544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9344)));
    // 0x205548: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x205548u;
    {
        const bool branch_taken_0x205548 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205548u;
        // 0x20554c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205548) {
            ctx->pc = 0x2055A0u;
            return;
        }
    }
    ctx->pc = 0x205550u;
    // 0x205550: 0x8ca42484  lw          $a0, 0x2484($a1)
    ctx->pc = 0x205550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9348)));
    // 0x205554: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x205554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x205558: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x205558u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x20555c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x20555Cu;
    {
        const bool branch_taken_0x20555c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x205560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20555Cu;
        // 0x205560: 0xaca32484  sw          $v1, 0x2484($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 9348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20555c) {
            ctx->pc = 0x205578u;
            return;
        }
    }
    ctx->pc = 0x205564u;
    // 0x205564: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x205564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x205568: 0x8c852484  lw          $a1, 0x2484($a0)
    ctx->pc = 0x205568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9348)));
    // 0x20556c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x20556cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x205570: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x205570u;
    {
        const bool branch_taken_0x205570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205570u;
        // 0x205574: 0xac832484  sw          $v1, 0x2484($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 9348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205570) {
            ctx->pc = 0x20557Cu;
            return;
        }
    }
    ctx->pc = 0x205578u;
}
