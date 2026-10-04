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

// Function: entry_00111638
// Address: 0x111638 - 0x111670
void entry_00111638_0x111638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111638_0x111638");
#endif

    ctx->pc = 0x111638u;

    // 0x111638: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x111638u;
    {
        const bool branch_taken_0x111638 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111638u;
        // 0x11163c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111638) {
            ctx->pc = 0x111698u;
            return;
        }
    }
    ctx->pc = 0x111640u;
    // 0x111640: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111644: 0x1105000a  beq         $t0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x111644u;
    {
        const bool branch_taken_0x111644 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x111644) {
            ctx->pc = 0x111670u;
            return;
        }
    }
    ctx->pc = 0x11164Cu;
    // 0x11164c: 0x90870034  lbu         $a3, 0x34($a0)
    ctx->pc = 0x11164cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x111650: 0x2466000a  addiu       $a2, $v1, 0xA
    ctx->pc = 0x111650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x111654: 0x9085002a  lbu         $a1, 0x2A($a0)
    ctx->pc = 0x111654u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x111658: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x111658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x11165c: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x11165cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x111660: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x111660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x111664: 0x28a10025  slti        $at, $a1, 0x25
    ctx->pc = 0x111664u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x111668: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x111668u;
    {
        const bool branch_taken_0x111668 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x111668) {
            ctx->pc = 0x111690u;
            return;
        }
    }
    ctx->pc = 0x111670u;
}
