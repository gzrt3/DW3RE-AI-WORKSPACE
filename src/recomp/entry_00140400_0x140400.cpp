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

// Function: entry_00140400
// Address: 0x140400 - 0x140418
void entry_00140400_0x140400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140400_0x140400");
#endif

    ctx->pc = 0x140400u;

    // 0x140400: 0x86020222  lh          $v0, 0x222($s0)
    ctx->pc = 0x140400u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x140404: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x140404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x140408: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x140408u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14040c: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x14040cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x140410: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x140410u;
    {
        const bool branch_taken_0x140410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140410u;
        // 0x140414: 0xa6020222  sh          $v0, 0x222($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140410) {
            ctx->pc = 0x14053Cu;
            return;
        }
    }
    ctx->pc = 0x140418u;
}
