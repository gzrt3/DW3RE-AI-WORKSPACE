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

// Function: entry_001d4f54
// Address: 0x1d4f54 - 0x1d4f74
void entry_001d4f54_0x1d4f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4f54_0x1d4f54");
#endif

    switch (ctx->pc) {
        case 0x1d4f5cu: goto label_1d4f5c;
        default: break;
    }

    ctx->pc = 0x1d4f54u;

    // 0x1d4f54: 0xc04fbd4  jal         func_13EF50
    ctx->pc = 0x1D4F54u;
    SET_GPR_U32(ctx, 31, 0x1D4F5Cu);
    ctx->pc = 0x13EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF50u, 0x1D4F54u, 0x1D4F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F5Cu;
label_1d4f5c:
    // 0x1d4f5c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1d4f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d4f60: 0x9063023a  lbu         $v1, 0x23A($v1)
    ctx->pc = 0x1d4f60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 570)));
    // 0x1d4f64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4F64u;
    {
        const bool branch_taken_0x1d4f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F64u;
        // 0x1d4f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f64) {
            ctx->pc = 0x1D4F74u;
            return;
        }
    }
    ctx->pc = 0x1D4F6Cu;
    // 0x1d4f6c: 0xc054638  jal         func_1518E0
    ctx->pc = 0x1D4F6Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F74u);
    ctx->pc = 0x1518E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518E0u, 0x1D4F6Cu, 0x1D4F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F74u;
}
