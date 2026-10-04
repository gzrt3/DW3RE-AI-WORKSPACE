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

// Function: entry_00128d44
// Address: 0x128d44 - 0x128d5c
void entry_00128d44_0x128d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128d44_0x128d44");
#endif

    switch (ctx->pc) {
        case 0x128d4cu: goto label_128d4c;
        default: break;
    }

    ctx->pc = 0x128d44u;

    // 0x128d44: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x128D44u;
    SET_GPR_U32(ctx, 31, 0x128D4Cu);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x128D44u, 0x128D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D4Cu;
label_128d4c:
    // 0x128d4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x128D4Cu;
    {
        const bool branch_taken_0x128d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128d4c) {
            ctx->pc = 0x128D5Cu;
            return;
        }
    }
    ctx->pc = 0x128D54u;
    // 0x128d54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x128d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x128d58: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x128d58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x128d5cu;
}
