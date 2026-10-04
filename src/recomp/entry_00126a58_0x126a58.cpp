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

// Function: entry_00126a58
// Address: 0x126a58 - 0x126a78
void entry_00126a58_0x126a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126a58_0x126a58");
#endif

    switch (ctx->pc) {
        case 0x126a70u: goto label_126a70;
        default: break;
    }

    ctx->pc = 0x126a58u;

    // 0x126a58: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x126a58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x126a5c: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x126a5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x126a60: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x126A60u;
    {
        const bool branch_taken_0x126a60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x126A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A60u;
        // 0x126a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a60) {
            ctx->pc = 0x126A78u;
            return;
        }
    }
    ctx->pc = 0x126A68u;
    // 0x126a68: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x126A68u;
    SET_GPR_U32(ctx, 31, 0x126A70u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x126A68u, 0x126A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A70u;
label_126a70:
    // 0x126a70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x126A70u;
    {
        const bool branch_taken_0x126a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A70u;
        // 0x126a74: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a70) {
            ctx->pc = 0x126A84u;
            return;
        }
    }
    ctx->pc = 0x126A78u;
}
