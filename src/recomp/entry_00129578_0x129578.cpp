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

// Function: entry_00129578
// Address: 0x129578 - 0x12959c
void entry_00129578_0x129578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129578_0x129578");
#endif

    switch (ctx->pc) {
        case 0x129580u: goto label_129580;
        default: break;
    }

    ctx->pc = 0x129578u;

label_129578:
    // 0x129578: 0xc04a56c  jal         func_1295B0
    ctx->pc = 0x129578u;
    SET_GPR_U32(ctx, 31, 0x129580u);
    ctx->pc = 0x12957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129578u;
    // 0x12957c: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1295B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1295B0u, 0x129578u, 0x129580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129580u;
label_129580:
    // 0x129580: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x129580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x129584: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x129584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x129588: 0x0  nop
    ctx->pc = 0x129588u;
    // NOP
    // 0x12958c: 0x0  nop
    ctx->pc = 0x12958cu;
    // NOP
    // 0x129590: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x129590u;
    {
        const bool branch_taken_0x129590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129590) {
            ctx->pc = 0x129578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129578;
        }
    }
    ctx->pc = 0x129598u;
    // 0x129598: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x129598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x12959cu;
}
