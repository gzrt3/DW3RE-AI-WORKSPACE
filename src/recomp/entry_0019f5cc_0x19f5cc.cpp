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

// Function: entry_0019f5cc
// Address: 0x19f5cc - 0x19f5f8
void entry_0019f5cc_0x19f5cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f5cc_0x19f5cc");
#endif

    ctx->pc = 0x19f5ccu;

    // 0x19f5cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19f5d0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x19f5d4: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x19f5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x19f5d8: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x19f5d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x19f5dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19f5e0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x19f5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x19f5e4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19f5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x19f5e8: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x19F5E8u;
    {
        const bool branch_taken_0x19f5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x19F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5E8u;
        // 0x19f5ec: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5e8) {
            ctx->pc = 0x19F5B0u;
            return;
        }
    }
    ctx->pc = 0x19F5F0u;
    // 0x19f5f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F5F0u;
    {
        const bool branch_taken_0x19f5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5F0u;
        // 0x19f5f4: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5f0) {
            ctx->pc = 0x19F604u;
            return;
        }
    }
    ctx->pc = 0x19F5F8u;
}
