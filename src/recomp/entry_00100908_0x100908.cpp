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

// Function: entry_00100908
// Address: 0x100908 - 0x10092c
void entry_00100908_0x100908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100908_0x100908");
#endif

    ctx->pc = 0x100908u;

    // 0x100908: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x100908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x10090c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10090Cu;
    {
        const bool branch_taken_0x10090c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10090Cu;
        // 0x100910: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10090c) {
            ctx->pc = 0x10092Cu;
            return;
        }
    }
    ctx->pc = 0x100914u;
    // 0x100914: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x100914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x100918: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x100918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x10091c: 0x2442b0a0  addiu       $v0, $v0, -0x4F60
    ctx->pc = 0x10091cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946976));
    // 0x100920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100924: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x100924u;
    {
        const bool branch_taken_0x100924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100924u;
        // 0x100928: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100924) {
            ctx->pc = 0x100940u;
            return;
        }
    }
    ctx->pc = 0x10092Cu;
}
