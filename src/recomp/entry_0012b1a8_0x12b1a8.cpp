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

// Function: entry_0012b1a8
// Address: 0x12b1a8 - 0x12b1cc
void entry_0012b1a8_0x12b1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b1a8_0x12b1a8");
#endif

    switch (ctx->pc) {
        case 0x12b1c4u: goto label_12b1c4;
        default: break;
    }

    ctx->pc = 0x12b1a8u;

    // 0x12b1a8: 0x960702e6  lhu         $a3, 0x2E6($s0)
    ctx->pc = 0x12b1a8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12b1ac: 0x960602f8  lhu         $a2, 0x2F8($s0)
    ctx->pc = 0x12b1acu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x12b1b0: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x12b1b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x12b1b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B1B4u;
    {
        const bool branch_taken_0x12b1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1B4u;
        // 0x12b1b8: 0x61083  sra         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1b4) {
            ctx->pc = 0x12B1CCu;
            return;
        }
    }
    ctx->pc = 0x12B1BCu;
    // 0x12b1bc: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12B1BCu;
    SET_GPR_U32(ctx, 31, 0x12B1C4u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12B1BCu, 0x12B1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B1C4u;
label_12b1c4:
    // 0x12b1c4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x12B1C4u;
    {
        const bool branch_taken_0x12b1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b1c4) {
            ctx->pc = 0x12B2C8u;
            return;
        }
    }
    ctx->pc = 0x12B1CCu;
}
