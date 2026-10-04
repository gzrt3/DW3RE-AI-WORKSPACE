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

// Function: entry_0021b14c
// Address: 0x21b14c - 0x21b178
void entry_0021b14c_0x21b14c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b14c_0x21b14c");
#endif

    switch (ctx->pc) {
        case 0x21b158u: goto label_21b158;
        case 0x21b168u: goto label_21b168;
        case 0x21b170u: goto label_21b170;
        default: break;
    }

    ctx->pc = 0x21b14cu;

    // 0x21b14c: 0x0  nop
    ctx->pc = 0x21b14cu;
    // NOP
    // 0x21b150: 0xc078078  jal         func_1E01E0
    ctx->pc = 0x21B150u;
    SET_GPR_U32(ctx, 31, 0x21B158u);
    ctx->pc = 0x1E01E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E01E0u, 0x21B150u, 0x21B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B158u;
label_21b158:
    // 0x21b158: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21b158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21b15c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21b15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b160: 0xc04e188  jal         func_138620
    ctx->pc = 0x21B160u;
    SET_GPR_U32(ctx, 31, 0x21B168u);
    ctx->pc = 0x21B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B160u;
    // 0x21b164: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x21B160u, 0x21B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B168u;
label_21b168:
    // 0x21b168: 0xc04e198  jal         func_138660
    ctx->pc = 0x21B168u;
    SET_GPR_U32(ctx, 31, 0x21B170u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x21B168u, 0x21B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B170u;
label_21b170:
    // 0x21b170: 0x144000b7  bnez        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x21B170u;
    {
        const bool branch_taken_0x21b170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b170) {
            ctx->pc = 0x21B450u;
            return;
        }
    }
    ctx->pc = 0x21B178u;
}
