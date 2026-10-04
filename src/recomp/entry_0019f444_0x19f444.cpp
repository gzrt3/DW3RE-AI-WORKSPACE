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

// Function: entry_0019f444
// Address: 0x19f444 - 0x19f470
void entry_0019f444_0x19f444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f444_0x19f444");
#endif

    ctx->pc = 0x19f444u;

    // 0x19f444: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19f444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19f448: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19f448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x19f44c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x19f44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x19f450: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x19f450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x19f454: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f454u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19f458: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x19f458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x19f45c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19f45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x19f460: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x19F460u;
    {
        const bool branch_taken_0x19f460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x19F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F460u;
        // 0x19f464: 0x3c033000  lui         $v1, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f460) {
            ctx->pc = 0x19F428u;
            return;
        }
    }
    ctx->pc = 0x19F468u;
    // 0x19f468: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F468u;
    {
        const bool branch_taken_0x19f468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F468u;
        // 0x19f46c: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f468) {
            ctx->pc = 0x19F47Cu;
            return;
        }
    }
    ctx->pc = 0x19F470u;
}
