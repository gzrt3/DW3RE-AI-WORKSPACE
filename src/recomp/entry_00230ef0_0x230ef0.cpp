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

// Function: entry_00230ef0
// Address: 0x230ef0 - 0x230f04
void entry_00230ef0_0x230ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230ef0_0x230ef0");
#endif

    ctx->pc = 0x230ef0u;

    // 0x230ef0: 0x632c0  sll         $a2, $a2, 11
    ctx->pc = 0x230ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x230ef4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ef8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x230ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230efc: 0xc08c778  jal         func_231DE0
    ctx->pc = 0x230EFCu;
    SET_GPR_U32(ctx, 31, 0x230F04u);
    ctx->pc = 0x230F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230EFCu;
    // 0x230f00: 0x2669823  subu        $s3, $s3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231DE0u, 0x230EFCu, 0x230F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F04u;
}
