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

// Function: entry_0012f668
// Address: 0x12f668 - 0x12f68c
void entry_0012f668_0x12f668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f668_0x12f668");
#endif

    switch (ctx->pc) {
        case 0x12f684u: goto label_12f684;
        default: break;
    }

    ctx->pc = 0x12f668u;

    // 0x12f668: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x12f668u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12f66c: 0x960202f8  lhu         $v0, 0x2F8($s0)
    ctx->pc = 0x12f66cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x12f670: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x12f670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12f674: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F674u;
    {
        const bool branch_taken_0x12f674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f674) {
            ctx->pc = 0x12F68Cu;
            return;
        }
    }
    ctx->pc = 0x12F67Cu;
    // 0x12f67c: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12F67Cu;
    SET_GPR_U32(ctx, 31, 0x12F684u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12F67Cu, 0x12F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F684u;
label_12f684:
    // 0x12f684: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x12F684u;
    {
        const bool branch_taken_0x12f684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f684) {
            ctx->pc = 0x12FA08u;
            return;
        }
    }
    ctx->pc = 0x12F68Cu;
}
