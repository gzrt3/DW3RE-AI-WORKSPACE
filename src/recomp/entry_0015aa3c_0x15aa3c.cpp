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

// Function: entry_0015aa3c
// Address: 0x15aa3c - 0x15aa54
void entry_0015aa3c_0x15aa3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015aa3c_0x15aa3c");
#endif

    switch (ctx->pc) {
        case 0x15aa44u: goto label_15aa44;
        default: break;
    }

    ctx->pc = 0x15aa3cu;

    // 0x15aa3c: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x15AA3Cu;
    SET_GPR_U32(ctx, 31, 0x15AA44u);
    ctx->pc = 0x15AA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AA3Cu;
    // 0x15aa40: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x15AA3Cu, 0x15AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AA44u;
label_15aa44:
    // 0x15aa44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AA44u;
    {
        const bool branch_taken_0x15aa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA44u;
        // 0x15aa48: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa44) {
            ctx->pc = 0x15AA54u;
            return;
        }
    }
    ctx->pc = 0x15AA4Cu;
    // 0x15aa4c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x15AA4Cu;
    {
        const bool branch_taken_0x15aa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA4Cu;
        // 0x15aa50: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa4c) {
            ctx->pc = 0x15AB64u;
            return;
        }
    }
    ctx->pc = 0x15AA54u;
}
