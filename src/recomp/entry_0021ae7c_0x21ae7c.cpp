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

// Function: entry_0021ae7c
// Address: 0x21ae7c - 0x21aeb8
void entry_0021ae7c_0x21ae7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ae7c_0x21ae7c");
#endif

    ctx->pc = 0x21ae7cu;

    // 0x21ae7c: 0x0  nop
    ctx->pc = 0x21ae7cu;
    // NOP
    // 0x21ae80: 0x8f8392ac  lw          $v1, -0x6D54($gp)
    ctx->pc = 0x21ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
    // 0x21ae84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21ae88: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21AE88u;
    {
        const bool branch_taken_0x21ae88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21ae88) {
            ctx->pc = 0x21AEC0u;
            return;
        }
    }
    ctx->pc = 0x21AE90u;
    // 0x21ae90: 0x8f8292a8  lw          $v0, -0x6D58($gp)
    ctx->pc = 0x21ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
    // 0x21ae94: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21ae94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21ae98: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x21AE98u;
    {
        const bool branch_taken_0x21ae98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ae98) {
            ctx->pc = 0x21AEC0u;
            return;
        }
    }
    ctx->pc = 0x21AEA0u;
    // 0x21aea0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x21aea4: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21aea4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21aea8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AEA8u;
    {
        const bool branch_taken_0x21aea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aea8) {
            ctx->pc = 0x21AEB8u;
            return;
        }
    }
    ctx->pc = 0x21AEB0u;
    // 0x21aeb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21AEB0u;
    {
        const bool branch_taken_0x21aeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEB0u;
        // 0x21aeb4: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aeb0) {
            ctx->pc = 0x21AEC0u;
            return;
        }
    }
    ctx->pc = 0x21AEB8u;
}
