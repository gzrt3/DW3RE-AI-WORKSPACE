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

// Function: entry_001c0258
// Address: 0x1c0258 - 0x1c0270
void entry_001c0258_0x1c0258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0258_0x1c0258");
#endif

    switch (ctx->pc) {
        case 0x1c0260u: goto label_1c0260;
        default: break;
    }

    ctx->pc = 0x1c0258u;

    // 0x1c0258: 0xc0700d4  jal         func_1C0350
    ctx->pc = 0x1C0258u;
    SET_GPR_U32(ctx, 31, 0x1C0260u);
    ctx->pc = 0x1C025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0258u;
    // 0x1c025c: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0350u, 0x1C0258u, 0x1C0260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0260u;
label_1c0260:
    // 0x1c0260: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0260u;
    {
        const bool branch_taken_0x1c0260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0260u;
        // 0x1c0264: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0260) {
            ctx->pc = 0x1C0270u;
            return;
        }
    }
    ctx->pc = 0x1C0268u;
    // 0x1c0268: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C0268u;
    {
        const bool branch_taken_0x1c0268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0268u;
        // 0x1c026c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0268) {
            ctx->pc = 0x1C02B4u;
            return;
        }
    }
    ctx->pc = 0x1C0270u;
}
