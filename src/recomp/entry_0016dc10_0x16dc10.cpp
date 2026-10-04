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

// Function: entry_0016dc10
// Address: 0x16dc10 - 0x16dc48
void entry_0016dc10_0x16dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dc10_0x16dc10");
#endif

    ctx->pc = 0x16dc10u;

    // 0x16dc10: 0x8c22c9c4  lw          $v0, -0x363C($at)
    ctx->pc = 0x16dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953412)));
    // 0x16dc14: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16DC14u;
    {
        const bool branch_taken_0x16dc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC14u;
        // 0x16dc18: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc14) {
            ctx->pc = 0x16DC48u;
            return;
        }
    }
    ctx->pc = 0x16DC1Cu;
    // 0x16dc1c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x16dc20: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x16dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16dc24: 0x244266d0  addiu       $v0, $v0, 0x66D0
    ctx->pc = 0x16dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26320));
    // 0x16dc28: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x16dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16dc2c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x16dc30: 0x244266d4  addiu       $v0, $v0, 0x66D4
    ctx->pc = 0x16dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26324));
    // 0x16dc34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16dc38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16dc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16dc3c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x16dc3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16dc40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16DC40u;
    {
        const bool branch_taken_0x16dc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC40u;
        // 0x16dc44: 0x8f858170  lw          $a1, -0x7E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc40) {
            ctx->pc = 0x16DC70u;
            return;
        }
    }
    ctx->pc = 0x16DC48u;
}
