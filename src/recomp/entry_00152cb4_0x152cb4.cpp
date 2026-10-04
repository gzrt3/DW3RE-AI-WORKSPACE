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

// Function: entry_00152cb4
// Address: 0x152cb4 - 0x152cd4
void entry_00152cb4_0x152cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152cb4_0x152cb4");
#endif

    ctx->pc = 0x152cb4u;

    // 0x152cb4: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x152cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x152cb8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x152CB8u;
    {
        const bool branch_taken_0x152cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CB8u;
        // 0x152cbc: 0x7343c  dsll32      $a2, $a3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152cb8) {
            ctx->pc = 0x152CE8u;
            return;
        }
    }
    ctx->pc = 0x152CC0u;
    // 0x152cc0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x152cc0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x152cc4: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x152CC4u;
    {
        const bool branch_taken_0x152cc4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x152CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CC4u;
        // 0x152cc8: 0x61883  sra         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152cc4) {
            ctx->pc = 0x152CD4u;
            return;
        }
    }
    ctx->pc = 0x152CCCu;
    // 0x152ccc: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x152cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x152cd0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x152cd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    ctx->pc = 0x152cd4u;
}
