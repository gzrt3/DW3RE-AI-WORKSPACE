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

// Function: entry_00222268
// Address: 0x222268 - 0x222294
void entry_00222268_0x222268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222268_0x222268");
#endif

    switch (ctx->pc) {
        case 0x22227cu: goto label_22227c;
        default: break;
    }

    ctx->pc = 0x222268u;

    // 0x222268: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x222268u;
    {
        const bool branch_taken_0x222268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222268) {
            ctx->pc = 0x2222FCu;
            return;
        }
    }
    ctx->pc = 0x222270u;
    // 0x222270: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x222270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
    // 0x222274: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x222274u;
    SET_GPR_U32(ctx, 31, 0x22227Cu);
    ctx->pc = 0x222278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222274u;
    // 0x222278: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x222274u, 0x22227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22227Cu;
label_22227c:
    // 0x22227c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x22227Cu;
    {
        const bool branch_taken_0x22227c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22227c) {
            ctx->pc = 0x2222FCu;
            return;
        }
    }
    ctx->pc = 0x222284u;
    // 0x222284: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x222284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x222288: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22228c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x22228Cu;
    {
        const bool branch_taken_0x22228c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22228Cu;
        // 0x222290: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22228c) {
            ctx->pc = 0x2222FCu;
            return;
        }
    }
    ctx->pc = 0x222294u;
}
