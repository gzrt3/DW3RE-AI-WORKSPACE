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

// Function: entry_00195a18
// Address: 0x195a18 - 0x195a2c
void entry_00195a18_0x195a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195a18_0x195a18");
#endif

    ctx->pc = 0x195a18u;

    // 0x195a18: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x195a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x195a1c: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195A1Cu;
    {
        const bool branch_taken_0x195a1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x195A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A1Cu;
        // 0x195a20: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a1c) {
            ctx->pc = 0x195A2Cu;
            return;
        }
    }
    ctx->pc = 0x195A24u;
    // 0x195a24: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x195A24u;
    {
        const bool branch_taken_0x195a24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x195a24) {
            ctx->pc = 0x195A38u;
            return;
        }
    }
    ctx->pc = 0x195A2Cu;
}
