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

// Function: entry_001b7c84
// Address: 0x1b7c84 - 0x1b7ca8
void entry_001b7c84_0x1b7c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7c84_0x1b7c84");
#endif

    ctx->pc = 0x1b7c84u;

    // 0x1b7c84: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x1b7c84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7c88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b7c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7c8c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1b7c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1b7c90: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1b7c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1b7c94: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B7C94u;
    {
        const bool branch_taken_0x1b7c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C94u;
        // 0x1b7c98: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c94) {
            ctx->pc = 0x1B7CCCu;
            return;
        }
    }
    ctx->pc = 0x1B7C9Cu;
    // 0x1b7c9c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1b7c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7ca0: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x1b7ca0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x1b7ca4: 0x0  nop
    ctx->pc = 0x1b7ca4u;
    // NOP
    ctx->pc = 0x1b7ca8u;
}
