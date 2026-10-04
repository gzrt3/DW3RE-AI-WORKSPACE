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

// Function: entry_00137204
// Address: 0x137204 - 0x137228
void entry_00137204_0x137204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137204_0x137204");
#endif

    ctx->pc = 0x137204u;

    // 0x137204: 0x0  nop
    ctx->pc = 0x137204u;
    // NOP
    // 0x137208: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x137208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x13720c: 0x24635060  addiu       $v1, $v1, 0x5060
    ctx->pc = 0x13720cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20576));
    // 0x137210: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x137210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x137214: 0x90830294  lbu         $v1, 0x294($a0)
    ctx->pc = 0x137214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 660)));
    // 0x137218: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x137218u;
    {
        const bool branch_taken_0x137218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x137218) {
            ctx->pc = 0x137228u;
            return;
        }
    }
    ctx->pc = 0x137220u;
    // 0x137220: 0xc04de48  jal         func_137920
    ctx->pc = 0x137220u;
    SET_GPR_U32(ctx, 31, 0x137228u);
    ctx->pc = 0x137920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137920u, 0x137220u, 0x137228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137228u;
}
