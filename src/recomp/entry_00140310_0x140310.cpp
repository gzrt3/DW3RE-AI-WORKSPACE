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

// Function: entry_00140310
// Address: 0x140310 - 0x140334
void entry_00140310_0x140310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140310_0x140310");
#endif

    ctx->pc = 0x140310u;

    // 0x140310: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x140310u;
    {
        const bool branch_taken_0x140310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140310) {
            ctx->pc = 0x140418u;
            return;
        }
    }
    ctx->pc = 0x140318u;
    // 0x140318: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x140318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x14031c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x14031cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x140320: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x140320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x140324: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x140324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x140328: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14032c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x14032Cu;
    {
        const bool branch_taken_0x14032c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14032Cu;
        // 0x140330: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14032c) {
            ctx->pc = 0x14041Cu;
            return;
        }
    }
    ctx->pc = 0x140334u;
}
