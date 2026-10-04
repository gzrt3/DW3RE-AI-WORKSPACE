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

// Function: entry_00135b30
// Address: 0x135b30 - 0x135b54
void entry_00135b30_0x135b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135b30_0x135b30");
#endif

    ctx->pc = 0x135b30u;

    // 0x135b30: 0x0  nop
    ctx->pc = 0x135b30u;
    // NOP
    // 0x135b34: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x135b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x135b38: 0x24639f20  addiu       $v1, $v1, -0x60E0
    ctx->pc = 0x135b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942496));
    // 0x135b3c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x135b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x135b40: 0x8c640514  lw          $a0, 0x514($v1)
    ctx->pc = 0x135b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1300)));
    // 0x135b44: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x135B44u;
    {
        const bool branch_taken_0x135b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x135b44) {
            ctx->pc = 0x135B54u;
            return;
        }
    }
    ctx->pc = 0x135B4Cu;
    // 0x135b4c: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x135B4Cu;
    SET_GPR_U32(ctx, 31, 0x135B54u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x135B4Cu, 0x135B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B54u;
}
