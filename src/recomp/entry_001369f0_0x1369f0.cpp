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

// Function: entry_001369f0
// Address: 0x1369f0 - 0x136a1c
void entry_001369f0_0x1369f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001369f0_0x1369f0");
#endif

    switch (ctx->pc) {
        case 0x136a0cu: goto label_136a0c;
        case 0x136a14u: goto label_136a14;
        default: break;
    }

    ctx->pc = 0x1369f0u;

    // 0x1369f0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1369f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1369f4: 0x2402f7ff  addiu       $v0, $zero, -0x801
    ctx->pc = 0x1369f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x1369f8: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x1369f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x1369fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1369fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x136a00: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136a04: 0xc055e34  jal         func_1578D0
    ctx->pc = 0x136A04u;
    SET_GPR_U32(ctx, 31, 0x136A0Cu);
    ctx->pc = 0x136A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A04u;
    // 0x136a08: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1578D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1578D0u, 0x136A04u, 0x136A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A0Cu;
label_136a0c:
    // 0x136a0c: 0xc05af40  jal         func_16BD00
    ctx->pc = 0x136A0Cu;
    SET_GPR_U32(ctx, 31, 0x136A14u);
    ctx->pc = 0x136A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A0Cu;
    // 0x136a10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD00u, 0x136A0Cu, 0x136A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A14u;
label_136a14:
    // 0x136a14: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x136A14u;
    {
        const bool branch_taken_0x136a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a14) {
            ctx->pc = 0x136A90u;
            return;
        }
    }
    ctx->pc = 0x136A1Cu;
}
