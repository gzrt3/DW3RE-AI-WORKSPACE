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

// Function: entry_0021a7a8
// Address: 0x21a7a8 - 0x21a7e0
void entry_0021a7a8_0x21a7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a7a8_0x21a7a8");
#endif

    ctx->pc = 0x21a7a8u;

    // 0x21a7a8: 0x8f8392ac  lw          $v1, -0x6D54($gp)
    ctx->pc = 0x21a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
    // 0x21a7ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21a7b0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21A7B0u;
    {
        const bool branch_taken_0x21a7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21a7b0) {
            ctx->pc = 0x21A7E8u;
            return;
        }
    }
    ctx->pc = 0x21A7B8u;
    // 0x21a7b8: 0x8f8292a8  lw          $v0, -0x6D58($gp)
    ctx->pc = 0x21a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
    // 0x21a7bc: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21a7bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21a7c0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x21A7C0u;
    {
        const bool branch_taken_0x21a7c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a7c0) {
            ctx->pc = 0x21A7E8u;
            return;
        }
    }
    ctx->pc = 0x21A7C8u;
    // 0x21a7c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x21a7cc: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21a7ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21a7d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A7D0u;
    {
        const bool branch_taken_0x21a7d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a7d0) {
            ctx->pc = 0x21A7E0u;
            return;
        }
    }
    ctx->pc = 0x21A7D8u;
    // 0x21a7d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21A7D8u;
    {
        const bool branch_taken_0x21a7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A7D8u;
        // 0x21a7dc: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a7d8) {
            ctx->pc = 0x21A7E8u;
            return;
        }
    }
    ctx->pc = 0x21A7E0u;
}
