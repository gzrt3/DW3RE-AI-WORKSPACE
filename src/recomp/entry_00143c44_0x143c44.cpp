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

// Function: entry_00143c44
// Address: 0x143c44 - 0x143c64
void entry_00143c44_0x143c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143c44_0x143c44");
#endif

    ctx->pc = 0x143c44u;

    // 0x143c44: 0x8f868590  lw          $a2, -0x7A70($gp)
    ctx->pc = 0x143c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x143c48: 0x30c3000c  andi        $v1, $a2, 0xC
    ctx->pc = 0x143c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
    // 0x143c4c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x143C4Cu;
    {
        const bool branch_taken_0x143c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x143C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C4Cu;
        // 0x143c50: 0x2403004f  addiu       $v1, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c4c) {
            ctx->pc = 0x143C64u;
            return;
        }
    }
    ctx->pc = 0x143C54u;
    // 0x143c54: 0x30c30020  andi        $v1, $a2, 0x20
    ctx->pc = 0x143c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x143c58: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x143C58u;
    {
        const bool branch_taken_0x143c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143c58) {
            ctx->pc = 0x143C94u;
            return;
        }
    }
    ctx->pc = 0x143C60u;
    // 0x143c60: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x143c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->pc = 0x143c64u;
}
