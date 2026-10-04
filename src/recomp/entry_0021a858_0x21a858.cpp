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

// Function: entry_0021a858
// Address: 0x21a858 - 0x21a884
void entry_0021a858_0x21a858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a858_0x21a858");
#endif

    ctx->pc = 0x21a858u;

    // 0x21a858: 0x8f839290  lw          $v1, -0x6D70($gp)
    ctx->pc = 0x21a858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21a85c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a860: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21A860u;
    {
        const bool branch_taken_0x21a860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a860) {
            ctx->pc = 0x21A8A0u;
            return;
        }
    }
    ctx->pc = 0x21A868u;
    // 0x21a868: 0x8f82928c  lw          $v0, -0x6D74($gp)
    ctx->pc = 0x21a868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21a86c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x21a870: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x21a870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x21a874: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A874u;
    {
        const bool branch_taken_0x21a874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a874) {
            ctx->pc = 0x21A884u;
            return;
        }
    }
    ctx->pc = 0x21A87Cu;
    // 0x21a87c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21A87Cu;
    {
        const bool branch_taken_0x21a87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A87Cu;
        // 0x21a880: 0xaf82928c  sw          $v0, -0x6D74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a87c) {
            ctx->pc = 0x21A88Cu;
            return;
        }
    }
    ctx->pc = 0x21A884u;
}
