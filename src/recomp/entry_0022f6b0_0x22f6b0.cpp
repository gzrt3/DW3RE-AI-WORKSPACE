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

// Function: entry_0022f6b0
// Address: 0x22f6b0 - 0x22f6d8
void entry_0022f6b0_0x22f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f6b0_0x22f6b0");
#endif

    ctx->pc = 0x22f6b0u;

    // 0x22f6b0: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x22f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x22f6b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x22f6b8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x22f6bc: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
    // 0x22f6c0: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F6C0u;
    {
        const bool branch_taken_0x22f6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x22F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6C0u;
        // 0x22f6c4: 0x671021  addu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6c0) {
            ctx->pc = 0x22F6D8u;
            return;
        }
    }
    ctx->pc = 0x22F6C8u;
    // 0x22f6c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f6c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f6cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F6CCu;
    {
        const bool branch_taken_0x22f6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f6cc) {
            ctx->pc = 0x22F6D8u;
            return;
        }
    }
    ctx->pc = 0x22F6D4u;
    // 0x22f6d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22f6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x22f6d8u;
}
