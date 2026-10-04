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

// Function: entry_0012b894
// Address: 0x12b894 - 0x12b8b4
void entry_0012b894_0x12b894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b894_0x12b894");
#endif

    switch (ctx->pc) {
        case 0x12b8acu: goto label_12b8ac;
        default: break;
    }

    ctx->pc = 0x12b894u;

    // 0x12b894: 0x94830d72  lhu         $v1, 0xD72($a0)
    ctx->pc = 0x12b894u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3442)));
    // 0x12b898: 0x28610021  slti        $at, $v1, 0x21
    ctx->pc = 0x12b898u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x12b89c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B89Cu;
    {
        const bool branch_taken_0x12b89c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B89Cu;
        // 0x12b8a0: 0x28610011  slti        $at, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b89c) {
            ctx->pc = 0x12B8B4u;
            return;
        }
    }
    ctx->pc = 0x12B8A4u;
    // 0x12b8a4: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12B8A4u;
    SET_GPR_U32(ctx, 31, 0x12B8ACu);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12B8A4u, 0x12B8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B8ACu;
label_12b8ac:
    // 0x12b8ac: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x12B8ACu;
    {
        const bool branch_taken_0x12b8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b8ac) {
            ctx->pc = 0x12B9C8u;
            return;
        }
    }
    ctx->pc = 0x12B8B4u;
}
