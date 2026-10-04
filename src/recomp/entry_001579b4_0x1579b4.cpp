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

// Function: entry_001579b4
// Address: 0x1579b4 - 0x1579d4
void entry_001579b4_0x1579b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001579b4_0x1579b4");
#endif

    ctx->pc = 0x1579b4u;

    // 0x1579b4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1579B4u;
    {
        const bool branch_taken_0x1579b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1579B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579B4u;
        // 0x1579b8: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1579b4) {
            ctx->pc = 0x1579D4u;
            return;
        }
    }
    ctx->pc = 0x1579BCu;
    // 0x1579bc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1579bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1579c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1579c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1579c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1579C4u;
    {
        const bool branch_taken_0x1579c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1579C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579C4u;
        // 0x1579c8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1579c4) {
            ctx->pc = 0x1579D8u;
            return;
        }
    }
    ctx->pc = 0x1579CCu;
    // 0x1579cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1579CCu;
    {
        const bool branch_taken_0x1579cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1579D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579CCu;
        // 0x1579d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1579cc) {
            ctx->pc = 0x157A18u;
            return;
        }
    }
    ctx->pc = 0x1579D4u;
}
