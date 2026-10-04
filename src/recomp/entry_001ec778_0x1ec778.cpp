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

// Function: entry_001ec778
// Address: 0x1ec778 - 0x1ec78c
void entry_001ec778_0x1ec778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec778_0x1ec778");
#endif

    ctx->pc = 0x1ec778u;

    // 0x1ec778: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x1ec778u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1ec77c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC77Cu;
    {
        const bool branch_taken_0x1ec77c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC77Cu;
        // 0x1ec780: 0xa81021  addu        $v0, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec77c) {
            ctx->pc = 0x1EC78Cu;
            return;
        }
    }
    ctx->pc = 0x1EC784u;
    // 0x1ec784: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC784u;
    {
        const bool branch_taken_0x1ec784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC784u;
        // 0x1ec788: 0xa04306c3  sb          $v1, 0x6C3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1731), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec784) {
            ctx->pc = 0x1EC798u;
            return;
        }
    }
    ctx->pc = 0x1EC78Cu;
}
