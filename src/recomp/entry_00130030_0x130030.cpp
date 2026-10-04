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

// Function: entry_00130030
// Address: 0x130030 - 0x130058
void entry_00130030_0x130030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130030_0x130030");
#endif

    switch (ctx->pc) {
        case 0x130038u: goto label_130038;
        case 0x130048u: goto label_130048;
        case 0x130050u: goto label_130050;
        default: break;
    }

    ctx->pc = 0x130030u;

    // 0x130030: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x130030u;
    SET_GPR_U32(ctx, 31, 0x130038u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x130030u, 0x130038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130038u;
label_130038:
    // 0x130038: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130038u;
    {
        const bool branch_taken_0x130038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130038u;
        // 0x13003c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130038) {
            ctx->pc = 0x130058u;
            return;
        }
    }
    ctx->pc = 0x130040u;
    // 0x130040: 0xc059eb8  jal         func_167AE0
    ctx->pc = 0x130040u;
    SET_GPR_U32(ctx, 31, 0x130048u);
    ctx->pc = 0x130044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130040u;
    // 0x130044: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x130040u, 0x130048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130048u;
label_130048:
    // 0x130048: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x130048u;
    SET_GPR_U32(ctx, 31, 0x130050u);
    ctx->pc = 0x13004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130048u;
    // 0x13004c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x130048u, 0x130050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130050u;
label_130050:
    // 0x130050: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x130050u;
    {
        const bool branch_taken_0x130050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130050) {
            ctx->pc = 0x1300A0u;
            return;
        }
    }
    ctx->pc = 0x130058u;
}
