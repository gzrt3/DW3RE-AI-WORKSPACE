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

// Function: FUN_0012d030
// Address: 0x12d030 - 0x12d060
void FUN_0012d030_0x12d030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012d030_0x12d030");
#endif

    switch (ctx->pc) {
        case 0x12d04cu: goto label_12d04c;
        default: break;
    }

    ctx->pc = 0x12d030u;

    // 0x12d030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d038: 0x948302e6  lhu         $v1, 0x2E6($a0)
    ctx->pc = 0x12d038u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
    // 0x12d03c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D03Cu;
    {
        const bool branch_taken_0x12d03c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x12d03c) {
            ctx->pc = 0x12D054u;
            goto label_12d054;
        }
    }
    ctx->pc = 0x12D044u;
    // 0x12d044: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12D044u;
    SET_GPR_U32(ctx, 31, 0x12D04Cu);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12D044u, 0x12D04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D04Cu;
label_12d04c:
    // 0x12d04c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12D04Cu;
    {
        const bool branch_taken_0x12d04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D04Cu;
        // 0x12d050: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d04c) {
            ctx->pc = 0x12D060u;
            return;
        }
    }
    ctx->pc = 0x12D054u;
label_12d054:
    // 0x12d054: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d058: 0xa48302e6  sh          $v1, 0x2E6($a0)
    ctx->pc = 0x12d058u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 742), (uint16_t)GPR_U32(ctx, 3));
    // 0x12d05c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x12d060u;
}
