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

// Function: entry_0022f3f4
// Address: 0x22f3f4 - 0x22f410
void entry_0022f3f4_0x22f3f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f3f4_0x22f3f4");
#endif

    switch (ctx->pc) {
        case 0x22f3fcu: goto label_22f3fc;
        case 0x22f40cu: goto label_22f40c;
        default: break;
    }

    ctx->pc = 0x22f3f4u;

    // 0x22f3f4: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F3F4u;
    SET_GPR_U32(ctx, 31, 0x22F3FCu);
    ctx->pc = 0x22F3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3F4u;
    // 0x22f3f8: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F3F4u, 0x22F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3FCu;
label_22f3fc:
    // 0x22f3fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F3FCu;
    {
        const bool branch_taken_0x22f3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3FCu;
        // 0x22f400: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3fc) {
            ctx->pc = 0x22F410u;
            return;
        }
    }
    ctx->pc = 0x22F404u;
    // 0x22f404: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F404u;
    SET_GPR_U32(ctx, 31, 0x22F40Cu);
    ctx->pc = 0x22F408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F404u;
    // 0x22f408: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F404u, 0x22F40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F40Cu;
label_22f40c:
    // 0x22f40c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x22f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x22f410u;
}
