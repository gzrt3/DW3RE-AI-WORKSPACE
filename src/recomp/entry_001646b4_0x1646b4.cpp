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

// Function: entry_001646b4
// Address: 0x1646b4 - 0x1646cc
void entry_001646b4_0x1646b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001646b4_0x1646b4");
#endif

    ctx->pc = 0x1646b4u;

    // 0x1646b4: 0x0  nop
    ctx->pc = 0x1646b4u;
    // NOP
    // 0x1646b8: 0x28c20032  slti        $v0, $a2, 0x32
    ctx->pc = 0x1646b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1646bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1646BCu;
    {
        const bool branch_taken_0x1646bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1646C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646BCu;
        // 0x1646c0: 0x24031560  addiu       $v1, $zero, 0x1560 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646bc) {
            ctx->pc = 0x1646CCu;
            return;
        }
    }
    ctx->pc = 0x1646C4u;
    // 0x1646c4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1646C4u;
    {
        const bool branch_taken_0x1646c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1646C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646C4u;
        // 0x1646c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646c4) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x1646CCu;
}
