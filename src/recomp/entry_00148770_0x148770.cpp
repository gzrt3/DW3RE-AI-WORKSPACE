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

// Function: entry_00148770
// Address: 0x148770 - 0x1487ac
void entry_00148770_0x148770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148770_0x148770");
#endif

    switch (ctx->pc) {
        case 0x148788u: goto label_148788;
        case 0x148790u: goto label_148790;
        case 0x148798u: goto label_148798;
        case 0x1487a0u: goto label_1487a0;
        case 0x1487a8u: goto label_1487a8;
        default: break;
    }

    ctx->pc = 0x148770u;

    // 0x148770: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x148770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x148774: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x148774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x148778: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x148778u;
    {
        const bool branch_taken_0x148778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148778u;
        // 0x14877c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148778) {
            ctx->pc = 0x14874Cu;
            return;
        }
    }
    ctx->pc = 0x148780u;
    // 0x148780: 0xc04faf8  jal         func_13EBE0
    ctx->pc = 0x148780u;
    SET_GPR_U32(ctx, 31, 0x148788u);
    ctx->pc = 0x13EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EBE0u, 0x148780u, 0x148788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148788u;
label_148788:
    // 0x148788: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x148788u;
    SET_GPR_U32(ctx, 31, 0x148790u);
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x148788u, 0x148790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148790u;
label_148790:
    // 0x148790: 0xc04f524  jal         func_13D490
    ctx->pc = 0x148790u;
    SET_GPR_U32(ctx, 31, 0x148798u);
    ctx->pc = 0x13D490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D490u, 0x148790u, 0x148798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148798u;
label_148798:
    // 0x148798: 0xc041d60  jal         func_107580
    ctx->pc = 0x148798u;
    SET_GPR_U32(ctx, 31, 0x1487A0u);
    ctx->pc = 0x107580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107580u, 0x148798u, 0x1487A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487A0u;
label_1487a0:
    // 0x1487a0: 0xc04f3e0  jal         func_13CF80
    ctx->pc = 0x1487A0u;
    SET_GPR_U32(ctx, 31, 0x1487A8u);
    ctx->pc = 0x13CF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CF80u, 0x1487A0u, 0x1487A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487A8u;
label_1487a8:
    // 0x1487a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1487a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1487acu;
}
