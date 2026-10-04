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

// Function: entry_00235db8
// Address: 0x235db8 - 0x235df8
void entry_00235db8_0x235db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235db8_0x235db8");
#endif

    switch (ctx->pc) {
        case 0x235dc0u: goto label_235dc0;
        default: break;
    }

    ctx->pc = 0x235db8u;

    // 0x235db8: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x235DB8u;
    SET_GPR_U32(ctx, 31, 0x235DC0u);
    ctx->pc = 0x235DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235DB8u;
    // 0x235dbc: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x235DB8u, 0x235DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DC0u;
label_235dc0:
    // 0x235dc0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x235dc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235dc4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x235DC4u;
    {
        const bool branch_taken_0x235dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x235DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DC4u;
        // 0x235dc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235dc4) {
            ctx->pc = 0x235DE0u;
            goto label_235de0;
        }
    }
    ctx->pc = 0x235DCCu;
    // 0x235dcc: 0x5262000a  beql        $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x235DCCu;
    {
        const bool branch_taken_0x235dcc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x235dcc) {
            ctx->pc = 0x235DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235DCCu;
            // 0x235dd0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235DF8u;
            return;
        }
    }
    ctx->pc = 0x235DD4u;
    // 0x235dd4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x235DD4u;
    {
        const bool branch_taken_0x235dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DD4u;
        // 0x235dd8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235dd4) {
            ctx->pc = 0x235DFCu;
            return;
        }
    }
    ctx->pc = 0x235DDCu;
    // 0x235ddc: 0x0  nop
    ctx->pc = 0x235ddcu;
    // NOP
label_235de0:
    // 0x235de0: 0x2402ff9d  addiu       $v0, $zero, -0x63
    ctx->pc = 0x235de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
    // 0x235de4: 0x2403ff9d  addiu       $v1, $zero, -0x63
    ctx->pc = 0x235de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
    // 0x235de8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x235de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x235dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235df0: 0xaf8282f8  sw          $v0, -0x7D08($gp)
    ctx->pc = 0x235df0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935288), GPR_U32(ctx, 2));
    // 0x235df4: 0xaf8082fc  sw          $zero, -0x7D04($gp)
    ctx->pc = 0x235df4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935292), GPR_U32(ctx, 0));
    ctx->pc = 0x235df8u;
}
