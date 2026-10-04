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

// Function: entry_0012a95c
// Address: 0x12a95c - 0x12a97c
void entry_0012a95c_0x12a95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a95c_0x12a95c");
#endif

    switch (ctx->pc) {
        case 0x12a974u: goto label_12a974;
        default: break;
    }

    ctx->pc = 0x12a95cu;

    // 0x12a95c: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x12a95cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x12a960: 0x28420190  slti        $v0, $v0, 0x190
    ctx->pc = 0x12a960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x12a964: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A964u;
    {
        const bool branch_taken_0x12a964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a964) {
            ctx->pc = 0x12A97Cu;
            return;
        }
    }
    ctx->pc = 0x12A96Cu;
    // 0x12a96c: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12A96Cu;
    SET_GPR_U32(ctx, 31, 0x12A974u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12A96Cu, 0x12A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A974u;
label_12a974:
    // 0x12a974: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x12A974u;
    {
        const bool branch_taken_0x12a974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a974) {
            ctx->pc = 0x12A9FCu;
            return;
        }
    }
    ctx->pc = 0x12A97Cu;
}
