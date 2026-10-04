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

// Function: entry_00199b78
// Address: 0x199b78 - 0x199ba8
void entry_00199b78_0x199b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199b78_0x199b78");
#endif

    ctx->pc = 0x199b78u;

    // 0x199b78: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x199b78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x199b7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x199b80: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x199b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x199b84: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x199b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x199b88: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x199b88u;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 4));
    // 0x199b8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x199b90: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x199b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x199b94: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x199B94u;
    {
        const bool branch_taken_0x199b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B94u;
        // 0x199b98: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b94) {
            ctx->pc = 0x199BC4u;
            return;
        }
    }
    ctx->pc = 0x199B9Cu;
    // 0x199b9c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x199b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x199ba0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x199ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x199ba4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199ba8u;
}
