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

// Function: FUN_002067c0
// Address: 0x2067c0 - 0x2067e4
void FUN_002067c0_0x2067c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002067c0_0x2067c0");
#endif

    switch (ctx->pc) {
        case 0x2067dcu: goto label_2067dc;
        default: break;
    }

    ctx->pc = 0x2067c0u;

    // 0x2067c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2067c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2067c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2067c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2067c8: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x2067c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2067cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2067CCu;
    {
        const bool branch_taken_0x2067cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2067cc) {
            ctx->pc = 0x2067E0u;
            goto label_2067e0;
        }
    }
    ctx->pc = 0x2067D4u;
    // 0x2067d4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x2067D4u;
    SET_GPR_U32(ctx, 31, 0x2067DCu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x2067D4u, 0x2067DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2067DCu;
label_2067dc:
    // 0x2067dc: 0xaf8090fc  sw          $zero, -0x6F04($gp)
    ctx->pc = 0x2067dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938876), GPR_U32(ctx, 0));
label_2067e0:
    // 0x2067e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2067e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2067e4u;
}
