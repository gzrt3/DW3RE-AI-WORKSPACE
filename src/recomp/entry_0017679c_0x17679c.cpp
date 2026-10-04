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

// Function: entry_0017679c
// Address: 0x17679c - 0x1767b4
void entry_0017679c_0x17679c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017679c_0x17679c");
#endif

    switch (ctx->pc) {
        case 0x1767acu: goto label_1767ac;
        default: break;
    }

    ctx->pc = 0x17679cu;

    // 0x17679c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x17679cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767a0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1767a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767a4: 0xc072ecc  jal         func_1CBB30
    ctx->pc = 0x1767A4u;
    SET_GPR_U32(ctx, 31, 0x1767ACu);
    ctx->pc = 0x1767A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1767A4u;
    // 0x1767a8: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBB30u, 0x1767A4u, 0x1767ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1767ACu;
label_1767ac:
    // 0x1767ac: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1767ACu;
    {
        const bool branch_taken_0x1767ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1767ac) {
            ctx->pc = 0x17694Cu;
            return;
        }
    }
    ctx->pc = 0x1767B4u;
}
