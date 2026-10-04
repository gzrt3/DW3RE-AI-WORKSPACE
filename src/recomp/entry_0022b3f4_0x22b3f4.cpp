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

// Function: entry_0022b3f4
// Address: 0x22b3f4 - 0x22b418
void entry_0022b3f4_0x22b3f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b3f4_0x22b3f4");
#endif

    switch (ctx->pc) {
        case 0x22b410u: goto label_22b410;
        default: break;
    }

    ctx->pc = 0x22b3f4u;

    // 0x22b3f4: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x22b3f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x22b3f8: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x22b3f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x22b3fc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x22b3fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22b400: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B400u;
    {
        const bool branch_taken_0x22b400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b400) {
            ctx->pc = 0x22B418u;
            return;
        }
    }
    ctx->pc = 0x22B408u;
    // 0x22b408: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x22B408u;
    SET_GPR_U32(ctx, 31, 0x22B410u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22B408u, 0x22B410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B410u;
label_22b410:
    // 0x22b410: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22B410u;
    {
        const bool branch_taken_0x22b410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b410) {
            ctx->pc = 0x22B438u;
            return;
        }
    }
    ctx->pc = 0x22B418u;
}
