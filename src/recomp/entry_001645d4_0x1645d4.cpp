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

// Function: entry_001645d4
// Address: 0x1645d4 - 0x1645ec
void entry_001645d4_0x1645d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001645d4_0x1645d4");
#endif

    ctx->pc = 0x1645d4u;

    // 0x1645d4: 0x0  nop
    ctx->pc = 0x1645d4u;
    // NOP
    // 0x1645d8: 0x28e20258  slti        $v0, $a3, 0x258
    ctx->pc = 0x1645d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1645dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1645DCu;
    {
        const bool branch_taken_0x1645dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1645E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645DCu;
        // 0x1645e0: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645dc) {
            ctx->pc = 0x1645ECu;
            return;
        }
    }
    ctx->pc = 0x1645E4u;
    // 0x1645e4: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1645E4u;
    {
        const bool branch_taken_0x1645e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1645E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645E4u;
        // 0x1645e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645e4) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x1645ECu;
}
