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

// Function: entry_001643fc
// Address: 0x1643fc - 0x164414
void entry_001643fc_0x1643fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001643fc_0x1643fc");
#endif

    ctx->pc = 0x1643fcu;

    // 0x1643fc: 0x0  nop
    ctx->pc = 0x1643fcu;
    // NOP
    // 0x164400: 0x28e2001e  slti        $v0, $a3, 0x1E
    ctx->pc = 0x164400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x164404: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164404u;
    {
        const bool branch_taken_0x164404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164404u;
        // 0x164408: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164404) {
            ctx->pc = 0x164414u;
            return;
        }
    }
    ctx->pc = 0x16440Cu;
    // 0x16440c: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x16440Cu;
    {
        const bool branch_taken_0x16440c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16440Cu;
        // 0x164410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16440c) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x164414u;
}
