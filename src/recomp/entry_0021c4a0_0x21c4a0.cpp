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

// Function: entry_0021c4a0
// Address: 0x21c4a0 - 0x21c4c0
void entry_0021c4a0_0x21c4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c4a0_0x21c4a0");
#endif

    ctx->pc = 0x21c4a0u;

    // 0x21c4a0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x21C4A0u;
    {
        const bool branch_taken_0x21c4a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c4a0) {
            ctx->pc = 0x21C4C0u;
            return;
        }
    }
    ctx->pc = 0x21C4A8u;
    // 0x21c4a8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21c4ac: 0x90228ea2  lbu         $v0, -0x715E($at)
    ctx->pc = 0x21c4acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x588EA2u));
    // 0x21c4b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C4B0u;
    {
        const bool branch_taken_0x21c4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4B0u;
        // 0x21c4b4: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c4b0) {
            ctx->pc = 0x21C4C0u;
            return;
        }
    }
    ctx->pc = 0x21C4B8u;
    // 0x21c4b8: 0xc0452cc  jal         func_114B30
    ctx->pc = 0x21C4B8u;
    SET_GPR_U32(ctx, 31, 0x21C4C0u);
    ctx->pc = 0x21C4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C4B8u;
    // 0x21c4bc: 0x24848d00  addiu       $a0, $a0, -0x7300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B30u, 0x21C4B8u, 0x21C4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C4C0u;
}
