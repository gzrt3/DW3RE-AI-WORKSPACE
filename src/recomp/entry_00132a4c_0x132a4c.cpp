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

// Function: entry_00132a4c
// Address: 0x132a4c - 0x132a84
void entry_00132a4c_0x132a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132a4c_0x132a4c");
#endif

    ctx->pc = 0x132a4cu;

    // 0x132a4c: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x132A4Cu;
    {
        const bool branch_taken_0x132a4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x132A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A4Cu;
        // 0x132a50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a4c) {
            ctx->pc = 0x132A84u;
            return;
        }
    }
    ctx->pc = 0x132A54u;
    // 0x132a54: 0x28c10089  slti        $at, $a2, 0x89
    ctx->pc = 0x132a54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)137) ? 1 : 0);
    // 0x132a58: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x132A58u;
    {
        const bool branch_taken_0x132a58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x132a58) {
            ctx->pc = 0x132A84u;
            return;
        }
    }
    ctx->pc = 0x132A60u;
    // 0x132a60: 0x24c6fff7  addiu       $a2, $a2, -0x9
    ctx->pc = 0x132a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967287));
    // 0x132a64: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x132a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x132a68: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x132a68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x132a6c: 0x2484a4c0  addiu       $a0, $a0, -0x5B40
    ctx->pc = 0x132a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943936));
    // 0x132a70: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x132a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x132a74: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x132a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x132a78: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x132a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x132a7c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x132a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x132a80: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x132a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->pc = 0x132a84u;
}
