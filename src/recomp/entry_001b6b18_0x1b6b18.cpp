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

// Function: entry_001b6b18
// Address: 0x1b6b18 - 0x1b6b38
void entry_001b6b18_0x1b6b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6b18_0x1b6b18");
#endif

    ctx->pc = 0x1b6b18u;

    // 0x1b6b18: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1b6b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b6b1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6B1Cu;
    {
        const bool branch_taken_0x1b6b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B1Cu;
        // 0x1b6b20: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b1c) {
            ctx->pc = 0x1B6B38u;
            return;
        }
    }
    ctx->pc = 0x1B6B24u;
    // 0x1b6b24: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1b6b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b6b28: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b6b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b6b2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6B2Cu;
    {
        const bool branch_taken_0x1b6b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B2Cu;
        // 0x1b6b30: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b2c) {
            ctx->pc = 0x1B6B4Cu;
            return;
        }
    }
    ctx->pc = 0x1B6B34u;
    // 0x1b6b34: 0x0  nop
    ctx->pc = 0x1b6b34u;
    // NOP
    ctx->pc = 0x1b6b38u;
}
