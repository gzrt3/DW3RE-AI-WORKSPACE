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

// Function: entry_001afc60
// Address: 0x1afc60 - 0x1afc78
void entry_001afc60_0x1afc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afc60_0x1afc60");
#endif

    switch (ctx->pc) {
        case 0x1afc68u: goto label_1afc68;
        default: break;
    }

    ctx->pc = 0x1afc60u;

    // 0x1afc60: 0xc069ea6  jal         func_1A7A98
    ctx->pc = 0x1AFC60u;
    SET_GPR_U32(ctx, 31, 0x1AFC68u);
    ctx->pc = 0x1AFC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC60u;
    // 0x1afc64: 0x26048cc8  addiu       $a0, $s0, -0x7338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7A98u, 0x1AFC60u, 0x1AFC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC68u;
label_1afc68:
    // 0x1afc68: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AFC68u;
    {
        const bool branch_taken_0x1afc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC68u;
        // 0x1afc6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc68) {
            ctx->pc = 0x1AFC58u;
            return;
        }
    }
    ctx->pc = 0x1AFC70u;
    // 0x1afc70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFC70u;
    {
        const bool branch_taken_0x1afc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC70u;
        // 0x1afc74: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc70) {
            ctx->pc = 0x1AFC88u;
            return;
        }
    }
    ctx->pc = 0x1AFC78u;
}
