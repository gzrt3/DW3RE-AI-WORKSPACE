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

// Function: entry_00226bf4
// Address: 0x226bf4 - 0x226c24
void entry_00226bf4_0x226bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226bf4_0x226bf4");
#endif

    switch (ctx->pc) {
        case 0x226c04u: goto label_226c04;
        case 0x226c1cu: goto label_226c1c;
        default: break;
    }

    ctx->pc = 0x226bf4u;

    // 0x226bf4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x226bf8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226bfc: 0xc04494c  jal         func_112530
    ctx->pc = 0x226BFCu;
    SET_GPR_U32(ctx, 31, 0x226C04u);
    ctx->pc = 0x226C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226BFCu;
    // 0x226c00: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x226BFCu, 0x226C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C04u;
label_226c04:
    // 0x226c04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226C04u;
    {
        const bool branch_taken_0x226c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226c04) {
            ctx->pc = 0x226C24u;
            return;
        }
    }
    ctx->pc = 0x226C0Cu;
    // 0x226c0c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x226c10: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226c14: 0xc044934  jal         func_1124D0
    ctx->pc = 0x226C14u;
    SET_GPR_U32(ctx, 31, 0x226C1Cu);
    ctx->pc = 0x226C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C14u;
    // 0x226c18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226C14u, 0x226C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C1Cu;
label_226c1c:
    // 0x226c1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x226C1Cu;
    {
        const bool branch_taken_0x226c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226c1c) {
            ctx->pc = 0x226C34u;
            return;
        }
    }
    ctx->pc = 0x226C24u;
}
