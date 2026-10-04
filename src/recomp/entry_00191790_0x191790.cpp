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

// Function: entry_00191790
// Address: 0x191790 - 0x1917bc
void entry_00191790_0x191790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191790_0x191790");
#endif

    switch (ctx->pc) {
        case 0x1917b4u: goto label_1917b4;
        default: break;
    }

    ctx->pc = 0x191790u;

    // 0x191790: 0x8ce200b0  lw          $v0, 0xB0($a3)
    ctx->pc = 0x191790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x191794: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x191794u;
    {
        const bool branch_taken_0x191794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191794u;
        // 0x191798: 0x24e50020  addiu       $a1, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191794) {
            ctx->pc = 0x1917BCu;
            return;
        }
    }
    ctx->pc = 0x19179Cu;
    // 0x19179c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x19179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1917a0: 0x30421800  andi        $v0, $v0, 0x1800
    ctx->pc = 0x1917a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6144);
    // 0x1917a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1917A4u;
    {
        const bool branch_taken_0x1917a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1917a4) {
            ctx->pc = 0x1917BCu;
            return;
        }
    }
    ctx->pc = 0x1917ACu;
    // 0x1917ac: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1917ACu;
    SET_GPR_U32(ctx, 31, 0x1917B4u);
    ctx->pc = 0x1917B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917ACu;
    // 0x1917b0: 0x24650020  addiu       $a1, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1917ACu, 0x1917B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917B4u;
label_1917b4:
    // 0x1917b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1917B4u;
    {
        const bool branch_taken_0x1917b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917B4u;
        // 0x1917b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917b4) {
            ctx->pc = 0x1917C8u;
            return;
        }
    }
    ctx->pc = 0x1917BCu;
}
