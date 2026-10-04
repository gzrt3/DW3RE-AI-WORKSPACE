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

// Function: entry_00227a84
// Address: 0x227a84 - 0x227abc
void entry_00227a84_0x227a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227a84_0x227a84");
#endif

    ctx->pc = 0x227a84u;

    // 0x227a84: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x227a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x227a88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x227a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x227a8c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x227A8Cu;
    {
        const bool branch_taken_0x227a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A8Cu;
        // 0x227a90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a8c) {
            ctx->pc = 0x227AC0u;
            return;
        }
    }
    ctx->pc = 0x227A94u;
    // 0x227a94: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x227a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x227a98: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x227A98u;
    {
        const bool branch_taken_0x227a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A98u;
        // 0x227a9c: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a98) {
            ctx->pc = 0x227ABCu;
            return;
        }
    }
    ctx->pc = 0x227AA0u;
    // 0x227aa0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227AA0u;
    {
        const bool branch_taken_0x227aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x227aa0) {
            ctx->pc = 0x227ABCu;
            return;
        }
    }
    ctx->pc = 0x227AA8u;
    // 0x227aa8: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x227aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x227aac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227AACu;
    {
        const bool branch_taken_0x227aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AACu;
        // 0x227ab0: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227aac) {
            ctx->pc = 0x227ABCu;
            return;
        }
    }
    ctx->pc = 0x227AB4u;
    // 0x227ab4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227AB4u;
    {
        const bool branch_taken_0x227ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227ab4) {
            ctx->pc = 0x227AC8u;
            return;
        }
    }
    ctx->pc = 0x227ABCu;
}
