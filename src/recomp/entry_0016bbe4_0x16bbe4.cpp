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

// Function: entry_0016bbe4
// Address: 0x16bbe4 - 0x16bbfc
void entry_0016bbe4_0x16bbe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bbe4_0x16bbe4");
#endif

    switch (ctx->pc) {
        case 0x16bbecu: goto label_16bbec;
        default: break;
    }

    ctx->pc = 0x16bbe4u;

    // 0x16bbe4: 0xc08d9e0  jal         func_236780
    ctx->pc = 0x16BBE4u;
    SET_GPR_U32(ctx, 31, 0x16BBECu);
    ctx->pc = 0x236780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236780u, 0x16BBE4u, 0x16BBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BBECu;
label_16bbec:
    // 0x16bbec: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x16bbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16bbf0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BBF0u;
    {
        const bool branch_taken_0x16bbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBF0u;
        // 0x16bbf4: 0x30430020  andi        $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbf0) {
            ctx->pc = 0x16BBFCu;
            return;
        }
    }
    ctx->pc = 0x16BBF8u;
    // 0x16bbf8: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x16bbf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    ctx->pc = 0x16bbfcu;
}
