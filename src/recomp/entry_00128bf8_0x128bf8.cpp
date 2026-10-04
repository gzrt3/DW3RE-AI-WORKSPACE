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

// Function: entry_00128bf8
// Address: 0x128bf8 - 0x128c08
void entry_00128bf8_0x128bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128bf8_0x128bf8");
#endif

    switch (ctx->pc) {
        case 0x128c00u: goto label_128c00;
        default: break;
    }

    ctx->pc = 0x128bf8u;

    // 0x128bf8: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x128BF8u;
    SET_GPR_U32(ctx, 31, 0x128C00u);
    ctx->pc = 0x128BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128BF8u;
    // 0x128bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x128BF8u, 0x128C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C00u;
label_128c00:
    // 0x128c00: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x128C00u;
    {
        const bool branch_taken_0x128c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C00u;
        // 0x128c04: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c00) {
            ctx->pc = 0x128D60u;
            return;
        }
    }
    ctx->pc = 0x128C08u;
}
