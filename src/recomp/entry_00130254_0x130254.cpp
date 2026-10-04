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

// Function: entry_00130254
// Address: 0x130254 - 0x130260
void entry_00130254_0x130254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130254_0x130254");
#endif

    switch (ctx->pc) {
        case 0x13025cu: goto label_13025c;
        default: break;
    }

    ctx->pc = 0x130254u;

    // 0x130254: 0xc059e78  jal         func_1679E0
    ctx->pc = 0x130254u;
    SET_GPR_U32(ctx, 31, 0x13025Cu);
    ctx->pc = 0x130258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130254u;
    // 0x130258: 0x90840002  lbu         $a0, 0x2($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1679E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1679E0u, 0x130254u, 0x13025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13025Cu;
label_13025c:
    // 0x13025c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13025cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x130260u;
}
