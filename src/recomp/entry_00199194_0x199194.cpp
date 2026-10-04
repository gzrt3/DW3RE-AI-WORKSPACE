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

// Function: entry_00199194
// Address: 0x199194 - 0x1991c8
void entry_00199194_0x199194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199194_0x199194");
#endif

    ctx->pc = 0x199194u;

    // 0x199194: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x199198: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x199198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x19919c: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x19919cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x1991a0: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x1991a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x1991a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1991a4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10003C00u));
    // 0x1991a8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1991a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1991ac: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1991ACu;
    {
        const bool branch_taken_0x1991ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1991B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991ACu;
        // 0x1991b0: 0x3c031f00  lui         $v1, 0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7936 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991ac) {
            ctx->pc = 0x1991E4u;
            return;
        }
    }
    ctx->pc = 0x1991B4u;
    // 0x1991b4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1991b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1991b8: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x1991b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x1991bc: 0x34843c00  ori         $a0, $a0, 0x3C00
    ctx->pc = 0x1991bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15360);
    // 0x1991c0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1991c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1991c4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1991c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1991c8u;
}
