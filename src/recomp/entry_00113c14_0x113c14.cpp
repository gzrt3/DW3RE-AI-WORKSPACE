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

// Function: entry_00113c14
// Address: 0x113c14 - 0x113c24
void entry_00113c14_0x113c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113c14_0x113c14");
#endif

    ctx->pc = 0x113c14u;

    // 0x113c14: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x113c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x113c18: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x113C18u;
    {
        const bool branch_taken_0x113c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C18u;
        // 0x113c1c: 0x8d090008  lw          $t1, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c18) {
            ctx->pc = 0x113C8Cu;
            return;
        }
    }
    ctx->pc = 0x113C20u;
    // 0x113c20: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x113c20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x113c24u;
}
