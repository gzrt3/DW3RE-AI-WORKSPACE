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

// Function: FUN_0013d490
// Address: 0x13d490 - 0x13d4c4
void FUN_0013d490_0x13d490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013d490_0x13d490");
#endif

    switch (ctx->pc) {
        case 0x13d4acu: goto label_13d4ac;
        case 0x13d4c0u: goto label_13d4c0;
        default: break;
    }

    ctx->pc = 0x13d490u;

    // 0x13d490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13d490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d498: 0x8f848548  lw          $a0, -0x7AB8($gp)
    ctx->pc = 0x13d498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935880)));
    // 0x13d49c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D49Cu;
    {
        const bool branch_taken_0x13d49c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d49c) {
            ctx->pc = 0x13D4ACu;
            goto label_13d4ac;
        }
    }
    ctx->pc = 0x13D4A4u;
    // 0x13d4a4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x13D4A4u;
    SET_GPR_U32(ctx, 31, 0x13D4ACu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x13D4A4u, 0x13D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4ACu;
label_13d4ac:
    // 0x13d4ac: 0x8f848550  lw          $a0, -0x7AB0($gp)
    ctx->pc = 0x13d4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935888)));
    // 0x13d4b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D4B0u;
    {
        const bool branch_taken_0x13d4b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d4b0) {
            ctx->pc = 0x13D4C0u;
            goto label_13d4c0;
        }
    }
    ctx->pc = 0x13D4B8u;
    // 0x13d4b8: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x13D4B8u;
    SET_GPR_U32(ctx, 31, 0x13D4C0u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x13D4B8u, 0x13D4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4C0u;
label_13d4c0:
    // 0x13d4c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13d4c4u;
}
