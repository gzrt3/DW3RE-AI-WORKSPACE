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

// Function: entry_00199214
// Address: 0x199214 - 0x199238
void entry_00199214_0x199214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199214_0x199214");
#endif

    ctx->pc = 0x199214u;

    // 0x199214: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x199218: 0x34423020  ori         $v0, $v0, 0x3020
    ctx->pc = 0x199218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12320);
    // 0x19921c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19921cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10003020u));
    // 0x199220: 0x30630c00  andi        $v1, $v1, 0xC00
    ctx->pc = 0x199220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3072);
    // 0x199224: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x199224u;
    {
        const bool branch_taken_0x199224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199224u;
        // 0x199228: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199224) {
            ctx->pc = 0x199254u;
            return;
        }
    }
    ctx->pc = 0x19922Cu;
    // 0x19922c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x19922cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x199230: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x199230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
    // 0x199234: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x199234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199238u;
}
