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

// Function: entry_00226b34
// Address: 0x226b34 - 0x226b64
void entry_00226b34_0x226b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226b34_0x226b34");
#endif

    switch (ctx->pc) {
        case 0x226b44u: goto label_226b44;
        case 0x226b5cu: goto label_226b5c;
        default: break;
    }

    ctx->pc = 0x226b34u;

    // 0x226b34: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x226b38: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226b3c: 0xc04494c  jal         func_112530
    ctx->pc = 0x226B3Cu;
    SET_GPR_U32(ctx, 31, 0x226B44u);
    ctx->pc = 0x226B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B3Cu;
    // 0x226b40: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x226B3Cu, 0x226B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B44u;
label_226b44:
    // 0x226b44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226B44u;
    {
        const bool branch_taken_0x226b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b44) {
            ctx->pc = 0x226B64u;
            return;
        }
    }
    ctx->pc = 0x226B4Cu;
    // 0x226b4c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x226b50: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226b54: 0xc044934  jal         func_1124D0
    ctx->pc = 0x226B54u;
    SET_GPR_U32(ctx, 31, 0x226B5Cu);
    ctx->pc = 0x226B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B54u;
    // 0x226b58: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226B54u, 0x226B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B5Cu;
label_226b5c:
    // 0x226b5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x226B5Cu;
    {
        const bool branch_taken_0x226b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b5c) {
            ctx->pc = 0x226B8Cu;
            return;
        }
    }
    ctx->pc = 0x226B64u;
}
