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

// Function: entry_001c88b8
// Address: 0x1c88b8 - 0x1c88cc
void entry_001c88b8_0x1c88b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c88b8_0x1c88b8");
#endif

    ctx->pc = 0x1c88b8u;

    // 0x1c88b8: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1c88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x1c88bc: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C88BCu;
    {
        const bool branch_taken_0x1c88bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88BCu;
        // 0x1c88c0: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88bc) {
            ctx->pc = 0x1C88CCu;
            return;
        }
    }
    ctx->pc = 0x1C88C4u;
    // 0x1c88c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C88C4u;
    {
        const bool branch_taken_0x1c88c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C88C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88C4u;
        // 0x1c88c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88c4) {
            ctx->pc = 0x1C88E0u;
            return;
        }
    }
    ctx->pc = 0x1C88CCu;
}
