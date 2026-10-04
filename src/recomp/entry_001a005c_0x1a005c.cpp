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

// Function: entry_001a005c
// Address: 0x1a005c - 0x1a0088
void entry_001a005c_0x1a005c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a005c_0x1a005c");
#endif

    switch (ctx->pc) {
        case 0x1a0068u: goto label_1a0068;
        default: break;
    }

    ctx->pc = 0x1a005cu;

    // 0x1a005c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a005cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0060: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A0060u;
    SET_GPR_U32(ctx, 31, 0x1A0068u);
    ctx->pc = 0x1A0064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0060u;
    // 0x1a0064: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A0060u, 0x1A0068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0068u;
label_1a0068:
    // 0x1a0068: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0068u;
    {
        const bool branch_taken_0x1a0068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0068u;
        // 0x1a006c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0068) {
            ctx->pc = 0x1A0088u;
            return;
        }
    }
    ctx->pc = 0x1A0070u;
    // 0x1a0070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0074: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a0074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x1a0078: 0x24a5a1d0  addiu       $a1, $a1, -0x5E30
    ctx->pc = 0x1a0078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943184));
    // 0x1a007c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a007cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0080: 0x8068d2c  j           func_1A34B0
    ctx->pc = 0x1A0080u;
    ctx->pc = 0x1A0084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0080u;
    // 0x1a0084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    FUN_001a34b0_0x1a34b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0088u;
}
