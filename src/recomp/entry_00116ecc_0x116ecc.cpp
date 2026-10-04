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

// Function: entry_00116ecc
// Address: 0x116ecc - 0x116ee4
void entry_00116ecc_0x116ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116ecc_0x116ecc");
#endif

    ctx->pc = 0x116eccu;

    // 0x116ecc: 0x0  nop
    ctx->pc = 0x116eccu;
    // NOP
    // 0x116ed0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x116ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x116ed4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x116ED4u;
    {
        const bool branch_taken_0x116ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116ED4u;
        // 0x116ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ed4) {
            ctx->pc = 0x116EE4u;
            return;
        }
    }
    ctx->pc = 0x116EDCu;
    // 0x116edc: 0xc05a0a8  jal         func_1682A0
    ctx->pc = 0x116EDCu;
    SET_GPR_U32(ctx, 31, 0x116EE4u);
    ctx->pc = 0x1682A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1682A0u, 0x116EDCu, 0x116EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116EE4u;
}
