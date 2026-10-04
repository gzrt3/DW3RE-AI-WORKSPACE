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

// Function: FUN_001fd690
// Address: 0x1fd690 - 0x1fd6bc
void FUN_001fd690_0x1fd690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fd690_0x1fd690");
#endif

    ctx->pc = 0x1fd690u;

    // 0x1fd690: 0x8f839054  lw          $v1, -0x6FAC($gp)
    ctx->pc = 0x1fd690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938708)));
    // 0x1fd694: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD694u;
    {
        const bool branch_taken_0x1fd694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd694) {
            ctx->pc = 0x1FD6BCu;
            return;
        }
    }
    ctx->pc = 0x1FD69Cu;
    // 0x1fd69c: 0x8f839050  lw          $v1, -0x6FB0($gp)
    ctx->pc = 0x1fd69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938704)));
    // 0x1fd6a0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1fd6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fd6a4: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD6A4u;
    {
        const bool branch_taken_0x1fd6a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1FD6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6A4u;
        // 0x1fd6a8: 0x3083001f  andi        $v1, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd6a4) {
            ctx->pc = 0x1FD6B8u;
            goto label_1fd6b8;
        }
    }
    ctx->pc = 0x1FD6ACu;
    // 0x1fd6ac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD6ACu;
    {
        const bool branch_taken_0x1fd6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd6ac) {
            ctx->pc = 0x1FD6B8u;
            goto label_1fd6b8;
        }
    }
    ctx->pc = 0x1FD6B4u;
    // 0x1fd6b4: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x1fd6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_1fd6b8:
    // 0x1fd6b8: 0xaf839050  sw          $v1, -0x6FB0($gp)
    ctx->pc = 0x1fd6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938704), GPR_U32(ctx, 3));
    ctx->pc = 0x1fd6bcu;
}
