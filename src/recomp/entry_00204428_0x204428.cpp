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

// Function: entry_00204428
// Address: 0x204428 - 0x204444
void entry_00204428_0x204428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204428_0x204428");
#endif

    switch (ctx->pc) {
        case 0x20443cu: goto label_20443c;
        default: break;
    }

    ctx->pc = 0x204428u;

    // 0x204428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20442c: 0x25260484  addiu       $a2, $t1, 0x484
    ctx->pc = 0x20442cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1156));
    // 0x204430: 0x25270488  addiu       $a3, $t1, 0x488
    ctx->pc = 0x204430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1160));
    // 0x204434: 0xc06c6c0  jal         func_1B1B00
    ctx->pc = 0x204434u;
    SET_GPR_U32(ctx, 31, 0x20443Cu);
    ctx->pc = 0x204438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204434u;
    // 0x204438: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B00u, 0x204434u, 0x20443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20443Cu;
label_20443c:
    // 0x20443c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x20443Cu;
    {
        const bool branch_taken_0x20443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20443Cu;
        // 0x204440: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20443c) {
            ctx->pc = 0x20455Cu;
            return;
        }
    }
    ctx->pc = 0x204444u;
}
