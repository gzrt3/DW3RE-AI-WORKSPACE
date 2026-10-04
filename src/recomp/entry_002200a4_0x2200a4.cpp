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

// Function: entry_002200a4
// Address: 0x2200a4 - 0x2200b4
void entry_002200a4_0x2200a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002200a4_0x2200a4");
#endif

    switch (ctx->pc) {
        case 0x2200acu: goto label_2200ac;
        default: break;
    }

    ctx->pc = 0x2200a4u;

    // 0x2200a4: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2200A4u;
    SET_GPR_U32(ctx, 31, 0x2200ACu);
    ctx->pc = 0x2200A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200A4u;
    // 0x2200a8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2200A4u, 0x2200ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200ACu;
label_2200ac:
    // 0x2200ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2200ACu;
    {
        const bool branch_taken_0x2200ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2200B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200ACu;
        // 0x2200b0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200ac) {
            ctx->pc = 0x2200E8u;
            return;
        }
    }
    ctx->pc = 0x2200B4u;
}
