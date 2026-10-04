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

// Function: entry_00198d28
// Address: 0x198d28 - 0x198d3c
void entry_00198d28_0x198d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198d28_0x198d28");
#endif

    switch (ctx->pc) {
        case 0x198d34u: goto label_198d34;
        default: break;
    }

    ctx->pc = 0x198d28u;

    // 0x198d28: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x198d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x198d2c: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x198D2Cu;
    SET_GPR_U32(ctx, 31, 0x198D34u);
    ctx->pc = 0x198D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198D2Cu;
    // 0x198d30: 0x24849aa0  addiu       $a0, $a0, -0x6560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x198D2Cu, 0x198D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198D34u;
label_198d34:
    // 0x198d34: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x198D34u;
    {
        const bool branch_taken_0x198d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D34u;
        // 0x198d38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d34) {
            ctx->pc = 0x198D64u;
            return;
        }
    }
    ctx->pc = 0x198D3Cu;
}
