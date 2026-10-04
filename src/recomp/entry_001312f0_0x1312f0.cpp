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

// Function: entry_001312f0
// Address: 0x1312f0 - 0x131314
void entry_001312f0_0x1312f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001312f0_0x1312f0");
#endif

    switch (ctx->pc) {
        case 0x1312f8u: goto label_1312f8;
        case 0x13130cu: goto label_13130c;
        default: break;
    }

    ctx->pc = 0x1312f0u;

    // 0x1312f0: 0xc05b648  jal         func_16D920
    ctx->pc = 0x1312F0u;
    SET_GPR_U32(ctx, 31, 0x1312F8u);
    ctx->pc = 0x16D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D920u, 0x1312F0u, 0x1312F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312F8u;
label_1312f8:
    // 0x1312f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1312f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1312fc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1312FCu;
    {
        const bool branch_taken_0x1312fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1312fc) {
            ctx->pc = 0x131314u;
            return;
        }
    }
    ctx->pc = 0x131304u;
    // 0x131304: 0xc05b640  jal         func_16D900
    ctx->pc = 0x131304u;
    SET_GPR_U32(ctx, 31, 0x13130Cu);
    ctx->pc = 0x16D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D900u, 0x131304u, 0x13130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13130Cu;
label_13130c:
    // 0x13130c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13130Cu;
    {
        const bool branch_taken_0x13130c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13130Cu;
        // 0x131310: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13130c) {
            ctx->pc = 0x131324u;
            return;
        }
    }
    ctx->pc = 0x131314u;
}
