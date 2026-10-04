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

// Function: entry_001055b4
// Address: 0x1055b4 - 0x1055cc
void entry_001055b4_0x1055b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001055b4_0x1055b4");
#endif

    switch (ctx->pc) {
        case 0x1055c8u: goto label_1055c8;
        default: break;
    }

    ctx->pc = 0x1055b4u;

    // 0x1055b4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1055b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1055b8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1055B8u;
    {
        const bool branch_taken_0x1055b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1055BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1055B8u;
        // 0x1055bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055b8) {
            ctx->pc = 0x1055CCu;
            return;
        }
    }
    ctx->pc = 0x1055C0u;
    // 0x1055c0: 0xc05af2c  jal         func_16BCB0
    ctx->pc = 0x1055C0u;
    SET_GPR_U32(ctx, 31, 0x1055C8u);
    ctx->pc = 0x16BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BCB0u, 0x1055C0u, 0x1055C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1055C8u;
label_1055c8:
    // 0x1055c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1055c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1055ccu;
}
