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

// Function: entry_00174c10
// Address: 0x174c10 - 0x174c24
void entry_00174c10_0x174c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174c10_0x174c10");
#endif

    switch (ctx->pc) {
        case 0x174c1cu: goto label_174c1c;
        default: break;
    }

    ctx->pc = 0x174c10u;

    // 0x174c10: 0x24a5ffe9  addiu       $a1, $a1, -0x17
    ctx->pc = 0x174c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967273));
    // 0x174c14: 0xc05b688  jal         func_16DA20
    ctx->pc = 0x174C14u;
    SET_GPR_U32(ctx, 31, 0x174C1Cu);
    ctx->pc = 0x174C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C14u;
    // 0x174c18: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA20u, 0x174C14u, 0x174C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C1Cu;
label_174c1c:
    // 0x174c1c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x174C1Cu;
    {
        const bool branch_taken_0x174c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C1Cu;
        // 0x174c20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c1c) {
            ctx->pc = 0x174C94u;
            return;
        }
    }
    ctx->pc = 0x174C24u;
}
