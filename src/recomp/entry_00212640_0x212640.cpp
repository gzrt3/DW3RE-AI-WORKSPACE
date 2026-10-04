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

// Function: entry_00212640
// Address: 0x212640 - 0x212650
void entry_00212640_0x212640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212640_0x212640");
#endif

    ctx->pc = 0x212640u;

    // 0x212640: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x212640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x212644: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x212644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x212648: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x212648u;
    {
        const bool branch_taken_0x212648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212648u;
        // 0x21264c: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212648) {
            ctx->pc = 0x212614u;
            return;
        }
    }
    ctx->pc = 0x212650u;
}
