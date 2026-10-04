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

// Function: entry_00140790
// Address: 0x140790 - 0x1407ac
void entry_00140790_0x140790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140790_0x140790");
#endif

    ctx->pc = 0x140790u;

    // 0x140790: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x140790u;
    {
        const bool branch_taken_0x140790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140790) {
            ctx->pc = 0x1407B4u;
            return;
        }
    }
    ctx->pc = 0x140798u;
    // 0x140798: 0x8602021c  lh          $v0, 0x21C($s0)
    ctx->pc = 0x140798u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x14079c: 0x28410033  slti        $at, $v0, 0x33
    ctx->pc = 0x14079cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x1407a0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1407A0u;
    {
        const bool branch_taken_0x1407a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1407a0) {
            ctx->pc = 0x1407B4u;
            return;
        }
    }
    ctx->pc = 0x1407A8u;
    // 0x1407a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1407a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1407acu;
}
