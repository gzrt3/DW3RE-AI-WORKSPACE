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

// Function: entry_00226d34
// Address: 0x226d34 - 0x226d40
void entry_00226d34_0x226d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226d34_0x226d34");
#endif

    switch (ctx->pc) {
        case 0x226d3cu: goto label_226d3c;
        default: break;
    }

    ctx->pc = 0x226d34u;

    // 0x226d34: 0xc059eb8  jal         func_167AE0
    ctx->pc = 0x226D34u;
    SET_GPR_U32(ctx, 31, 0x226D3Cu);
    ctx->pc = 0x226D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D34u;
    // 0x226d38: 0x90840004  lbu         $a0, 0x4($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x226D34u, 0x226D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D3Cu;
label_226d3c:
    // 0x226d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x226d40u;
}
