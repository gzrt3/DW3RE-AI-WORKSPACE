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

// Function: entry_0011291c
// Address: 0x11291c - 0x11293c
void entry_0011291c_0x11291c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011291c_0x11291c");
#endif

    switch (ctx->pc) {
        case 0x112938u: goto label_112938;
        default: break;
    }

    ctx->pc = 0x11291cu;

    // 0x11291c: 0x0  nop
    ctx->pc = 0x11291cu;
    // NOP
    // 0x112920: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x112920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x112924: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x112924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x112928: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x112928u;
    {
        const bool branch_taken_0x112928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112928u;
        // 0x11292c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112928) {
            ctx->pc = 0x1128D8u;
            return;
        }
    }
    ctx->pc = 0x112930u;
    // 0x112930: 0xc06559c  jal         func_195670
    ctx->pc = 0x112930u;
    SET_GPR_U32(ctx, 31, 0x112938u);
    ctx->pc = 0x195670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195670u, 0x112930u, 0x112938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112938u;
label_112938:
    // 0x112938: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x112938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11293cu;
}
