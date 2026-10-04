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

// Function: entry_001b6b98
// Address: 0x1b6b98 - 0x1b6bd0
void entry_001b6b98_0x1b6b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6b98_0x1b6b98");
#endif

    ctx->pc = 0x1b6b98u;

    // 0x1b6b98: 0x1300006e  beqz        $t8, . + 4 + (0x6E << 2)
    ctx->pc = 0x1B6B98u;
    {
        const bool branch_taken_0x1b6b98 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B98u;
        // 0x1b6b9c: 0xd103c  dsll32      $v0, $t5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b98) {
            ctx->pc = 0x1B6D54u;
            return;
        }
    }
    ctx->pc = 0x1B6BA0u;
    // 0x1b6ba0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6ba4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6ba8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6bac: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6bacu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1b6bb0: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b6bb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1b6bb4: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1b6bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1b6bb8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b6bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1b6bbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b6bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b6bc0: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6bc0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1b6bc4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1B6BC4u;
    {
        const bool branch_taken_0x1b6bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BC4u;
        // 0x1b6bc8: 0x1625825  or          $t3, $t3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6bc4) {
            ctx->pc = 0x1B6D50u;
            return;
        }
    }
    ctx->pc = 0x1B6BCCu;
    // 0x1b6bcc: 0x0  nop
    ctx->pc = 0x1b6bccu;
    // NOP
    ctx->pc = 0x1b6bd0u;
}
