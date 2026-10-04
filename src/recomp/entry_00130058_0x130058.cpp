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

// Function: entry_00130058
// Address: 0x130058 - 0x130080
void entry_00130058_0x130058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130058_0x130058");
#endif

    switch (ctx->pc) {
        case 0x130060u: goto label_130060;
        case 0x130070u: goto label_130070;
        case 0x130078u: goto label_130078;
        default: break;
    }

    ctx->pc = 0x130058u;

    // 0x130058: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x130058u;
    SET_GPR_U32(ctx, 31, 0x130060u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x130058u, 0x130060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130060u;
label_130060:
    // 0x130060: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130060u;
    {
        const bool branch_taken_0x130060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130060u;
        // 0x130064: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130060) {
            ctx->pc = 0x130080u;
            return;
        }
    }
    ctx->pc = 0x130068u;
    // 0x130068: 0xc059eb8  jal         func_167AE0
    ctx->pc = 0x130068u;
    SET_GPR_U32(ctx, 31, 0x130070u);
    ctx->pc = 0x13006Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130068u;
    // 0x13006c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x130068u, 0x130070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130070u;
label_130070:
    // 0x130070: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x130070u;
    SET_GPR_U32(ctx, 31, 0x130078u);
    ctx->pc = 0x130074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130070u;
    // 0x130074: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x130070u, 0x130078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130078u;
label_130078:
    // 0x130078: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x130078u;
    {
        const bool branch_taken_0x130078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130078) {
            ctx->pc = 0x1300A0u;
            return;
        }
    }
    ctx->pc = 0x130080u;
}
