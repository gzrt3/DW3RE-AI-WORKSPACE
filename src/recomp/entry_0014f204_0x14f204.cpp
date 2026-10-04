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

// Function: entry_0014f204
// Address: 0x14f204 - 0x14f21c
void entry_0014f204_0x14f204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f204_0x14f204");
#endif

    ctx->pc = 0x14f204u;

    // 0x14f204: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x14f204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x14f208: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x14f208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x14f20c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F20Cu;
    {
        const bool branch_taken_0x14f20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F20Cu;
        // 0x14f210: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f20c) {
            ctx->pc = 0x14F21Cu;
            return;
        }
    }
    ctx->pc = 0x14F214u;
    // 0x14f214: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x14F214u;
    {
        const bool branch_taken_0x14f214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F214u;
        // 0x14f218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f214) {
            ctx->pc = 0x14F29Cu;
            return;
        }
    }
    ctx->pc = 0x14F21Cu;
}
