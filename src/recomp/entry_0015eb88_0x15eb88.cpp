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

// Function: entry_0015eb88
// Address: 0x15eb88 - 0x15ebac
void entry_0015eb88_0x15eb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015eb88_0x15eb88");
#endif

    ctx->pc = 0x15eb88u;

    // 0x15eb88: 0x0  nop
    ctx->pc = 0x15eb88u;
    // NOP
    // 0x15eb8c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15eb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15eb90: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x15eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x15eb94: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x15eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x15eb98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15eb9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15EB9Cu;
    {
        const bool branch_taken_0x15eb9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eb9c) {
            ctx->pc = 0x15EBACu;
            return;
        }
    }
    ctx->pc = 0x15EBA4u;
    // 0x15eba4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x15EBA4u;
    SET_GPR_U32(ctx, 31, 0x15EBACu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x15EBA4u, 0x15EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EBACu;
}
