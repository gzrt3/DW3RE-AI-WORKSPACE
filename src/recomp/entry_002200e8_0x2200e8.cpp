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

// Function: entry_002200e8
// Address: 0x2200e8 - 0x220108
void entry_002200e8_0x2200e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002200e8_0x2200e8");
#endif

    switch (ctx->pc) {
        case 0x2200f0u: goto label_2200f0;
        case 0x220104u: goto label_220104;
        default: break;
    }

    ctx->pc = 0x2200e8u;

    // 0x2200e8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x2200E8u;
    SET_GPR_U32(ctx, 31, 0x2200F0u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x2200E8u, 0x2200F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200F0u;
label_2200f0:
    // 0x2200f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2200F0u;
    {
        const bool branch_taken_0x2200f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2200F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200F0u;
        // 0x2200f4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200f0) {
            ctx->pc = 0x220108u;
            return;
        }
    }
    ctx->pc = 0x2200F8u;
    // 0x2200f8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2200f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2200fc: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2200FCu;
    SET_GPR_U32(ctx, 31, 0x220104u);
    ctx->pc = 0x220100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200FCu;
    // 0x220100: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2200FCu, 0x220104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220104u;
label_220104:
    // 0x220104: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x220104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x220108u;
}
