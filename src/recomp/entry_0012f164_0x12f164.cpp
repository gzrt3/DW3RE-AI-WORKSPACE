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

// Function: entry_0012f164
// Address: 0x12f164 - 0x12f184
void entry_0012f164_0x12f164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f164_0x12f164");
#endif

    switch (ctx->pc) {
        case 0x12f17cu: goto label_12f17c;
        default: break;
    }

    ctx->pc = 0x12f164u;

    // 0x12f164: 0x948302e6  lhu         $v1, 0x2E6($a0)
    ctx->pc = 0x12f164u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
    // 0x12f168: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x12f168u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12f16c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F16Cu;
    {
        const bool branch_taken_0x12f16c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f16c) {
            ctx->pc = 0x12F184u;
            return;
        }
    }
    ctx->pc = 0x12F174u;
    // 0x12f174: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12F174u;
    SET_GPR_U32(ctx, 31, 0x12F17Cu);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12F174u, 0x12F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F17Cu;
label_12f17c:
    // 0x12f17c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x12F17Cu;
    {
        const bool branch_taken_0x12f17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f17c) {
            ctx->pc = 0x12F230u;
            return;
        }
    }
    ctx->pc = 0x12F184u;
}
