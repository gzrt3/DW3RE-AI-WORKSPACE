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

// Function: entry_0021a4b0
// Address: 0x21a4b0 - 0x21a4e8
void entry_0021a4b0_0x21a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a4b0_0x21a4b0");
#endif

    ctx->pc = 0x21a4b0u;

    // 0x21a4b0: 0x8f8392ac  lw          $v1, -0x6D54($gp)
    ctx->pc = 0x21a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
    // 0x21a4b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21a4b8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21A4B8u;
    {
        const bool branch_taken_0x21a4b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21a4b8) {
            ctx->pc = 0x21A4F0u;
            return;
        }
    }
    ctx->pc = 0x21A4C0u;
    // 0x21a4c0: 0x8f8292a8  lw          $v0, -0x6D58($gp)
    ctx->pc = 0x21a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
    // 0x21a4c4: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21a4c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21a4c8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x21A4C8u;
    {
        const bool branch_taken_0x21a4c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a4c8) {
            ctx->pc = 0x21A4F0u;
            return;
        }
    }
    ctx->pc = 0x21A4D0u;
    // 0x21a4d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x21a4d4: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21a4d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21a4d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A4D8u;
    {
        const bool branch_taken_0x21a4d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a4d8) {
            ctx->pc = 0x21A4E8u;
            return;
        }
    }
    ctx->pc = 0x21A4E0u;
    // 0x21a4e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21A4E0u;
    {
        const bool branch_taken_0x21a4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4E0u;
        // 0x21a4e4: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4e0) {
            ctx->pc = 0x21A4F0u;
            return;
        }
    }
    ctx->pc = 0x21A4E8u;
}
