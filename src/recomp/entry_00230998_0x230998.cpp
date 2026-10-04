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

// Function: entry_00230998
// Address: 0x230998 - 0x2309b8
void entry_00230998_0x230998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230998_0x230998");
#endif

    switch (ctx->pc) {
        case 0x2309a0u: goto label_2309a0;
        default: break;
    }

    ctx->pc = 0x230998u;

label_230998:
    // 0x230998: 0xc044a6c  jal         func_1129B0
    ctx->pc = 0x230998u;
    SET_GPR_U32(ctx, 31, 0x2309A0u);
    ctx->pc = 0x23099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230998u;
    // 0x23099c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1129B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129B0u, 0x230998u, 0x2309A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2309A0u;
label_2309a0:
    // 0x2309a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2309a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2309a4: 0x261000c8  addiu       $s0, $s0, 0xC8
    ctx->pc = 0x2309a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x2309a8: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x2309a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2309ac: 0x0  nop
    ctx->pc = 0x2309acu;
    // NOP
    // 0x2309b0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2309B0u;
    {
        const bool branch_taken_0x2309b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2309b0) {
            ctx->pc = 0x230998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230998;
        }
    }
    ctx->pc = 0x2309B8u;
}
