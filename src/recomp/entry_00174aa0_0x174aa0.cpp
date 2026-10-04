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

// Function: entry_00174aa0
// Address: 0x174aa0 - 0x174ad4
void entry_00174aa0_0x174aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174aa0_0x174aa0");
#endif

    ctx->pc = 0x174aa0u;

    // 0x174aa0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x174aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x174aa4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x174aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x174aa8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x174AA8u;
    {
        const bool branch_taken_0x174aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x174AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AA8u;
        // 0x174aac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174aa8) {
            ctx->pc = 0x174AD8u;
            return;
        }
    }
    ctx->pc = 0x174AB0u;
    // 0x174ab0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x174ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x174ab4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x174AB4u;
    {
        const bool branch_taken_0x174ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x174ab4) {
            ctx->pc = 0x174AD4u;
            return;
        }
    }
    ctx->pc = 0x174ABCu;
    // 0x174abc: 0x1460007c  bnez        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x174ABCu;
    {
        const bool branch_taken_0x174abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174abc) {
            ctx->pc = 0x174CB0u;
            return;
        }
    }
    ctx->pc = 0x174AC4u;
    // 0x174ac4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x174ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174ac8: 0x28420017  slti        $v0, $v0, 0x17
    ctx->pc = 0x174ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x174acc: 0x14400078  bnez        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x174ACCu;
    {
        const bool branch_taken_0x174acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174acc) {
            ctx->pc = 0x174CB0u;
            return;
        }
    }
    ctx->pc = 0x174AD4u;
}
