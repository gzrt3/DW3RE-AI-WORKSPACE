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

// Function: entry_00229ac4
// Address: 0x229ac4 - 0x229ae0
void entry_00229ac4_0x229ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229ac4_0x229ac4");
#endif

    switch (ctx->pc) {
        case 0x229ad4u: goto label_229ad4;
        default: break;
    }

    ctx->pc = 0x229ac4u;

    // 0x229ac4: 0x0  nop
    ctx->pc = 0x229ac4u;
    // NOP
    // 0x229ac8: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x229ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x229acc: 0xc08a004  jal         func_228010
    ctx->pc = 0x229ACCu;
    SET_GPR_U32(ctx, 31, 0x229AD4u);
    ctx->pc = 0x229AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229ACCu;
    // 0x229ad0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228010u, 0x229ACCu, 0x229AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AD4u;
label_229ad4:
    // 0x229ad4: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x229ad4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x229ad8: 0x1020ffe4  beqz        $at, . + 4 + (-0x1C << 2)
    ctx->pc = 0x229AD8u;
    {
        const bool branch_taken_0x229ad8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x229ad8) {
            ctx->pc = 0x229A6Cu;
            return;
        }
    }
    ctx->pc = 0x229AE0u;
}
