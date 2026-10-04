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

// Function: entry_0021fd78
// Address: 0x21fd78 - 0x21fd98
void entry_0021fd78_0x21fd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fd78_0x21fd78");
#endif

    switch (ctx->pc) {
        case 0x21fd80u: goto label_21fd80;
        case 0x21fd90u: goto label_21fd90;
        default: break;
    }

    ctx->pc = 0x21fd78u;

    // 0x21fd78: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FD78u;
    SET_GPR_U32(ctx, 31, 0x21FD80u);
    ctx->pc = 0x21FD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD78u;
    // 0x21fd7c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FD78u, 0x21FD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD80u;
label_21fd80:
    // 0x21fd80: 0x104001c3  beqz        $v0, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x21FD80u;
    {
        const bool branch_taken_0x21fd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD80u;
        // 0x21fd84: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd80) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FD88u;
    // 0x21fd88: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FD88u;
    SET_GPR_U32(ctx, 31, 0x21FD90u);
    ctx->pc = 0x21FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD88u;
    // 0x21fd8c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FD88u, 0x21FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD90u;
label_21fd90:
    // 0x21fd90: 0x100001bf  b           . + 4 + (0x1BF << 2)
    ctx->pc = 0x21FD90u;
    {
        const bool branch_taken_0x21fd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd90) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FD98u;
}
