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

// Function: entry_00199d1c
// Address: 0x199d1c - 0x199d50
void entry_00199d1c_0x199d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199d1c_0x199d1c");
#endif

    ctx->pc = 0x199d1cu;

    // 0x199d1c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x199d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x199d20: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x199d24: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x199d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x199d28: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x199d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x199d2c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x199d2cu;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 4));
    // 0x199d30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199d30u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x199d34: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x199d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x199d38: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x199D38u;
    {
        const bool branch_taken_0x199d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D38u;
        // 0x199d3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d38) {
            ctx->pc = 0x199D6Cu;
            return;
        }
    }
    ctx->pc = 0x199D40u;
    // 0x199d40: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199d44: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x199d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x199d48: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x199d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x199d4c: 0x0  nop
    ctx->pc = 0x199d4cu;
    // NOP
    ctx->pc = 0x199d50u;
}
