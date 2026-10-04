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

// Function: entry_00226028
// Address: 0x226028 - 0x226050
void entry_00226028_0x226028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226028_0x226028");
#endif

    ctx->pc = 0x226028u;

    // 0x226028: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x226028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22602c: 0x10c2002e  beq         $a2, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x22602Cu;
    {
        const bool branch_taken_0x22602c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x22602c) {
            ctx->pc = 0x2260E8u;
            return;
        }
    }
    ctx->pc = 0x226034u;
    // 0x226034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226038: 0x10c2002b  beq         $a2, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x226038u;
    {
        const bool branch_taken_0x226038 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x226038) {
            ctx->pc = 0x2260E8u;
            return;
        }
    }
    ctx->pc = 0x226040u;
    // 0x226040: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x226040u;
    {
        const bool branch_taken_0x226040 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x226044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226040u;
        // 0x226044: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226040) {
            ctx->pc = 0x226050u;
            return;
        }
    }
    ctx->pc = 0x226048u;
    // 0x226048: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x226048u;
    {
        const bool branch_taken_0x226048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226048u;
        // 0x22604c: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226048) {
            ctx->pc = 0x226138u;
            return;
        }
    }
    ctx->pc = 0x226050u;
}
