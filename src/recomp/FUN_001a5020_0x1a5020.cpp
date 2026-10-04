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

// Function: FUN_001a5020
// Address: 0x1a5020 - 0x1a5030
void FUN_001a5020_0x1a5020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5020_0x1a5020");
#endif

    ctx->pc = 0x1a5020u;

    // 0x1a5020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a5020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a5024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5028: 0xc08e1ce  jal         func_238738
    ctx->pc = 0x1A5028u;
    SET_GPR_U32(ctx, 31, 0x1A5030u);
    ctx->pc = 0x238738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238738u, 0x1A5028u, 0x1A5030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5030u;
}
