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

// Function: entry_00136904
// Address: 0x136904 - 0x136920
void entry_00136904_0x136904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136904_0x136904");
#endif

    ctx->pc = 0x136904u;

    // 0x136904: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x136904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x136908: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x136908u;
    {
        const bool branch_taken_0x136908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136908) {
            ctx->pc = 0x136920u;
            return;
        }
    }
    ctx->pc = 0x136910u;
    // 0x136910: 0x34a20010  ori         $v0, $a1, 0x10
    ctx->pc = 0x136910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
    // 0x136914: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136918: 0xc04d39c  jal         func_134E70
    ctx->pc = 0x136918u;
    SET_GPR_U32(ctx, 31, 0x136920u);
    ctx->pc = 0x13691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136918u;
    // 0x13691c: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134E70u, 0x136918u, 0x136920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136920u;
}
