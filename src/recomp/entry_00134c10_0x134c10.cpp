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

// Function: entry_00134c10
// Address: 0x134c10 - 0x134c38
void entry_00134c10_0x134c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134c10_0x134c10");
#endif

    ctx->pc = 0x134c10u;

    // 0x134c10: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x134c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134c14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134c18: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x134C18u;
    {
        const bool branch_taken_0x134c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x134C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C18u;
        // 0x134c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c18) {
            ctx->pc = 0x134C64u;
            return;
        }
    }
    ctx->pc = 0x134C20u;
    // 0x134c20: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x134C20u;
    {
        const bool branch_taken_0x134c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C20u;
        // 0x134c24: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c20) {
            ctx->pc = 0x134C50u;
            return;
        }
    }
    ctx->pc = 0x134C28u;
    // 0x134c28: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134C28u;
    {
        const bool branch_taken_0x134c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134c28) {
            ctx->pc = 0x134C38u;
            return;
        }
    }
    ctx->pc = 0x134C30u;
    // 0x134c30: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x134C30u;
    {
        const bool branch_taken_0x134c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c30) {
            ctx->pc = 0x134C78u;
            return;
        }
    }
    ctx->pc = 0x134C38u;
}
