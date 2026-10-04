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

// Function: entry_0011534c
// Address: 0x11534c - 0x115370
void entry_0011534c_0x11534c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011534c_0x11534c");
#endif

    ctx->pc = 0x11534cu;

    // 0x11534c: 0xae071d70  sw          $a3, 0x1D70($s0)
    ctx->pc = 0x11534cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7536), GPR_U32(ctx, 7));
    // 0x115350: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x115350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x115354: 0xdc440030  ld          $a0, 0x30($v0)
    ctx->pc = 0x115354u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x115358: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x115358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11535c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x11535cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x115360: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x115360u;
    {
        const bool branch_taken_0x115360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115360u;
        // 0x115364: 0x24030100  addiu       $v1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115360) {
            ctx->pc = 0x115370u;
            return;
        }
    }
    ctx->pc = 0x115368u;
    // 0x115368: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115368u;
    {
        const bool branch_taken_0x115368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115368u;
        // 0x11536c: 0x2405004e  addiu       $a1, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115368) {
            ctx->pc = 0x115384u;
            return;
        }
    }
    ctx->pc = 0x115370u;
}
