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

// Function: entry_0020aeec
// Address: 0x20aeec - 0x20af18
void entry_0020aeec_0x20aeec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020aeec_0x20aeec");
#endif

    ctx->pc = 0x20aeecu;

    // 0x20aeec: 0x8f84911c  lw          $a0, -0x6EE4($gp)
    ctx->pc = 0x20aeecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938908)));
    // 0x20aef0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20aef4: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x20AEF4u;
    {
        const bool branch_taken_0x20aef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEF4u;
        // 0x20aef8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aef4) {
            ctx->pc = 0x20AF34u;
            return;
        }
    }
    ctx->pc = 0x20AEFCu;
    // 0x20aefc: 0x8f849118  lw          $a0, -0x6EE8($gp)
    ctx->pc = 0x20aefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
    // 0x20af00: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x20af00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20af04: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x20af04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x20af08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x20AF08u;
    {
        const bool branch_taken_0x20af08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF08u;
        // 0x20af0c: 0xaf839118  sw          $v1, -0x6EE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af08) {
            ctx->pc = 0x20AF18u;
            return;
        }
    }
    ctx->pc = 0x20AF10u;
    // 0x20af10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20AF10u;
    {
        const bool branch_taken_0x20af10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF10u;
        // 0x20af14: 0x8f839118  lw          $v1, -0x6EE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af10) {
            ctx->pc = 0x20AF1Cu;
            return;
        }
    }
    ctx->pc = 0x20AF18u;
}
