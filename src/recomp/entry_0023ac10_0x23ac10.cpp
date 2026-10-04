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

// Function: entry_0023ac10
// Address: 0x23ac10 - 0x23ac24
void entry_0023ac10_0x23ac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ac10_0x23ac10");
#endif

    ctx->pc = 0x23ac10u;

    // 0x23ac10: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x23ac10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x23ac14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23AC14u;
    {
        const bool branch_taken_0x23ac14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC14u;
        // 0x23ac18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac14) {
            ctx->pc = 0x23AC24u;
            return;
        }
    }
    ctx->pc = 0x23AC1Cu;
    // 0x23ac1c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x23ac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23ac20: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x23ac20u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    ctx->pc = 0x23ac24u;
}
