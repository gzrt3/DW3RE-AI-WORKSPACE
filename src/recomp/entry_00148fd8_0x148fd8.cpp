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

// Function: entry_00148fd8
// Address: 0x148fd8 - 0x149000
void entry_00148fd8_0x148fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148fd8_0x148fd8");
#endif

    switch (ctx->pc) {
        case 0x148fe8u: goto label_148fe8;
        case 0x148ff8u: goto label_148ff8;
        default: break;
    }

    ctx->pc = 0x148fd8u;

    // 0x148fd8: 0x9226003a  lbu         $a2, 0x3A($s1)
    ctx->pc = 0x148fd8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x148fdc: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x148fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x148fe0: 0xc052808  jal         func_14A020
    ctx->pc = 0x148FE0u;
    SET_GPR_U32(ctx, 31, 0x148FE8u);
    ctx->pc = 0x148FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148FE0u;
    // 0x148fe4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A020u, 0x148FE0u, 0x148FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FE8u;
label_148fe8:
    // 0x148fe8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x148FE8u;
    {
        const bool branch_taken_0x148fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148FE8u;
        // 0x148fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148fe8) {
            ctx->pc = 0x149000u;
            return;
        }
    }
    ctx->pc = 0x148FF0u;
    // 0x148ff0: 0xc0528fc  jal         func_14A3F0
    ctx->pc = 0x148FF0u;
    SET_GPR_U32(ctx, 31, 0x148FF8u);
    ctx->pc = 0x148FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148FF0u;
    // 0x148ff4: 0x26250022  addiu       $a1, $s1, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A3F0u, 0x148FF0u, 0x148FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FF8u;
label_148ff8:
    // 0x148ff8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x148FF8u;
    {
        const bool branch_taken_0x148ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148ff8) {
            ctx->pc = 0x149004u;
            return;
        }
    }
    ctx->pc = 0x149000u;
}
