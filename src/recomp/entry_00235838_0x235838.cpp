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

// Function: entry_00235838
// Address: 0x235838 - 0x235848
void entry_00235838_0x235838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235838_0x235838");
#endif

    switch (ctx->pc) {
        case 0x235840u: goto label_235840;
        default: break;
    }

    ctx->pc = 0x235838u;

    // 0x235838: 0xc069210  jal         func_1A4840
    ctx->pc = 0x235838u;
    SET_GPR_U32(ctx, 31, 0x235840u);
    ctx->pc = 0x23583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235838u;
    // 0x23583c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x235838u, 0x235840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235840u;
label_235840:
    // 0x235840: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x235848u;
}
