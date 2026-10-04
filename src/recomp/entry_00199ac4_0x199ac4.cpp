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

// Function: entry_00199ac4
// Address: 0x199ac4 - 0x199ae8
void entry_00199ac4_0x199ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199ac4_0x199ac4");
#endif

    ctx->pc = 0x199ac4u;

    // 0x199ac4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x199ac8: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x199ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x199acc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199accu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x199ad0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x199ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x199ad4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x199AD4u;
    {
        const bool branch_taken_0x199ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AD4u;
        // 0x199ad8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ad4) {
            ctx->pc = 0x199B04u;
            return;
        }
    }
    ctx->pc = 0x199ADCu;
    // 0x199adc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x199adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x199ae0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x199ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x199ae4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199ae8u;
}
