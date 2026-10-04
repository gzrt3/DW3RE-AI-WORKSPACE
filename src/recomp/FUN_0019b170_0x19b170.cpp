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

// Function: FUN_0019b170
// Address: 0x19b170 - 0x19b18c
void FUN_0019b170_0x19b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019b170_0x19b170");
#endif

    ctx->pc = 0x19b170u;

    // 0x19b170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b174: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19b174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19b178: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19b178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b17c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19b17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b180: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19b180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19b184: 0xc066c46  jal         func_19B118
    ctx->pc = 0x19B184u;
    SET_GPR_U32(ctx, 31, 0x19B18Cu);
    ctx->pc = 0x19B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B184u;
    // 0x19b188: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B118u, 0x19B184u, 0x19B18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B18Cu;
}
